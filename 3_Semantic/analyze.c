/****************************************************/
/* File: analyze.c                                  */
/* Semantic analyzer implementation                 */
/* for the TINY compiler                            */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#include "globals.h"
#include "symtab.h"
#include "analyze.h"
#include "util.h"

/* counter for variable memory locations */
static int location = 0;
static int remain_at_current_sc = FALSE;
static ScopeList global_sc = NULL;
static char *current_sc = NULL;
static int loc_save = 0;

/* Procedure traverse is a generic recursive 
 * syntax tree traversal routine:
 * it applies preProc in preorder and postProc 
 * in postorder to tree pointed to by t
 */
static void traverse( TreeNode * t,
               void (* preProc) (TreeNode *),
               void (* postProc) (TreeNode *) )
{ 
  // printf("traverse\n");
  // printf("%s\n", t->attr.name);
  if (t != NULL)
  { 
    // printf("t\n");
    preProc(t);
    { int i;
      for (i=0; i < MAXCHILDREN; i++)
        traverse(t->child[i],preProc,postProc);
    }
    postProc(t);
    traverse(t->sibling,preProc,postProc);
  }
}

/* Procedure insertNode inserts 
 * identifiers stored in t into 
 * the symbol table 
 */
static void insertNode( TreeNode * t )
{ 
  ScopeList sc = sc_top();
  switch (t->nodekind)
  { case StmtK:
      switch (t->kind.stmt)
      { case CompK:
          if (remain_at_current_sc) remain_at_current_sc = FALSE;
          else {
            sc_push(sc_create(current_sc));
            location++;
          }
          t->scope = sc_top();
          break;
        default:
          // t->scope = sc_top();
          break;
      }
      break;
    case ExpK:
      switch (t->kind.exp)
      { case IdK:
        case ArrK:
        case CallK:
          if (st_lookup(t->attr.name) == NULL) {
            fprintf(listing, "Error: Undeclared variable \"%s\" is used at line %d\n", t->attr.name, t->lineno);
            Error = TRUE;
            t->nodekind = DecK;
            st_insert(t->attr.name, t->lineno, sc_top()->loc++, t);
          }
          else
          /* already in table, so ignore location, 
             add line number of use only */ 
            st_addlineno(t->attr.name, t->lineno);
          t->scope = sc;
          break;
        default:
          break;
      }
      break;
    case DecK:
      switch (t->kind.dec)
      { case VarK:
          if (t->type == Void) {
            fprintf(listing, "Error: The void-type variable is declared at line %d (name : \"%s\")\n", t->lineno, t->attr.name);
            Error = TRUE;
            break;
          }

          else if (st_lookup_excluding_parent(t->attr.name) == NULL) {
            // printf("insert : %s\n", t->attr.name);
            st_insert(t->attr.name, t->lineno, sc_top()->loc++, t);
          }
          else {
            fprintf(listing, "Error: Symbol \"%s\" is redefined at line %d\n", t->attr.name, t->lineno);
            Error = TRUE;
          }
          t->scope = sc;
          break;
        case FunK:
          
          if (st_lookup_excluding_parent(t->attr.name) != NULL) {
            // st_insert(t->attr.name, t->type, t->lineno, 0);
            fprintf(listing, "Error: Symbol \"%s\" is redefined at line %d\n", t->attr.name, t->lineno);
            Error = TRUE;
            break;
          }
          st_insert(t->attr.name, t->lineno, sc_top()->loc++, t);
          current_sc = t->attr.name;
          sc_push(sc_create(current_sc));
          remain_at_current_sc = TRUE;
          // global_sc->loc++;
          // loc_save = location;
          // location = 0;
          t->scope = sc;
          break;
        case ParamK:
          // l = st_lookup(current_sc);)
          if (t->attr.name == NULL) {
            if (t->type != Void){
              fprintf(listing, "Error: Invalid Parameter at line %d for %s\n", t->lineno, t->attr.name);
              Error = TRUE;
            }
          }
          else if (st_lookup_excluding_parent(t->attr.name) == NULL){
            st_insert(t->attr.name, t->lineno, sc_top()->loc++, t);
          }
          else {
            fprintf(listing, "Error: Symbol \"%s\" is redefined at line %d\n", t->attr.name, t->lineno);
            Error = TRUE;
          }
          // ParamList t = l->params;
          // if (t == NULL) l->params = (ParamList)malloc(sizeof(struct ParamListRec));
          // else {
          //   while (t->next != NULL) t = t->next;
          //   t->next = (ParamList)malloc(sizeof(struct ParamListRec));
          //   if (t->type == IdK)
          //     t->next->type = Integer;
          //   else
          //     t->next->type = Array;
          //   t->next->next = NULL;
          // }
          t->scope = sc;
          break;
        default:
          break;
      }
    default:
      break;
  }
}

