/****************************************************/
/* File: symtab.c                                   */
/* Symbol table implementation for the TINY compiler*/
/* (allows only one symbol table)                   */
/* Symbol table is implemented as a chained         */
/* hash table                                       */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symtab.h"
#include "globals.h"

/* SIZE is the size of the hash table */
// #define SIZE 211

/* SHIFT is the power of two used as multiplier
   in hash function  */
#define SHIFT 4

#define MAX_SCOPE_SIZE 1024

/* the hash function */
static int hash ( char * key )
{ int temp = 0;
  int i = 0;
  while (key[i] != '\0')
  { temp = ((temp << SHIFT) + key[i]) % SIZE;
    ++i;
  }
  return temp;
}

/* the hash table */
static BucketList hashTable[SIZE];

static ScopeList scopeTable[MAX_SCOPE_SIZE];
static int idx_for_scope = 0;
static ScopeList stackTable[MAX_SCOPE_SIZE];
static int idx_for_stack = 0;

ScopeList sc_create(char *name)
{ ScopeList newScope = (ScopeList)malloc(sizeof(struct ScopeListRec));
  newScope->name = name;
  newScope->parent = sc_top();
  // newScope->stacklvl = idx_for_stack;
  scopeTable[idx_for_scope++] = newScope;
  // printf("create %s\n", name);
  return newScope;
}

ScopeList sc_top()
{ 
  if (idx_for_stack == 0) return NULL;
  // printf("top idx : %d\n", idx_for_stack - 1);
  return stackTable[idx_for_stack - 1]; 
}

ScopeList sc_push(ScopeList scope)
{ stackTable[idx_for_stack++] = scope;
  // printf("scpush : %d\n", idx_for_stack);
  return sc_top();
}

int sc_pop()
{ return --idx_for_stack;
}

/* Procedure st_insert inserts line numbers and
 * memory locations into the symbol table
 * loc = memory location is inserted only the
 * first time, otherwise ignored
 */
void st_insert(char *name, int lineno, int loc, TreeNode * node)
{ int h = hash(name);
  ScopeList sc = sc_top();
  BucketList l =  sc->bucket[h];
  while ((l != NULL) && (strcmp(name,l->name) != 0))
    l = l->next;
  if (l == NULL) /* variable not yet in table */
  { l = (BucketList) malloc(sizeof(struct BucketListRec));
    l->name = name;
    l->lines = (LineList) malloc(sizeof(struct LineListRec));
    l->lines->lineno = lineno;
    l->node = node;
    l->memloc = loc;
    l->lines->next = NULL;
    l->next = sc->bucket[h];
    sc->bucket[h] = l; }
  else /* found in table, so just add line number */
  { 
  }
} /* st_insert */

/* Function st_lookup returns the memory 
 * location of a variable or -1 if not found
 */
BucketList st_lookup (char *name)
{ int h = hash(name);
  ScopeList sc = sc_top();

  while (sc != NULL) {
    BucketList l = sc->bucket[h];
    while ((l != NULL) && (strcmp(name,l->name) != 0))
      l = l->next;
    if (l != NULL) return l;
    else sc = sc->parent;
  }

  return NULL;
}

BucketList st_lookup_excluding_parent (char *name)
{ int h = hash(name);
  ScopeList sc = sc_top();
  if (sc != NULL) {
    BucketList l = sc->bucket[h];
    while ((l != NULL) && (strcmp(name,l->name) != 0))
      l = l->next;
    if (l == NULL) return NULL;
    else return l; 
  }
  return NULL;
}

int st_addlineno (char *name, int lineno)
{ BucketList l = st_lookup(name);
  LineList t = l->lines;
  while (t->next != NULL) t = t->next;
  t->next = (LineList) malloc(sizeof(struct LineListRec));
  t->next->lineno = lineno;
  t->next->next = NULL;
  
  return lineno;
}

/* Procedure printSymTab prints a formatted 
 * listing of the symbol table contents 
 * to the listing file
 */
void printSymTab(FILE * listing)
{ int i, j;
  fprintf(listing,"   Variable         Kind          Type          Name     Location  Line Numbers\n");
  fprintf(listing,"-------------  -------------  -------------  ----------  --------  ------------\n");
  // for (i=0;i<idx_for_scope;++i)
  // { ScopeList sc = scopeTable[i];
  //   BucketList *ht = sc->hashTable;
  // } 
  j = 0;
  ScopeList sc = scopeTable[j];
  while(sc != NULL){
    for (i=0;i<SIZE;++i)
    { 
      if (sc->bucket[i] != NULL)
      { BucketList l = sc->bucket[i];
        while (l != NULL)
        { LineList t = l->lines;
          fprintf(listing,"%-13s  ",l->name);
          fprintf(listing,"%-13s  ",(l->node->kind.dec==FunK?"Function":"Variable"));
          fprintf(listing,"%-13s  ",(l->node->type==Array)?"int[]":(l->node->type==Integer?"int":"void"));
          fprintf(listing,"%-10s  ",sc->name);
          fprintf(listing,"%-8d  ",l->memloc);
          while (t != NULL)
          { fprintf(listing,"%-3d ",t->lineno);
            t = t->next;
          }
          fprintf(listing,"\n");
          l = l->next;
        }
      }
    }
    sc = scopeTable[++j];
  }
} /* printSymTab */