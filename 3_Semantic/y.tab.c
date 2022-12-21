/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 7 "cminus.y"

#define YYPARSER /* distinguishes Yacc output from other code files */

#include "globals.h"
#include "util.h"
#include "scan.h"
#include "parse.h"

#define YYSTYPE TreeNode *
static char * savedName; /* for use in assignments */
static int savedLineNo;  /* ditto */
static TreeNode * savedTree; /* stores syntax tree for later return */

static int yylex(void);
static int yyerror(char* message);


#line 89 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NOELSE = 258,                  /* NOELSE  */
    IF = 259,                      /* IF  */
    ELSE = 260,                    /* ELSE  */
    WHILE = 261,                   /* WHILE  */
    RETURN = 262,                  /* RETURN  */
    INT = 263,                     /* INT  */
    VOID = 264,                    /* VOID  */
    ID = 265,                      /* ID  */
    NUM = 266,                     /* NUM  */
    EQ = 267,                      /* EQ  */
    NE = 268,                      /* NE  */
    LT = 269,                      /* LT  */
    LE = 270,                      /* LE  */
    GT = 271,                      /* GT  */
    GE = 272,                      /* GE  */
    PLUS = 273,                    /* PLUS  */
    MINUS = 274,                   /* MINUS  */
    TIMES = 275,                   /* TIMES  */
    OVER = 276,                    /* OVER  */
    SEMI = 277,                    /* SEMI  */
    COMMA = 278,                   /* COMMA  */
    LPAREN = 279,                  /* LPAREN  */
    RPAREN = 280,                  /* RPAREN  */
    LCURLY = 281,                  /* LCURLY  */
    RCURLY = 282,                  /* RCURLY  */
    LBRACE = 283,                  /* LBRACE  */
    RBRACE = 284,                  /* RBRACE  */
    ASSIGN = 285,                  /* ASSIGN  */
    ERROR = 286                    /* ERROR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NOELSE 258
#define IF 259
#define ELSE 260
#define WHILE 261
#define RETURN 262
#define INT 263
#define VOID 264
#define ID 265
#define NUM 266
#define EQ 267
#define NE 268
#define LT 269
#define LE 270
#define GT 271
#define GE 272
#define PLUS 273
#define MINUS 274
#define TIMES 275
#define OVER 276
#define SEMI 277
#define COMMA 278
#define LPAREN 279
#define RPAREN 280
#define LCURLY 281
#define RCURLY 282
#define LBRACE 283
#define RBRACE 284
#define ASSIGN 285
#define ERROR 286

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NOELSE = 3,                     /* NOELSE  */
  YYSYMBOL_IF = 4,                         /* IF  */
  YYSYMBOL_ELSE = 5,                       /* ELSE  */
  YYSYMBOL_WHILE = 6,                      /* WHILE  */
  YYSYMBOL_RETURN = 7,                     /* RETURN  */
  YYSYMBOL_INT = 8,                        /* INT  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_ID = 10,                        /* ID  */
  YYSYMBOL_NUM = 11,                       /* NUM  */
  YYSYMBOL_EQ = 12,                        /* EQ  */
  YYSYMBOL_NE = 13,                        /* NE  */
  YYSYMBOL_LT = 14,                        /* LT  */
  YYSYMBOL_LE = 15,                        /* LE  */
  YYSYMBOL_GT = 16,                        /* GT  */
  YYSYMBOL_GE = 17,                        /* GE  */
  YYSYMBOL_PLUS = 18,                      /* PLUS  */
  YYSYMBOL_MINUS = 19,                     /* MINUS  */
  YYSYMBOL_TIMES = 20,                     /* TIMES  */
  YYSYMBOL_OVER = 21,                      /* OVER  */
  YYSYMBOL_SEMI = 22,                      /* SEMI  */
  YYSYMBOL_COMMA = 23,                     /* COMMA  */
  YYSYMBOL_LPAREN = 24,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 25,                    /* RPAREN  */
  YYSYMBOL_LCURLY = 26,                    /* LCURLY  */
  YYSYMBOL_RCURLY = 27,                    /* RCURLY  */
  YYSYMBOL_LBRACE = 28,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 29,                    /* RBRACE  */
  YYSYMBOL_ASSIGN = 30,                    /* ASSIGN  */
  YYSYMBOL_ERROR = 31,                     /* ERROR  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_program = 33,                   /* program  */
  YYSYMBOL_dec_list = 34,                  /* dec_list  */
  YYSYMBOL_dec = 35,                       /* dec  */
  YYSYMBOL_id = 36,                        /* id  */
  YYSYMBOL_var_dec = 37,                   /* var_dec  */
  YYSYMBOL_38_1 = 38,                      /* @1  */
  YYSYMBOL_39_2 = 39,                      /* @2  */
  YYSYMBOL_type_spec = 40,                 /* type_spec  */
  YYSYMBOL_func_dec = 41,                  /* func_dec  */
  YYSYMBOL_42_3 = 42,                      /* @3  */
  YYSYMBOL_params = 43,                    /* params  */
  YYSYMBOL_param_list = 44,                /* param_list  */
  YYSYMBOL_param = 45,                     /* param  */
  YYSYMBOL_comp_stmt = 46,                 /* comp_stmt  */
  YYSYMBOL_local_dec = 47,                 /* local_dec  */
  YYSYMBOL_stmt_list = 48,                 /* stmt_list  */
  YYSYMBOL_stmt = 49,                      /* stmt  */
  YYSYMBOL_exp_stmt = 50,                  /* exp_stmt  */
  YYSYMBOL_select_stmt = 51,               /* select_stmt  */
  YYSYMBOL_iter_stmt = 52,                 /* iter_stmt  */
  YYSYMBOL_return_stmt = 53,               /* return_stmt  */
  YYSYMBOL_exp = 54,                       /* exp  */
  YYSYMBOL_var = 55,                       /* var  */
  YYSYMBOL_56_4 = 56,                      /* @4  */
  YYSYMBOL_simple_exp = 57,                /* simple_exp  */
  YYSYMBOL_relop = 58,                     /* relop  */
  YYSYMBOL_add_exp = 59,                   /* add_exp  */
  YYSYMBOL_addop = 60,                     /* addop  */
  YYSYMBOL_term = 61,                      /* term  */
  YYSYMBOL_mulop = 62,                     /* mulop  */
  YYSYMBOL_factor = 63,                    /* factor  */
  YYSYMBOL_call = 64,                      /* call  */
  YYSYMBOL_65_5 = 65,                      /* @5  */
  YYSYMBOL_args = 66,                      /* args  */
  YYSYMBOL_arg_list = 67                   /* arg_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   103

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  108

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    42,    42,    45,    54,    56,    57,    59,    61,    67,
      72,    66,    79,    83,    89,    88,    99,   100,   105,   114,
     116,   121,   129,   135,   144,   146,   155,   157,   158,   159,
     160,   161,   163,   164,   166,   171,   178,   184,   186,   191,
     196,   198,   203,   202,   212,   217,   219,   223,   227,   231,
     235,   239,   244,   249,   251,   255,   260,   265,   267,   271,
     276,   277,   278,   279,   285,   284,   293,   294,   296,   305
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NOELSE", "IF", "ELSE",
  "WHILE", "RETURN", "INT", "VOID", "ID", "NUM", "EQ", "NE", "LT", "LE",
  "GT", "GE", "PLUS", "MINUS", "TIMES", "OVER", "SEMI", "COMMA", "LPAREN",
  "RPAREN", "LCURLY", "RCURLY", "LBRACE", "RBRACE", "ASSIGN", "ERROR",
  "$accept", "program", "dec_list", "dec", "id", "var_dec", "@1", "@2",
  "type_spec", "func_dec", "@3", "params", "param_list", "param",
  "comp_stmt", "local_dec", "stmt_list", "stmt", "exp_stmt", "select_stmt",
  "iter_stmt", "return_stmt", "exp", "var", "@4", "simple_exp", "relop",
  "add_exp", "addop", "term", "mulop", "factor", "call", "@5", "args",
  "arg_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-52)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-65)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      50,   -52,   -52,     5,    50,   -52,   -52,     0,   -52,   -52,
     -52,   -52,   -20,   -52,   -12,    -1,    14,    63,   -52,     7,
       0,     9,    24,   -52,    20,     8,    25,    50,    39,    48,
     -52,   -52,   -52,   -52,   -52,    50,   -52,     0,     2,    56,
      29,    55,    28,   -52,   -52,    31,   -52,   -17,   -52,   -52,
     -52,   -52,   -52,   -52,    58,    52,   -52,    51,    53,   -52,
     -52,    31,    31,   -52,    59,    60,    61,    62,   -52,    31,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,    31,    31,
     -52,   -52,    31,    65,    66,   -52,   -52,    31,    31,   -52,
     -52,    57,    53,   -52,    11,    11,    54,   -52,    67,    64,
      79,   -52,   -52,   -52,    31,    11,   -52,   -52
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    12,    13,     0,     2,     4,     5,     0,     6,     1,
       3,     7,     9,     8,     0,     0,     0,     0,    10,    13,
       0,     0,    16,    19,     0,    20,     0,     0,     0,     0,
      24,    15,    18,    11,    21,    26,    23,     0,     0,     9,
       0,     0,     0,    63,    33,     0,    22,    41,    28,    25,
      27,    29,    30,    31,     0,    61,    40,    45,    53,    57,
      62,     0,     0,    37,     0,     0,     0,     0,    32,     0,
      50,    51,    47,    46,    48,    49,    54,    55,     0,     0,
      58,    59,     0,     0,     0,    38,    60,     0,    67,    39,
      61,    44,    52,    56,     0,     0,     0,    69,     0,    66,
      34,    36,    43,    65,     0,     0,    68,    35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -52,   -52,   -52,    84,    -6,    68,   -52,   -52,    13,   -52,
     -52,   -52,   -52,    69,    71,   -52,   -52,   -51,   -52,   -52,
     -52,   -52,   -42,   -22,   -52,   -52,   -52,    15,   -52,    16,
     -52,    12,   -52,   -52,   -52,   -52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    47,     6,    14,    24,     7,     8,
      15,    21,    22,    23,    48,    35,    38,    49,    50,    51,
      52,    53,    54,    55,    66,    56,    78,    57,    79,    58,
      82,    59,    60,    67,    98,    99
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      64,    12,    13,    65,   -14,     9,    40,   -64,    41,    42,
      11,   -42,    11,    43,    25,    40,    16,    41,    42,    83,
      84,    11,    43,    17,    44,    18,    45,    89,    30,    46,
      20,    39,   -17,    44,    26,    45,    29,    30,    11,    43,
      20,    11,    43,   100,   101,    96,    97,    27,    37,    28,
      63,    30,    45,    61,   107,    45,    90,    90,     1,     2,
      90,    33,   106,    70,    71,    72,    73,    74,    75,    76,
      77,     1,    19,    80,    81,    76,    77,    34,    13,    62,
      68,    85,    69,   102,   105,    86,    88,   104,    10,    87,
      94,    95,   103,    91,    93,    92,    32,    31,     0,     0,
       0,     0,     0,    36
};

static const yytype_int8 yycheck[] =
{
      42,     7,    22,    45,    24,     0,     4,    24,     6,     7,
      10,    28,    10,    11,    20,     4,    28,     6,     7,    61,
      62,    10,    11,    24,    22,    11,    24,    69,    26,    27,
      17,    37,    25,    22,    25,    24,    28,    26,    10,    11,
      27,    10,    11,    94,    95,    87,    88,    23,    35,    29,
      22,    26,    24,    24,   105,    24,    78,    79,     8,     9,
      82,    22,   104,    12,    13,    14,    15,    16,    17,    18,
      19,     8,     9,    20,    21,    18,    19,    29,    22,    24,
      22,    22,    30,    29,     5,    25,    24,    23,     4,    28,
      25,    25,    25,    78,    82,    79,    27,    26,    -1,    -1,
      -1,    -1,    -1,    35
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     8,     9,    33,    34,    35,    37,    40,    41,     0,
      35,    10,    36,    22,    38,    42,    28,    24,    11,     9,
      40,    43,    44,    45,    39,    36,    25,    23,    29,    28,
      26,    46,    45,    22,    29,    47,    37,    40,    48,    36,
       4,     6,     7,    11,    22,    24,    27,    36,    46,    49,
      50,    51,    52,    53,    54,    55,    57,    59,    61,    63,
      64,    24,    24,    22,    54,    54,    56,    65,    22,    30,
      12,    13,    14,    15,    16,    17,    18,    19,    58,    60,
      20,    21,    62,    54,    54,    22,    25,    28,    24,    54,
      55,    59,    61,    63,    25,    25,    54,    54,    66,    67,
      49,    49,    29,    25,    23,     5,    54,    49
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    37,    38,
      39,    37,    40,    40,    42,    41,    43,    43,    44,    44,
      45,    45,    46,    47,    47,    48,    48,    49,    49,    49,
      49,    49,    50,    50,    51,    51,    52,    53,    53,    54,
      54,    55,    56,    55,    57,    57,    58,    58,    58,    58,
      58,    58,    59,    59,    60,    60,    61,    61,    62,    62,
      63,    63,    63,    63,    65,    64,    66,    66,    67,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     3,     0,
       0,     8,     1,     1,     0,     7,     1,     1,     3,     1,
       2,     4,     4,     2,     0,     2,     0,     1,     1,     1,
       1,     1,     2,     1,     5,     7,     5,     2,     3,     3,
       1,     1,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     0,     5,     1,     0,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: dec_list  */