static void backToParentScope(TreeNode *t)
{ if (t->nodekind == StmtK && t->kind.stmt == CompK) {
    sc_pop();
    // location--;
    // location = loc_save;
  }
  // else if (t->nodekind == DecK && t->kind.dec == FunK) {
  //   current_sc = "global";
  // }
}

static void insertBuiltInFuncNode()
{ TreeNode *func;
  TreeNode *param;
  TreeNode *comp_stmt;

  param = newDecNode(ParamK);
  param->attr.name = NULL;
  param->type = Void;

  comp_stmt = newStmtNode(CompK);
  comp_stmt->child[0] = NULL;
  comp_stmt->child[1] = NULL;

  func = newDecNode(FunK);
  func->attr.name = "input";
  func->child[0] = param;
  func->child[1] = comp_stmt;
  func->lineno = 0;
  func->type = Integer;

  st_insert("input", 0, location, func);

  param = newDecNode(ParamK);
  param->attr.name = "arg";
  param->type = Integer;
  param->lineno = 0;
  // param->child[0] = NULL;
  // param->child[1] = NULL;

  comp_stmt = newStmtNode(CompK);
  comp_stmt->child[0] = NULL;
  comp_stmt->child[1] = NULL;

  func = newDecNode(FunK);
  func->attr.name = "output";
  func->child[0] = param;
  func->child[1] = comp_stmt;
  func->lineno = 0;
  func->type = Void;

  location = 0;
  st_insert("output", 0, location, func);
  sc_push(sc_create("output"));
  st_insert("value", 0, location, param);
  sc_pop();

  // BucketList l = st_lookup("output");
  // ParamList t = l->params;
  // if (t == NULL) l->params = (ParamList)malloc(sizeof(struct ParamListRec));
  // else {
  //   while (t->next != NULL) t = t->next;
  //   t->next = (ParamList)malloc(sizeof(struct ParamListRec));
  //   t->next->type = Integer;
  //   t->next->next = NULL;
  // }
}

/* Function buildSymtab constructs the symbol 
 * table by preorder traversal of the syntax tree
 */
void buildSymtab(TreeNode * syntaxTree)
{ global_sc = sc_create("global");
  location = 0;
  sc_push(global_sc);
  insertBuiltInFuncNode();
  traverse(syntaxTree,insertNode,backToParentScope);
  sc_pop();
  if (TraceAnalyze)
  { fprintf(listing,"\nSymbol table:\n\n");
    printSymTab(listing);
  }
}

// static void typeError(TreeNode * t, char * message)
// { fprintf(listing,"Type error at line %d: %s\n",t->lineno,message);
//   Error = TRUE;
// }

/* Procedure checkNode performs
 * type checking at a single tree node
 */
