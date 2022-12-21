/****************************************************/
/* File: symtab.h                                   */
/* Symbol table interface for the TINY compiler     */
/* (allows only one symbol table)                   */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#ifndef _SYMTAB_H_
#define _SYMTAB_H_

#include "globals.h"

#define SIZE 211

/* Procedure st_insert inserts line numbers and
 * memory locations into the symbol table
 * loc = memory location is inserted only the
 * first time, otherwise ignored
 */
// void st_insert( char * name, int lineno, int loc );
void st_insert( char * name, int lineno, int loc , TreeNode * node);

typedef struct ParamListRec
    { ExpType type;
      struct ParamListRec * next;
    } * ParamList;

/* the list of line numbers of the source 
 * code in which a variable is referenced
 */
typedef struct LineListRec
   { int lineno;
     struct LineListRec * next;
   } * LineList;

/* The record in the bucket lists for
 * each variable, including name, 
 * assigned memory location, and
 * the list of line numbers in which
 * it appears in the source code
 */
typedef struct BucketListRec
   { char * name;
     LineList lines;
     TreeNode * node;
     int memloc ; /* memory location for variable */
     struct BucketListRec * next;
   } * BucketList;

typedef struct ScopeListRec
   { char * name;
     BucketList bucket[SIZE];
     struct ScopeListRec * parent;
     struct ScopeListRec * next;
     int loc;
   } * ScopeList;

BucketList st_lookup ( char * name );
BucketList st_lookup_excluding_parent ( char * name );
int st_addlineno (char *name, int lineno);

ScopeList sc_create(char *name);
ScopeList sc_top();
ScopeList sc_push(ScopeList scope);
int sc_pop();

/* Procedure printSymTab prints a formatted 
 * listing of the symbol table contents 
 * to the listing file
 */
void printSymTab(FILE * listing);

#endif