#line 43 "cminus.y"
                { savedTree = yyvsp[0];}
#line 1316 "y.tab.c"
    break;

  case 3: /* dec_list: dec_list dec  */
#line 46 "cminus.y"
                { YYSTYPE t = yyvsp[-1];
                  if (t != NULL)
                  { while (t->sibling != NULL)
                      t = t->sibling;
                    t->sibling = yyvsp[0];
                    yyval = yyvsp[-1]; }
                    else yyval = yyvsp[0];
                }
#line 1329 "y.tab.c"
    break;

  case 4: /* dec_list: dec  */
#line 54 "cminus.y"
                  { yyval = yyvsp[0]; }
#line 1335 "y.tab.c"
    break;

  case 5: /* dec: var_dec  */
#line 56 "cminus.y"
                      { yyval = yyvsp[0]; }
#line 1341 "y.tab.c"
    break;

  case 6: /* dec: func_dec  */
#line 57 "cminus.y"
                       { yyval = yyvsp[0]; }
#line 1347 "y.tab.c"
    break;

  case 7: /* id: ID  */
#line 59 "cminus.y"
                 { savedName = copyString(tokenString); }
#line 1353 "y.tab.c"
    break;

  case 8: /* var_dec: type_spec id SEMI  */
#line 62 "cminus.y"
                { yyval = newDecNode(VarK);
                  yyval->attr.name = savedName;
                  yyval->type = yyvsp[-2]->type;
                }