static void checkNode(TreeNode * t)
{ BucketList l;
  ExpType retType;
  switch (t->nodekind)
  { case ExpK:
      switch (t->kind.exp)
      { case OpK:
          if ((t->child[0] == NULL) || (t->child[1] == NULL)) {
            fprintf(listing, "Error: Invalid operation at line %d\n", lineno);
            Error = TRUE;
          }
          else if ((t->child[0]->type == Integer) && (t->child[1]->type == Integer))
            t->type = Integer;
          else {
            fprintf(listing, "Error: Invalid operation at line %d\n", lineno);
            Error = TRUE;
          }
          break;
        case ConstK:
          t->type = Integer;
          break;
        case IdK:
        case ArrK:
          l = st_lookup(t->attr.name);
          if (l == NULL) {
            fprintf(listing, "Error: undeclared variable \"%s\" is used at line %d\n", t->attr.name, t->lineno);
            Error = TRUE;
            break;
          }

          TreeNode *tn = l->node;
          if (t->kind.exp == ArrK) {
            if (t->child[0]->type != Integer) {
              fprintf(listing, "Error: Invalid array indexing at line %d (name : \"%s\"). Indices should be integer\n", t->lineno, t->attr.name);
              Error = TRUE;
            }
            else if (t->child[0] == NULL) { 
              fprintf(listing, "Error: Invalid array indexing at line %d (name : \"%s\"). Indices should be integer\n", t->lineno, t->attr.name);
              Error = TRUE;
            }
            else
              t->type = Integer;
          }
          else
            t->type = tn->type;
          break;
        case AssignK:
          if ((t->child[0]->type != Integer) || (t->child[1]->type != Integer)) {
            fprintf(listing, "Error: Invalid assignment at line %d\n", t->lineno);
            Error = TRUE;
          }
          else
            t->type = Integer;
            // t->type = t->child[0]->type;
          break;
        case CallK:
          l = st_lookup(t->attr.name);
          TreeNode *func = l->node;
          TreeNode *arg = t->child[0];
          TreeNode *param = l->node->child[0];
          // ParamList p = l->params;
          if (l == NULL) {
            fprintf(listing, "Error: Undeclared function \"%s\" is called at line %d\n", t->attr.name, t->lineno);
            Error = TRUE;
          }
          // else if ((func->type != Integer) && (func->type != Void) && (func->type != IntArray)) {
          //   fprintf(listing, "Error: Invalid function call at line %d (name : \"%s\")\n", t->lineno, t->attr.name);
          //   Error = TRUE;
          // }
          else {
            if (arg == NULL) {
              if (param->type != Void) {
                fprintf(listing, "Error: Invalid function call at line %d (name : \"%s\")\n", t->lineno, t->attr.name);
                Error = TRUE;
                break;
              }
            }
            else {
              while (arg != NULL && param != NULL) {
                if (param == NULL) {
                  fprintf(listing, "Error: Invalid function call at line %d (name : \"%s\")\n", t->lineno, t->attr.name);
                  Error = TRUE;
                  break;
                }
                // printf("arg : %d, param : %d\n", arg->type , param->type);
                if (arg->type != param->type) {
                  fprintf(listing, "Error: Invalid function call at line %d (name : \"%s\")\n", t->lineno, t->attr.name);
                  Error = TRUE;
                  break;
                }
                // if (arg->type == Void) {
                //   printf("5\n");
                //   fprintf(listing, "Error: Invalid function call at line %d (name : \"%s\")\n", t->lineno, t->attr.name);
                //   Error = TRUE;
                //   break;
                // }
                arg = arg->sibling;
                param = param->sibling;
              }
              if (arg != NULL || param != NULL) {
                fprintf(listing, "Error: Invalid function call at line %d (name : \"%s\")\n", t->lineno, t->attr.name);
                Error = TRUE;
              }
            }
            t->type = func->type;
          }
          break;
        default:
          break;
      }
      break;
    case StmtK:
      switch (t->kind.stmt)
      { case IfK:
          if (t->child[0]->type != Integer) {
            fprintf(listing, "Error: Invalid condition at line %d\n", t->lineno);
            Error = TRUE;
          }
          break;
        case CompK:
          sc_pop();
          break;
        case WhileK:
          if (t->child[0]->type != Integer) {
            fprintf(listing, "Error: Invalid condition at line %d\n", t->lineno);
            Error = TRUE;
          }
          break;
        case RetK:
          retType = st_lookup(current_sc)->node->type;
          if (retType == Void && t->child[0] != NULL) {
            fprintf(listing, "Error: Invalid return at line %d\n", t->lineno);
            Error = TRUE;
          }
          else if (retType == Integer) {
            if ((t->child[0] == NULL) || (t->child[0]->type != Integer)) {
              fprintf(listing, "Error: Invalid return at line %d\n", t->lineno);
              Error = TRUE;
            }
          }
          else if (retType == Array) {
            if ((t->child[0] == NULL) || (t->child[0]->type != Array)) {
              fprintf(listing, "Error: Invalid return at line %d\n", t->lineno);
              Error = TRUE;
            }
          }
          break;
        default:
          break;
      }
      break;
    case DecK:
      switch (t->kind.dec)
      { case VarK:
          if (t->type == Void) {
            fprintf(listing, "Error: The void-type variable is declared at line %d (name : \"%s\")\n", t->lineno, t->attr.name);
            Error = TRUE;
          }
          break;
        case FunK:
          break;
        case ParamK:
          // if (t->type == Void) {
          //   fprintf(listing, "Error: Invalid function call at line %d (name : \"%s\")\n", t->lineno, t->attr.name);
          //   Error = TRUE;
          // }
          break;
        default:
          break;
      }
      break;
    default:
      break;

  }
}

static void prepareTypeCheck(TreeNode * t) {
  switch (t->nodekind) {
    case StmtK:
      if (t->kind.stmt == CompK) sc_push(t->scope);
      break;
    case DecK:
      if (t->kind.stmt == FunK) current_sc = t->attr.name;
      break;
    case ExpK:
    default:
      break;
  }
}

/* Procedure typeCheck performs type checking 
 * by a postorder syntax tree traversal
 */
void typeCheck(TreeNode * syntaxTree)
{ sc_push(global_sc);
  traverse(syntaxTree,prepareTypeCheck,checkNode);
  sc_pop();
}