#line 1362 "y.tab.c"
    break;

  case 9: /* @1: %empty  */
#line 67 "cminus.y"
                { yyval = newDecNode(VarK);
                  yyval->attr.name = savedName;
                  yyval->type = yyvsp[-1]->type;
                }
#line 1371 "y.tab.c"
    break;

  case 10: /* @2: %empty  */
#line 72 "cminus.y"
                {
                  yyval = yyvsp[-2];
                  yyval->child[0] = newExpNode(ConstK);
                  yyval->child[0]->attr.val = atoi(tokenString);
                }
#line 1381 "y.tab.c"
    break;

  case 11: /* var_dec: type_spec id @1 LBRACE NUM @2 RBRACE SEMI  */
#line 77 "cminus.y"
                          { yyval = yyvsp[-2]; }
#line 1387 "y.tab.c"
    break;

  case 12: /* type_spec: INT  */
#line 80 "cminus.y"
                { yyval = newExpNode(IdK);
                  yyval->type = Integer;
                }
#line 1395 "y.tab.c"
    break;

  case 13: /* type_spec: VOID  */
#line 84 "cminus.y"
                { yyval = newExpNode(IdK);
                  yyval->type = Void;
                }
#line 1403 "y.tab.c"
    break;

  case 14: /* @3: %empty  */
#line 89 "cminus.y"
                { yyval = newDecNode(FunK);
                  yyval->attr.name = savedName;
                }
#line 1411 "y.tab.c"
    break;

  case 15: /* func_dec: type_spec id @3 LPAREN params RPAREN comp_stmt  */
#line 93 "cminus.y"
                { yyval = yyvsp[-4];
                  yyval->type = yyvsp[-6]->type;
                  yyval->child[0] = yyvsp[-2];
                  yyval->child[1] = yyvsp[0];
                }
#line 1421 "y.tab.c"
    break;

  case 16: /* params: param_list  */
#line 99 "cminus.y"
                         { yyval = yyvsp[0]; }
#line 1427 "y.tab.c"
    break;

  case 17: /* params: VOID  */
#line 101 "cminus.y"
                { yyval = newDecNode(ParamK);
                  yyval->type = Void;
                }
#line 1435 "y.tab.c"
    break;

  case 18: /* param_list: param_list COMMA param  */
#line 106 "cminus.y"
                { YYSTYPE t = yyvsp[-2];
                  if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = yyvsp[0];
                     yyval = yyvsp[-2]; }
                     else yyval = yyvsp[0];
                }
#line 1448 "y.tab.c"
    break;

  case 19: /* param_list: param  */
#line 114 "cminus.y"
                    { yyval = yyvsp[0]; }
#line 1454 "y.tab.c"
    break;

  case 20: /* param: type_spec id  */
#line 117 "cminus.y"
                { yyval = newDecNode(ParamK);
                  yyval->type = yyvsp[-1]->type;
                  yyval->attr.name = savedName;
                }
#line 1463 "y.tab.c"
    break;

  case 21: /* param: type_spec id LBRACE RBRACE  */
#line 122 "cminus.y"
                { yyval = newDecNode(ParamK);
                  yyval->type = yyvsp[-3]->type;
                  yyval->attr.name = savedName;
                  yyval->child[0] = newExpNode(ConstK);
                  yyval->child[0]->attr.val = '\0';
                }
#line 1474 "y.tab.c"
    break;

  case 22: /* comp_stmt: LCURLY local_dec stmt_list RCURLY  */
#line 130 "cminus.y"
                { yyval = newStmtNode(CompK);
                  yyval->child[0] = yyvsp[-2];
                  yyval->child[1] = yyvsp[-1];
                }
#line 1483 "y.tab.c"
    break;

  case 23: /* local_dec: local_dec var_dec  */
#line 136 "cminus.y"
                { YYSTYPE t = yyvsp[-1];
                  if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = yyvsp[0];
                     yyval = yyvsp[-1]; }
                     else yyval = yyvsp[0];
                }
#line 1496 "y.tab.c"
    break;

  case 24: /* local_dec: %empty  */
#line 144 "cminus.y"
              { yyval = NULL; }
#line 1502 "y.tab.c"
    break;

  case 25: /* stmt_list: stmt_list stmt  */
#line 147 "cminus.y"
                { YYSTYPE t = yyvsp[-1];
                  if (t != NULL)
                   { while (t->sibling != NULL)
                        t = t->sibling;
                     t->sibling = yyvsp[0];
                     yyval = yyvsp[-1]; }
                     else yyval = yyvsp[0];
                }
#line 1515 "y.tab.c"
    break;

  case 26: /* stmt_list: %empty  */
#line 155 "cminus.y"
              { yyval = NULL; }
#line 1521 "y.tab.c"
    break;

  case 27: /* stmt: exp_stmt  */
#line 157 "cminus.y"
                       { yyval = yyvsp[0]; }
#line 1527 "y.tab.c"
    break;

  case 28: /* stmt: comp_stmt  */
#line 158 "cminus.y"
                        { yyval = yyvsp[0]; }
#line 1533 "y.tab.c"
    break;

  case 29: /* stmt: select_stmt  */
#line 159 "cminus.y"
                          { yyval = yyvsp[0]; }
#line 1539 "y.tab.c"
    break;

  case 30: /* stmt: iter_stmt  */
#line 160 "cminus.y"
                        { yyval = yyvsp[0]; }
#line 1545 "y.tab.c"
    break;

  case 31: /* stmt: return_stmt  */
#line 161 "cminus.y"
                          { yyval = yyvsp[0]; }
#line 1551 "y.tab.c"
    break;

  case 32: /* exp_stmt: exp SEMI  */
#line 163 "cminus.y"
                       { yyval = yyvsp[-1]; }
#line 1557 "y.tab.c"
    break;

  case 33: /* exp_stmt: SEMI  */
#line 164 "cminus.y"
                   { yyval = NULL; }
#line 1563 "y.tab.c"
    break;

  case 34: /* select_stmt: IF LPAREN exp RPAREN stmt  */
#line 167 "cminus.y"
                { yyval = newStmtNode(IfK);
                  yyval->child[0] = yyvsp[-2];
                  yyval->child[1] = yyvsp[0];
                }
#line 1572 "y.tab.c"
    break;

  case 35: /* select_stmt: IF LPAREN exp RPAREN stmt ELSE stmt  */
#line 172 "cminus.y"
                { yyval = newStmtNode(IfK);
                  yyval->child[0] = yyvsp[-4];
                  yyval->child[1] = yyvsp[-2];
                  yyval->child[2] = yyvsp[0];
                }
#line 1582 "y.tab.c"
    break;

  case 36: /* iter_stmt: WHILE LPAREN exp RPAREN stmt  */
#line 179 "cminus.y"
                { yyval = newStmtNode(WhileK);
                  yyval->child[0] = yyvsp[-2];
                  yyval->child[1] = yyvsp[0];
                }
#line 1591 "y.tab.c"
    break;

  case 37: /* return_stmt: RETURN SEMI  */
#line 185 "cminus.y"
                { yyval = newStmtNode(RetK); }
#line 1597 "y.tab.c"
    break;

  case 38: /* return_stmt: RETURN exp SEMI  */
#line 187 "cminus.y"
                { yyval = newStmtNode(RetK); 
                  yyval->child[0] = yyvsp[-1];
                }
#line 1605 "y.tab.c"
    break;

  case 39: /* exp: var ASSIGN exp  */
#line 192 "cminus.y"
                { yyval = newExpNode(AssignK); 
                  yyval->child[0] = yyvsp[-2];
                  yyval->child[1] = yyvsp[0];
                }
#line 1614 "y.tab.c"
    break;

  case 40: /* exp: simple_exp  */
#line 196 "cminus.y"
                         { yyval = yyvsp[0]; }
#line 1620 "y.tab.c"
    break;

  case 41: /* var: id  */
#line 199 "cminus.y"
                { yyval = newExpNode(IdK); 
                  yyval->attr.name = savedName;
                }
#line 1628 "y.tab.c"
    break;

  case 42: /* @4: %empty  */
#line 203 "cminus.y"
                { yyval = newExpNode(ArrK);
                  yyval->attr.name = savedName; 
                  yyval->type = Array;
                }
#line 1637 "y.tab.c"
    break;

  case 43: /* var: id @4 LBRACE exp RBRACE  */
#line 208 "cminus.y"
                { yyval = yyvsp[-3];
                  yyval->child[0] = yyvsp[-1];
                }
#line 1645 "y.tab.c"
    break;

  case 44: /* simple_exp: add_exp relop add_exp  */
#line 213 "cminus.y"
                { yyval = yyvsp[-1];
                  yyval->child[0] = yyvsp[-2]; 
                  yyval->child[1] = yyvsp[0];
                }
#line 1654 "y.tab.c"
    break;

  case 45: /* simple_exp: add_exp  */
#line 217 "cminus.y"
                      { yyval = yyvsp[0]; }
#line 1660 "y.tab.c"
    break;

  case 46: /* relop: LE  */
#line 220 "cminus.y"
                { yyval = newExpNode(OpK);
                  yyval->attr.op = LE;
                }
#line 1668 "y.tab.c"
    break;

  case 47: /* relop: LT  */
#line 224 "cminus.y"
                { yyval = newExpNode(OpK);
                  yyval->attr.op = LT;
                }
#line 1676 "y.tab.c"
    break;

  case 48: /* relop: GT  */
#line 228 "cminus.y"
                { yyval = newExpNode(OpK);
                  yyval->attr.op = GT;
                }
#line 1684 "y.tab.c"
    break;

  case 49: /* relop: GE  */
#line 232 "cminus.y"
                { yyval = newExpNode(OpK);
                  yyval->attr.op = GE;
                }
#line 1692 "y.tab.c"
    break;

  case 50: /* relop: EQ  */
#line 236 "cminus.y"
                { yyval = newExpNode(OpK);
                  yyval->attr.op = EQ;
                }
#line 1700 "y.tab.c"
    break;

  case 51: /* relop: NE  */
#line 240 "cminus.y"
                { yyval = newExpNode(OpK);
                  yyval->attr.op = NE;
                }
#line 1708 "y.tab.c"
    break;

  case 52: /* add_exp: add_exp addop term  */
#line 245 "cminus.y"
                { yyval = yyvsp[-1];
                  yyval->child[0] = yyvsp[-2];
                  yyval->child[1] = yyvsp[0];
                }
#line 1717 "y.tab.c"
    break;

  case 53: /* add_exp: term  */
#line 249 "cminus.y"
                   { yyval = yyvsp[0]; }
#line 1723 "y.tab.c"
    break;

  case 54: /* addop: PLUS  */
#line 252 "cminus.y"
                { yyval = newExpNode(OpK);
                  yyval->attr.op = PLUS;
                }
#line 1731 "y.tab.c"
    break;

  case 55: /* addop: MINUS  */
#line 256 "cminus.y"
                { yyval = newExpNode(OpK);
                  yyval->attr.op = MINUS;
                }
#line 1739 "y.tab.c"
    break;

  case 56: /* term: term mulop factor  */
#line 261 "cminus.y"
                { yyval = yyvsp[-1];
                  yyval->child[0] = yyvsp[-2];
                  yyval->child[1] = yyvsp[0];
                }
#line 1748 "y.tab.c"
    break;

  case 57: /* term: factor  */
#line 265 "cminus.y"
                     { yyval = yyvsp[0]; }
#line 1754 "y.tab.c"
    break;

  case 58: /* mulop: TIMES  */
#line 268 "cminus.y"
                { yyval = newExpNode(OpK);
                  yyval->attr.op = TIMES;
                }
#line 1762 "y.tab.c"
    break;

  case 59: /* mulop: OVER  */
#line 272 "cminus.y"
                { yyval = newExpNode(OpK);
                  yyval->attr.op = OVER;
                }
#line 1770 "y.tab.c"
    break;

  case 60: /* factor: LPAREN exp RPAREN  */
#line 276 "cminus.y"
                                { yyval = yyvsp[-1]; }
#line 1776 "y.tab.c"
    break;

  case 61: /* factor: var  */
#line 277 "cminus.y"
                  { yyval = yyvsp[0]; }
#line 1782 "y.tab.c"
    break;

  case 62: /* factor: call  */
#line 278 "cminus.y"
                   { yyval = yyvsp[0];}
#line 1788 "y.tab.c"
    break;

  case 63: /* factor: NUM  */
#line 280 "cminus.y"
                { yyval = newExpNode(ConstK);
                  yyval->attr.val = atoi(tokenString);
                }
#line 1796 "y.tab.c"
    break;

  case 64: /* @5: %empty  */
#line 285 "cminus.y"
                { yyval = newExpNode(CallK);
                  yyval->attr.name = savedName;
                }
#line 1804 "y.tab.c"
    break;

  case 65: /* call: id @5 LPAREN args RPAREN  */
#line 289 "cminus.y"
                { yyval = yyvsp[-3];
                  yyval->child[0] = yyvsp[-1];
                }
#line 1812 "y.tab.c"
    break;

  case 66: /* args: arg_list  */
#line 293 "cminus.y"
                       { yyval = yyvsp[0]; }
#line 1818 "y.tab.c"
    break;

  case 67: /* args: %empty  */
#line 294 "cminus.y"
              { yyval = NULL; }
#line 1824 "y.tab.c"
    break;

  case 68: /* arg_list: arg_list COMMA exp  */
#line 297 "cminus.y"
                { YYSTYPE t = yyvsp[-2];
                  if (t != NULL)
                  { while (t->sibling != NULL)
                      t = t->sibling;
                    t->sibling = yyvsp[0];
                    yyval = yyvsp[-2]; }
                    else yyval = yyvsp[0];
                }
#line 1837 "y.tab.c"
    break;

  case 69: /* arg_list: exp  */
#line 305 "cminus.y"
                  { yyval = yyvsp[0]; }
#line 1843 "y.tab.c"
    break;


#line 1847 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 308 "cminus.y"


int yyerror(char * message)
{ fprintf(listing,"Syntax error at line %d: %s\n",lineno,message);
  fprintf(listing,"Current token: ");
  printToken(yychar,tokenString);
  Error = TRUE;
  return 0;
}

/* yylex calls getToken to make Yacc/Bison output
 * compatible with ealier versions of the TINY scanner
 */
static int yylex(void)
{ return getToken(); }

TreeNode * parse(void)
{ yyparse();
  return savedTree;
}

