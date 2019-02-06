/* A Bison parser, made by GNU Bison 3.2.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.2.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 28 "src/parser/ds_parser.ypp" /* yacc.c:338  */

	#include "daScript/misc/platform.h"
	#include "daScript/simulate/debug_info.h"
	#include "daScript/ast/compilation_errors.h"

	#ifdef _MSC_VER
	#pragma warning(disable:4262)
	#pragma warning(disable:4127)
	#pragma warning(disable:4702)
	#endif
    
    using namespace das;
    
    void yyerror (const string & error, das::CompilationError cerr = das::CompilationError::syntax_error);
    void yyerror (const string & error, const das::LineInfo & at, das::CompilationError cerr = das::CompilationError::unspecified);
    int yylex();
    void yybegin(const char * str);

#line 88 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:338  */
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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ds_parser.hpp".  */
#ifndef YY_YY_USERS_BORISBATKIN_WORK_YZG_GENERATED_DS_PARSER_HPP_INCLUDED
# define YY_YY_USERS_BORISBATKIN_WORK_YZG_GENERATED_DS_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/parser/ds_parser.ypp" /* yacc.c:353  */

	#include "daScript/misc/platform.h"
	#include "daScript/ast/ast.h"
    
    namespace das { extern ProgramPtr g_Program; }
    using namespace das;
    
    struct VariableDeclaration {
        VariableDeclaration ( const LineInfo & a, vector<string> * n, TypeDecl * t, Expression * i )
            : at(a), pNameList(n), pTypeDecl(t), pInit(i) {}
        ~VariableDeclaration () { delete pNameList; delete pTypeDecl; delete pInit; }
        LineInfo        at;
        vector<string>  *pNameList;
        TypeDecl        *pTypeDecl;
        Expression      *pInit;
        bool            move_to_init = false;
    };
    
    ExprLooksLikeCall * parseFunctionArguments ( ExprLooksLikeCall * pCall, Expression * arguments );
    vector<ExpressionPtr> sequenceToList ( Expression * arguments );
    void deleteVariableDeclarationList ( vector<VariableDeclaration *> * list );
    
    LineInfo tokAt ( const struct YYLTYPE & li );
    
    Annotation * findAnnotation ( const string & name, const LineInfo & at );

#line 148 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:353  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LEXER_ERROR = 258,
    _STRUCT = 259,
    _LET = 260,
    _DEF = 261,
    _WHILE = 262,
    _IF = 263,
    _ELSE = 264,
    _FOR = 265,
    _CATCH = 266,
    _TRUE = 267,
    _FALSE = 268,
    _SIZEOF = 269,
    _NEWT = 270,
    _TYPE = 271,
    _IN = 272,
    _ELIF = 273,
    _ARRAY = 274,
    _RETURN = 275,
    _NULL = 276,
    _BREAK = 277,
    _TRY = 278,
    _OPTIONS = 279,
    _TABLE = 280,
    _EXPECT = 281,
    _CONST = 282,
    _REQUIRE = 283,
    _OPERATOR = 284,
    _ENUM = 285,
    _FINALLY = 286,
    _DELETE = 287,
    _TBOOL = 288,
    _TVOID = 289,
    _TSTRING = 290,
    _TAUTO = 291,
    _TINT = 292,
    _TINT2 = 293,
    _TINT3 = 294,
    _TINT4 = 295,
    _TUINT = 296,
    _TUINT2 = 297,
    _TUINT3 = 298,
    _TUINT4 = 299,
    _TFLOAT = 300,
    _TFLOAT2 = 301,
    _TFLOAT3 = 302,
    _TFLOAT4 = 303,
    _TRANGE = 304,
    _TURANGE = 305,
    _TBLOCK = 306,
    _TINT64 = 307,
    _TUINT64 = 308,
    _TYPENAME = 309,
    _TDOUBLE = 310,
    ADDEQU = 311,
    SUBEQU = 312,
    DIVEQU = 313,
    MULEQU = 314,
    MODEQU = 315,
    ANDEQU = 316,
    OREQU = 317,
    XOREQU = 318,
    ADDADD = 319,
    SUBSUB = 320,
    LEEQU = 321,
    GREQU = 322,
    EQUEQU = 323,
    NOTEQU = 324,
    RARROW = 325,
    LARROW = 326,
    QQ = 327,
    QDOT = 328,
    LPIPE = 329,
    LBPIPE = 330,
    RPIPE = 331,
    INTEGER = 332,
    LONG_INTEGER = 333,
    UNSIGNED_INTEGER = 334,
    UNSIGNED_LONG_INTEGER = 335,
    FLOAT = 336,
    DOUBLE = 337,
    NAME = 338,
    BEGIN_STRING = 339,
    STRING_CHARACTER = 340,
    END_STRING = 341,
    BEGIN_STRING_EXPR = 342,
    END_STRING_EXPR = 343,
    UNARY_MINUS = 344,
    UNARY_PLUS = 345,
    PRE_INC = 346,
    PRE_DEC = 347,
    POST_INC = 348,
    POST_DEC = 349,
    COLCOL = 350
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 51 "src/parser/ds_parser.ypp" /* yacc.c:353  */

    char                            ch;
    bool                            b;
    int32_t                         i;
    uint32_t                        ui;
    int64_t                         i64;
    uint64_t                        ui64;
    double                          d;
	double                          fd;
    string *                        s;
    vector<string> *                pNameList;
    VariableDeclaration *           pVarDecl;
    vector<VariableDeclaration*> *  pVarDeclList;
    TypeDecl *                      pTypeDecl;
    Expression *                    pExpression;
    Type                            type;
    AnnotationArgument *            aa;
    AnnotationArgumentList *        aaList;
    AnnotationDeclaration *         fa;
    AnnotationList *                faList;
    MakeStruct *                    pMakeStruct;
    Enumeration *                   pEnum;

#line 280 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:353  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_USERS_BORISBATKIN_WORK_YZG_GENERATED_DS_PARSER_HPP_INCLUDED  */



#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2207

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  121
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  253
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  437

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   350

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   106,     2,     2,   120,   102,    95,     2,
     114,   115,   100,    99,    89,    98,   111,   101,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    92,   119,
      96,    90,    97,    91,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   112,     2,   113,    94,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   117,    93,   118,   105,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,   103,   104,   107,   108,   109,   110,
     116
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   205,   205,   207,   208,   209,   210,   211,   212,   213,
     217,   218,   222,   226,   229,   235,   243,   259,   280,   284,
     285,   289,   301,   305,   306,   310,   313,   319,   320,   321,
     328,   335,   347,   357,   358,   359,   360,   361,   365,   370,
     378,   385,   397,   401,   408,   409,   413,   414,   415,   419,
     423,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     462,   531,   534,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   557,   558,   564,   570,   584,   585,
     591,   595,   601,   609,   613,   616,   619,   627,   633,   659,
     686,   689,   695,   698,   704,   707,   713,   718,   769,   770,
     771,   772,   773,   774,   778,   779,   780,   781,   782,   783,
     784,   785,   786,   787,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   802,   803,   804,   805,   806,
     807,   808,   809,   810,   811,   812,   813,   814,   815,   816,
     817,   818,   819,   820,   821,   822,   823,   824,   825,   829,
     833,   836,   839,   840,   841,   844,   845,   846,   847,   848,
     858,   868,   902,   903,   907,   908,   912,   913,   917,   918,
     922,   926,   929,   933,   938,   946,   949,   953,   957,   962,
     970,   993,   996,  1004,  1015,  1028,  1071,  1077,  1085,  1086,
    1087,  1088,  1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,
    1097,  1098,  1099,  1100,  1101,  1102,  1103,  1107,  1117,  1121,
    1130,  1131,  1132,  1133,  1137,  1142,  1147,  1152,  1157,  1161,
    1166,  1172,  1176,  1181,  1204,  1205,  1209,  1216,  1225,  1230,
    1237,  1245,  1250,  1257
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LEXER_ERROR", "_STRUCT", "_LET", "_DEF",
  "_WHILE", "_IF", "_ELSE", "_FOR", "_CATCH", "_TRUE", "_FALSE", "_SIZEOF",
  "_NEWT", "_TYPE", "_IN", "_ELIF", "_ARRAY", "_RETURN", "_NULL", "_BREAK",
  "_TRY", "_OPTIONS", "_TABLE", "_EXPECT", "_CONST", "_REQUIRE",
  "_OPERATOR", "_ENUM", "_FINALLY", "_DELETE", "_TBOOL", "_TVOID",
  "_TSTRING", "_TAUTO", "_TINT", "_TINT2", "_TINT3", "_TINT4", "_TUINT",
  "_TUINT2", "_TUINT3", "_TUINT4", "_TFLOAT", "_TFLOAT2", "_TFLOAT3",
  "_TFLOAT4", "_TRANGE", "_TURANGE", "_TBLOCK", "_TINT64", "_TUINT64",
  "_TYPENAME", "_TDOUBLE", "ADDEQU", "SUBEQU", "DIVEQU", "MULEQU",
  "MODEQU", "ANDEQU", "OREQU", "XOREQU", "ADDADD", "SUBSUB", "LEEQU",
  "GREQU", "EQUEQU", "NOTEQU", "RARROW", "LARROW", "QQ", "QDOT", "LPIPE",
  "LBPIPE", "RPIPE", "INTEGER", "LONG_INTEGER", "UNSIGNED_INTEGER",
  "UNSIGNED_LONG_INTEGER", "FLOAT", "DOUBLE", "NAME", "BEGIN_STRING",
  "STRING_CHARACTER", "END_STRING", "BEGIN_STRING_EXPR", "END_STRING_EXPR",
  "','", "'='", "'?'", "':'", "'|'", "'^'", "'&'", "'<'", "'>'", "'-'",
  "'+'", "'*'", "'/'", "'%'", "UNARY_MINUS", "UNARY_PLUS", "'~'", "'!'",
  "PRE_INC", "PRE_DEC", "POST_INC", "POST_DEC", "'.'", "'['", "']'", "'('",
  "')'", "COLCOL", "'{'", "'}'", "';'", "'$'", "$accept", "program",
  "character_sequence", "string_constant", "string_builder_body",
  "string_builder", "options_declaration", "require_declaration",
  "require_list", "require_module", "expect_declaration", "expect_list",
  "expect_error", "expression_else", "expression_if_then_else",
  "expression_for_loop", "expression_while_loop", "annotation_argument",
  "annotation_argument_list", "annotation_declaration", "annotation_list",
  "optional_annotation_list", "optional_function_argument_list",
  "optional_function_type", "function_name", "function_declaration",
  "expression_block", "expression_any", "expressions", "expr_pipe",
  "name_in_namespace", "expression_delete", "expr_new", "expression_break",
  "expression_return", "expression_try_catch", "expression_let",
  "expr_sizeof", "expr_typename", "expr_list", "expr_block",
  "expr_numeric_const", "expr_assign", "expr",
  "struct_variable_declaration_list", "variable_declaration_list",
  "function_argument_list", "copy_or_move", "variable_declaration",
  "let_variable_declaration", "global_let", "enum_list",
  "enum_declaration", "structure_declaration", "variable_name_list",
  "basic_type_declaration", "structure_type_declaration",
  "auto_type_declaration", "type_declaration", "make_decl",
  "make_struct_fields", "make_struct_dim", "make_struct_decl", "make_dim",
  "make_dim_decl", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,    44,
      61,    63,    58,   124,    94,    38,    60,    62,    45,    43,
      42,    47,    37,   344,   345,   126,    33,   346,   347,   348,
     349,    46,    91,    93,    40,    41,   350,   123,   125,    59,
      36
};
# endif

#define YYPACT_NINF -250

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-250)))

#define YYTABLE_NINF -125

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -250,     9,  -250,   -87,   -49,    20,    -1,    26,    21,  -250,
    -250,  -250,   101,  -250,  -250,  -250,  -250,  -250,    30,  -250,
      52,    88,   103,  -250,  -250,   106,  -250,   100,   108,   138,
    -250,   -70,   115,   147,    16,   -42,   105,   -49,   159,    20,
      -1,  -250,   151,  -250,    21,  -250,   -49,   121,  1709,   212,
     215,  -250,   131,  -250,  -250,   137,   143,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,   -41,  -250,  -250,
       1,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
     -67,   165,  -250,  -250,   183,  -250,  1259,  1171,   119,   -73,
    -250,  -250,     5,  -250,   -93,  -250,  1259,   150,  -250,   174,
     175,  -250,  -250,  -250,   161,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,   177,
    -250,  -250,  -250,  -250,  -250,  -250,   152,  -250,  -250,   163,
      21,  -250,   164,  1171,  1171,  -250,  -250,  -250,  -250,  -250,
    -250,    77,  -250,  1171,  1171,  1171,  1171,   167,  1171,  -250,
     173,  -250,  -250,  -250,    10,  -250,  -250,  -250,  -250,  -250,
     213,  1385,   184,  -250,  -250,  -250,  -250,  -250,   210,  -250,
    -250,  -250,   206,   232,  -250,  1259,  1259,   216,    19,  -250,
    -250,  -250,   -22,   224,  1171,   731,  -250,   819,   463,   463,
     153,   463,   463,   463,   463,  1259,  1545,   347,   131,  -250,
     907,     2,  1171,  1171,  1171,  1171,  1171,  1171,  1171,  1171,
    -250,  -250,  1171,  1171,  1171,  1171,  -250,  1171,  1171,   217,
    1171,  1171,  1171,  1171,  1171,  1171,  1171,  1171,  1171,  1171,
    1171,  1171,  1171,  1171,   219,  1171,   995,   186,  -250,   125,
     157,   192,   165,   185,  -250,  -250,   197,  1873,  1259,  1597,
    1259,  1649,  -250,  1171,   227,   555,  -250,  -250,    18,  1171,
    1171,   206,  1083,  -250,   150,  1171,   299,  -250,  -250,  -250,
    -250,  -250,  -250,   214,   220,   221,  -250,  -250,   -72,  1442,
     165,  -250,    25,  1873,  -250,  1873,  1873,  1873,  1873,  1873,
    1873,  1873,  1873,  2095,  2095,  2080,  2080,  1873,   463,  -250,
     -62,   -62,  1873,  1775,  1971,  2020,  2037,  2095,  2095,   384,
     384,   252,   252,   252,  -250,  1725,  -250,    42,  -250,  -250,
    1259,  -250,   234,  -250,  -250,   -12,  -250,     0,  -250,  1824,
     135,   643,    15,  1873,   245,   -95,    62,   206,  -250,   203,
    1491,  1491,   -11,  1171,  1873,   325,  1873,   226,  -250,  -250,
    -250,  -250,   150,  1171,  -250,  1171,  -250,  -250,   223,  -250,
    -250,  -250,  -250,  1171,   262,   236,   264,   237,  1171,   -90,
    -250,  1259,  1171,  -250,    14,  1171,  1873,   150,  -250,  -250,
    1873,  1922,  -250,  1873,   261,  -250,   266,   245,  -250,  1873,
     150,   206,   107,  -250,  1257,   150,  1171,  -250,   110,  -250,
     467,  1171,  -250,  -250,  -250,  1171,  -250,  -250,  1491,  -250,
    -250,  1873,  -250,  1321,    14,  -250,  -250
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    44,     1,     0,     0,     0,     0,     0,     0,     9,
       8,     7,     0,     6,     5,     4,     3,   182,     0,    38,
      17,    25,    22,    23,    21,    18,    19,     0,    98,     0,
      42,     0,    40,     0,     0,     0,     0,     0,     0,     0,
       0,   201,     0,   100,     0,    45,     0,     0,     0,     0,
       0,    51,    46,   206,   200,     0,   190,    36,    37,    34,
      35,    10,    33,    39,    26,    24,    20,     0,    99,    43,
       0,   182,    54,    55,    57,    56,    58,    59,    60,    61,
      78,    79,    71,    72,    69,    70,    74,    75,    73,    67,
      68,    63,    62,    64,    65,    66,    53,    52,    76,    77,
       0,    49,   183,   189,     0,   188,     0,     0,     0,     0,
     204,    41,     0,    47,     0,   186,     0,     0,   207,     0,
       0,   208,   224,   209,   228,   210,   212,   213,   214,   215,
     217,   218,   219,   220,   221,   222,   223,   225,   226,   241,
     211,   216,   227,   230,   232,   231,   191,   139,   140,     0,
       0,   134,     0,     0,     0,   118,   120,   119,   121,   122,
     123,   135,    13,     0,     0,     0,     0,     0,     0,    94,
      44,   137,   116,   194,     0,   177,   175,   176,   178,   136,
       0,   193,     0,   138,   244,   245,    11,    12,     0,   202,
     205,    48,     0,    50,    80,     0,     0,     0,    46,   234,
     238,   236,     0,     0,     0,     0,   102,     0,   160,   161,
      10,   144,   143,   142,   141,     0,     0,     0,    46,   181,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     162,   163,     0,     0,     0,     0,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,     0,
       0,     0,    49,     0,   235,   237,     0,   192,     0,     0,
       0,     0,    16,     0,    14,     0,   164,    96,     0,     0,
       0,     0,   104,   103,     0,     0,    81,    83,    92,    89,
      88,    95,    84,     0,     0,     0,    93,    87,     0,   124,
      49,   168,     0,   114,    97,   129,   130,   132,   131,   133,
     126,   127,   128,   155,   156,   153,   154,   145,   173,   167,
     179,   180,   125,     0,   158,   159,   157,   151,   152,   147,
     146,   148,   149,   150,   166,     0,   170,     0,   203,   239,
       0,   229,     0,   242,   233,     0,   110,     0,   112,     0,
     135,     0,     0,   251,   248,     0,     0,     0,   109,     0,
       0,     0,     0,     0,   105,     0,   101,     0,    86,    90,
      91,    85,     0,     0,   169,     0,   165,   171,     0,   243,
     111,   113,    15,     0,     0,     0,     0,     0,     0,     0,
     184,     0,     0,    32,    27,     0,   106,     0,    94,   117,
     115,   174,   240,   246,     0,   250,     0,   249,   253,   252,
       0,     0,     0,   199,   124,     0,     0,    30,     0,   107,
       0,     0,   108,   185,   195,     0,   198,    28,     0,    31,
      82,   247,   197,   124,    27,   196,    29
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -250,  -250,   148,  -250,  -250,  -250,  -250,  -250,  -250,   326,
    -250,  -250,   332,   -69,  -250,  -250,  -250,   335,   327,   330,
    -250,   205,  -178,  -249,  -250,  -250,  -107,  -250,   -21,  -106,
      -8,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -244,
     155,  -250,  -210,   -79,   307,  -250,  -250,  -144,   -96,  -250,
    -250,  -250,  -250,  -250,  -142,   -85,  -250,  -250,    13,  -250,
      12,  -250,  -250,  -250,  -250
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   108,    62,   210,   171,     9,    10,    25,    26,
      11,    22,    23,   417,   288,   289,   290,    19,    20,    30,
      31,    12,   101,   117,    52,    13,   172,   291,   217,   292,
     174,   293,   175,   294,   295,   296,   297,   176,   177,   302,
     178,   179,   180,   303,    35,   389,   114,   107,    55,   358,
      14,    67,    15,    16,    56,   182,   144,   145,   146,   183,
     354,   355,   184,   356,   185
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      32,   173,   204,   221,   115,   264,   395,   298,   236,     2,
     194,   239,   337,   342,     3,   199,    53,   188,   385,    44,
     262,   143,   191,   415,   386,   410,   192,   199,   181,   411,
      17,   143,   416,     4,    18,     5,    32,     6,   119,     7,
     300,    53,   109,    45,   120,    48,   189,   371,   113,   254,
     255,   372,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   265,   208,   209,    54,   110,   104,   200,
      49,    50,    24,   201,   211,   212,   213,   214,    53,   216,
      37,   200,   266,   219,   202,   201,   258,    21,   142,    51,
     203,    53,    28,   380,    28,    33,   202,    34,   142,    27,
     143,   143,   203,   143,   373,   381,   111,    57,    58,   169,
      36,     8,   170,   190,   220,   267,   269,   215,   271,   193,
     143,   373,   357,   100,   199,    29,   359,    29,   299,   362,
     374,    37,   206,   305,   306,   307,   308,   309,   310,   311,
     312,   418,   199,   313,   314,   315,   316,   377,   317,   318,
     -98,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   387,   335,   365,   103,   199,
      38,   388,    59,   143,   199,   143,    60,   142,   142,    61,
     142,   -98,    39,    42,   349,    40,   353,   105,   200,   373,
     360,   361,   201,   364,   186,   187,   366,   142,   259,   260,
     298,   263,   199,   202,   103,   392,   200,    41,   -98,   203,
     201,    43,   339,   103,    42,   383,   424,   169,   275,    46,
      47,   202,   104,   105,    68,   106,    64,   203,    71,   272,
     273,    98,   105,   200,    99,   100,   340,   201,   200,   -98,
     199,    42,   201,   393,   394,   143,   102,   116,   202,   199,
     142,   390,   142,   202,   203,   399,   118,   169,   425,   203,
     195,   196,   214,   198,   103,   197,   200,   205,   207,   215,
     201,   345,   343,   347,   396,     8,   413,   257,   221,    53,
     419,   202,   104,   105,   400,   391,   401,   203,   256,   261,
     319,   266,   334,   422,   403,   338,   143,   341,   427,   409,
     344,   429,   186,   414,   200,   423,   230,   231,   201,   432,
     402,   434,   236,   200,   238,   239,   240,   201,   241,   202,
     367,   379,   142,   368,   384,   203,   397,   428,   202,   369,
     370,   299,   431,   398,   203,   404,   433,   406,   277,   405,
     408,   421,   278,   378,   279,   280,   383,   281,   274,   147,
     148,   149,   150,   254,   255,   436,    66,   282,   151,   283,
     284,    65,    63,    70,    69,   218,   304,   420,   112,   285,
     121,   122,   123,   142,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   407,   140,
     141,   152,     0,     0,   412,     0,     0,     0,     0,     0,
       0,   153,   154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   155,   156,   157,   158,   159,   160,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   163,   164,     0,   230,   231,
       0,     0,   165,   166,   236,     0,   238,   239,   240,   167,
     241,   168,     0,    29,   169,   286,   287,   170,   277,     0,
       0,     0,   278,     0,   279,   280,     0,   281,     0,   147,
     148,   149,   150,     0,   251,   252,   253,   282,   151,   283,
     284,     0,     0,     0,     0,   254,   255,     0,     0,   285,
     121,   122,   123,     0,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,     0,   140,
     141,   152,     0,     0,     0,     0,     0,   230,   231,     0,
       0,   153,   154,   236,     0,     0,   239,   240,     0,   241,
       0,     0,     0,     0,   155,   156,   157,   158,   159,   160,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   163,   164,   147,   148,   149,
     150,     0,   165,   166,   254,   255,   151,     0,     0,   167,
       0,   168,   199,    29,   169,   430,   287,   170,   121,   122,
     123,     0,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,     0,   140,   141,   152,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   155,   156,   157,   158,   159,   160,   350,   162,
       0,     0,     0,     0,     0,     0,   200,     0,     0,     0,
     201,     0,     0,   163,   164,   147,   148,   149,   150,     0,
     165,   351,     0,     0,   151,     0,     0,   352,     0,   168,
     264,    29,   169,     0,     0,   170,   121,   122,   123,     0,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,     0,   140,   141,   152,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   153,   154,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     155,   156,   157,   158,   159,   160,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,     0,
       0,   163,   164,   147,   148,   149,   150,   268,   165,   166,
       0,     0,   151,     0,     0,   167,     0,   168,     0,    29,
     169,     0,     0,   170,   121,   122,   123,     0,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,     0,   140,   141,   152,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   153,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,   158,   159,   160,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
     164,   147,   148,   149,   150,   270,   165,   166,     0,     0,
     151,     0,     0,   167,     0,   168,     0,    29,   169,     0,
       0,   170,   121,   122,   123,     0,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
       0,   140,   141,   152,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   153,   154,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   155,   156,   157,   158,
     159,   160,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   163,   164,   147,
     148,   149,   150,     0,   165,   166,     0,     0,   151,     0,
       0,   167,     0,   168,     0,    29,   169,     0,     0,   170,
     121,   122,   123,     0,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,     0,   140,
     141,   152,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,   154,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   155,   156,   157,   158,   159,   160,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   163,   164,   147,   148,   149,
     150,     0,   165,   166,     0,     0,   151,     0,     0,   167,
       0,   168,   301,    29,   169,     0,     0,   170,   121,   122,
     123,     0,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,     0,   140,   141,   152,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   153,
     154,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   155,   156,   157,   158,   159,   160,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   164,   147,   148,   149,   150,     0,
     165,   166,     0,     0,   151,     0,     0,   167,     0,   168,
     336,    29,   169,     0,     0,   170,   121,   122,   123,     0,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,     0,   140,   141,   152,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   153,   154,     0,
       0,     0,     0,     0,   363,     0,     0,     0,     0,     0,
     155,   156,   157,   158,   159,   160,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   163,   164,   147,   148,   149,   150,     0,   165,   166,
       0,     0,   151,     0,     0,   167,     0,   168,     0,    29,
     169,     0,     0,   170,   121,   122,   123,     0,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,     0,   140,   141,   152,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   153,   154,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   155,   156,
     157,   158,   159,   160,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   163,
     164,     0,     0,     0,     0,     0,   165,   166,   119,     0,
       0,     0,     0,   167,   120,   168,     0,    29,   169,     0,
       0,   170,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,   242,   243,     0,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
       0,     0,     0,     0,     0,     0,     0,     0,   254,   255,
       0,     0,     0,     0,     0,    29,   426,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,   243,     0,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,     0,     0,     0,     0,     0,     0,
       0,     0,   254,   255,     0,     0,     0,     0,     0,     0,
     435,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
    -124,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   242,   243,     0,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,     0,     0,
       0,     0,     0,     0,     0,     0,   254,   255,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,   241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   242,   243,     0,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,     0,     0,     0,     0,     0,
       0,     0,     0,   254,   255,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   243,     0,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,     0,     0,     0,     0,     0,     0,
       0,     0,   254,   255,     0,     0,     0,     0,   169,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
       0,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   243,     0,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,     0,     0,
       0,     0,     0,     0,     0,     0,   254,   255,     0,     0,
     276,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   243,     0,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
       0,     0,     0,     0,     0,     0,     0,     0,   254,   255,
       0,     0,   346,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     243,     0,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,     0,     0,     0,     0,     0,     0,     0,     0,
     254,   255,     0,     0,   348,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
       0,   241,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,     0,     0,    96,    97,   243,     0,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,     0,     0,
       0,     0,     0,     0,     0,     0,   254,   255,   376,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
       0,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   243,   375,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,     0,     0,
       0,     0,     0,     0,     0,     0,   254,   255,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   382,     0,     0,   243,     0,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,     0,     0,     0,
       0,     0,     0,     0,     0,   254,   255,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   243,     0,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,     0,     0,     0,     0,
       0,     0,     0,     0,   254,   255,   230,   231,   232,   233,
     234,   235,   236,     0,   238,   239,   240,     0,   241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   243,     0,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,     0,     0,     0,     0,     0,
       0,     0,     0,   254,   255,   230,   231,   232,   233,   234,
     235,   236,     0,   238,   239,   240,     0,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   245,   246,   247,   248,   249,
     250,   251,   252,   253,     0,     0,     0,     0,     0,     0,
       0,     0,   254,   255,   230,   231,   232,   233,   234,   235,
     236,     0,   238,   239,   240,     0,   241,     0,     0,     0,
       0,   230,   231,   232,   233,   234,   235,   236,     0,   238,
     239,   240,     0,   241,     0,   246,   247,   248,   249,   250,
     251,   252,   253,     0,     0,     0,     0,     0,     0,     0,
       0,   254,   255,   247,   248,   249,   250,   251,   252,   253,
       0,     0,     0,     0,   230,   231,   232,   233,   254,   255,
     236,     0,   238,   239,   240,     0,   241,     0,     0,   230,
     231,     0,     0,     0,     0,   236,     0,   238,   239,   240,
       0,   241,     0,     0,     0,     0,   247,   248,   249,   250,
     251,   252,   253,     0,     0,     0,     0,     0,     0,     0,
       0,   254,   255,   249,   250,   251,   252,   253,     0,     0,
       0,     0,     0,     0,     0,     0,   254,   255
};

static const yytype_int16 yycheck[] =
{
       8,   107,   146,    75,   100,    27,    17,   217,    70,     0,
     117,    73,   256,   262,     5,    27,    83,    90,   113,    89,
     198,   106,   115,     9,   119,   115,   119,    27,   107,   119,
     117,   116,    18,    24,    83,    26,    44,    28,    19,    30,
     218,    83,    83,   113,    25,    29,   119,   119,   115,   111,
     112,   300,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    95,   153,   154,   118,   118,    89,    91,
      64,    65,    83,    95,   163,   164,   165,   166,    83,   168,
      89,    91,    77,    83,   106,    95,   192,    77,   106,    83,
     112,    83,    83,   115,    83,     4,   106,     6,   116,    83,
     195,   196,   112,   198,    89,   115,   115,    12,    13,   117,
      90,   112,   120,   118,   114,   204,   205,   112,   207,   116,
     215,    89,   114,   114,    27,   116,   278,   116,   217,   281,
     115,    89,   150,   222,   223,   224,   225,   226,   227,   228,
     229,   395,    27,   232,   233,   234,   235,   115,   237,   238,
      83,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   113,   255,   284,    71,    27,
      92,   119,    77,   268,    27,   270,    81,   195,   196,    84,
     198,   114,    89,   116,   273,    89,   275,    90,    91,    89,
     279,   280,    95,   282,    85,    86,   285,   215,   195,   196,
     420,   198,    27,   106,    71,   359,    91,   117,    83,   112,
      95,    83,    97,    71,   116,    90,   119,   117,   215,   114,
      83,   106,    89,    90,    83,    92,    77,   112,   117,    86,
      87,    29,    90,    91,    29,   114,    89,    95,    91,   114,
      27,   116,    95,   360,   361,   340,   119,    92,   106,    27,
     268,   357,   270,   106,   112,   372,    83,   117,   412,   112,
      96,    96,   351,    96,    71,   114,    91,   114,   114,   112,
      95,   268,    97,   270,   363,   112,   392,    77,    75,    83,
     397,   106,    89,    90,   373,    92,   375,   112,   114,    83,
      83,    77,    83,   410,   383,   119,   391,   115,   415,   388,
     113,   418,    85,   392,    91,   411,    64,    65,    95,   425,
      97,   428,    70,    91,    72,    73,    74,    95,    76,   106,
      31,    97,   340,   119,    89,   112,    11,   416,   106,   119,
     119,   420,   421,   117,   112,    83,   425,    83,     1,   113,
     113,    90,     5,   340,     7,     8,    90,    10,   210,    12,
      13,    14,    15,   111,   112,   434,    40,    20,    21,    22,
      23,    39,    37,    46,    44,   170,   221,   398,    71,    32,
      33,    34,    35,   391,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,   386,    52,
      53,    54,    -1,    -1,   391,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,    -1,    64,    65,
      -1,    -1,   105,   106,    70,    -1,    72,    73,    74,   112,
      76,   114,    -1,   116,   117,   118,   119,   120,     1,    -1,
      -1,    -1,     5,    -1,     7,     8,    -1,    10,    -1,    12,
      13,    14,    15,    -1,   100,   101,   102,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,   111,   112,    -1,    -1,    32,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,
      -1,    64,    65,    70,    -1,    -1,    73,    74,    -1,    76,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,    12,    13,    14,
      15,    -1,   105,   106,   111,   112,    21,    -1,    -1,   112,
      -1,   114,    27,   116,   117,   118,   119,   120,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    -1,
      95,    -1,    -1,    98,    99,    12,    13,    14,    15,    -1,
     105,   106,    -1,    -1,    21,    -1,    -1,   112,    -1,   114,
      27,   116,   117,    -1,    -1,   120,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    98,    99,    12,    13,    14,    15,    16,   105,   106,
      -1,    -1,    21,    -1,    -1,   112,    -1,   114,    -1,   116,
     117,    -1,    -1,   120,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      99,    12,    13,    14,    15,    16,   105,   106,    -1,    -1,
      21,    -1,    -1,   112,    -1,   114,    -1,   116,   117,    -1,
      -1,   120,    33,    34,    35,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,    80,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    99,    12,
      13,    14,    15,    -1,   105,   106,    -1,    -1,    21,    -1,
      -1,   112,    -1,   114,    -1,   116,   117,    -1,    -1,   120,
      33,    34,    35,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      53,    54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    99,    12,    13,    14,
      15,    -1,   105,   106,    -1,    -1,    21,    -1,    -1,   112,
      -1,   114,   115,   116,   117,    -1,    -1,   120,    33,    34,
      35,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    -1,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    78,    79,    80,    81,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    99,    12,    13,    14,    15,    -1,
     105,   106,    -1,    -1,    21,    -1,    -1,   112,    -1,   114,
     115,   116,   117,    -1,    -1,   120,    33,    34,    35,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    -1,    52,    53,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    65,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,    -1,
      77,    78,    79,    80,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    99,    12,    13,    14,    15,    -1,   105,   106,
      -1,    -1,    21,    -1,    -1,   112,    -1,   114,    -1,   116,
     117,    -1,    -1,   120,    33,    34,    35,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    -1,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      99,    -1,    -1,    -1,    -1,    -1,   105,   106,    19,    -1,
      -1,    -1,    -1,   112,    25,   114,    -1,   116,   117,    -1,
      -1,   120,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    -1,    90,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,    -1,    -1,    -1,    -1,   116,   119,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
     119,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    90,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   112,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,   112,    -1,    -1,    -1,    -1,   117,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    -1,    -1,
     115,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,    -1,   115,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,   112,    -1,    -1,   115,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,    -1,    -1,   105,   106,    91,    -1,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   112,   113,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   112,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    91,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,   112,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,   112,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    73,    74,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,   112,    64,    65,    66,    67,    68,
      69,    70,    -1,    72,    73,    74,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,   112,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    73,    74,    -1,    76,    -1,    -1,    -1,
      -1,    64,    65,    66,    67,    68,    69,    70,    -1,    72,
      73,    74,    -1,    76,    -1,    95,    96,    97,    98,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,   112,    96,    97,    98,    99,   100,   101,   102,
      -1,    -1,    -1,    -1,    64,    65,    66,    67,   111,   112,
      70,    -1,    72,    73,    74,    -1,    76,    -1,    -1,    64,
      65,    -1,    -1,    -1,    -1,    70,    -1,    72,    73,    74,
      -1,    76,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
     100,   101,   102,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,   112,    98,    99,   100,   101,   102,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,   112
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   122,     0,     5,    24,    26,    28,    30,   112,   127,
     128,   131,   142,   146,   171,   173,   174,   117,    83,   138,
     139,    77,   132,   133,    83,   129,   130,    83,    83,   116,
     140,   141,   151,     4,     6,   165,    90,    89,    92,    89,
      89,   117,   116,    83,    89,   113,   114,    83,    29,    64,
      65,    83,   145,    83,   118,   169,   175,    12,    13,    77,
      81,    84,   124,   138,    77,   133,   130,   172,    83,   140,
     139,   117,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   105,   106,    29,    29,
     114,   143,   119,    71,    89,    90,    92,   168,   123,    83,
     118,   115,   165,   115,   167,   169,    92,   144,    83,    19,
      25,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   151,   176,   177,   178,   179,    12,    13,    14,
      15,    21,    54,    64,    65,    77,    78,    79,    80,    81,
      82,    83,    84,    98,    99,   105,   106,   112,   114,   117,
     120,   126,   147,   150,   151,   153,   158,   159,   161,   162,
     163,   164,   176,   180,   183,   185,    85,    86,    90,   119,
     118,   115,   119,   179,   147,    96,    96,   114,    96,    27,
      91,    95,   106,   112,   168,   114,   151,   114,   164,   164,
     125,   164,   164,   164,   164,   112,   164,   149,   142,    83,
     114,    75,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    76,    90,    91,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   111,   112,   114,    77,   169,   179,
     179,    83,   143,   179,    27,    95,    77,   164,    16,   164,
      16,   164,    86,    87,   123,   179,   115,     1,     5,     7,
       8,    10,    20,    22,    23,    32,   118,   119,   135,   136,
     137,   148,   150,   152,   154,   155,   156,   157,   163,   164,
     143,   115,   160,   164,   161,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,    83,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,    83,   164,   115,   160,   119,    97,
      89,   115,   144,    97,   113,   179,   115,   179,   115,   164,
      83,   106,   112,   164,   181,   182,   184,   114,   170,   175,
     164,   164,   175,    71,   164,   147,   164,    31,   119,   119,
     119,   119,   144,    89,   115,    92,   113,   115,   179,    97,
     115,   115,    88,    90,    89,   113,   119,   113,   119,   166,
     169,    92,   168,   147,   147,    17,   164,    11,   117,   147,
     164,   164,    97,   164,    83,   113,    83,   181,   113,   164,
     115,   119,   179,   150,   164,     9,    18,   134,   160,   147,
     149,    90,   147,   169,   119,   168,   119,   147,   164,   147,
     118,   164,   150,   164,   147,   119,   134
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   121,   122,   122,   122,   122,   122,   122,   122,   122,
     123,   123,   124,   125,   125,   125,   126,   127,   128,   129,
     129,   130,   131,   132,   132,   133,   133,   134,   134,   134,
     135,   136,   137,   138,   138,   138,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   142,   143,   143,   143,   144,
     144,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     146,   147,   147,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   149,   149,   149,   150,   151,   151,
     151,   152,   153,   154,   155,   155,   155,   156,   157,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   162,   162,
     162,   162,   162,   162,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   165,   165,   166,   166,   167,   167,   168,   168,
     169,   169,   169,   169,   169,   170,   170,   170,   170,   170,
     171,   172,   172,   172,   173,   174,   175,   175,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   177,   178,   178,
     179,   179,   179,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   180,   180,   181,   181,   182,   182,
     183,   184,   184,   185
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       0,     2,     3,     0,     2,     4,     3,     2,     2,     1,
       3,     1,     2,     1,     3,     1,     3,     0,     2,     4,
       4,     5,     3,     3,     3,     3,     3,     3,     1,     3,
       1,     4,     1,     3,     0,     3,     0,     2,     3,     0,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       6,     3,     7,     1,     1,     2,     2,     1,     1,     1,
       2,     2,     1,     1,     0,     2,     2,     3,     1,     3,
       2,     2,     2,     1,     1,     2,     3,     4,     5,     2,
       4,     5,     4,     5,     1,     3,     1,     5,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     4,     3,     3,     3,     4,
       3,     4,     2,     3,     5,     1,     1,     1,     1,     3,
       3,     2,     0,     3,     1,     3,     1,     3,     1,     1,
       1,     3,     5,     3,     3,     4,     6,     5,     4,     3,
       4,     0,     3,     5,     5,     6,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     4,     2,     3,     2,     3,     2,     4,
       6,     1,     4,     5,     1,     1,     3,     5,     1,     3,
       6,     1,     3,     6
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return (YYSIZE_T) (yystpcpy (yyres, yystr) - yyres);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 83: /* NAME  */
#line 75 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).s); }
#line 1899 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 123: /* character_sequence  */
#line 75 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).s); }
#line 1905 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 124: /* string_constant  */
#line 75 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).s); }
#line 1911 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 125: /* string_builder_body  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 1917 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 126: /* string_builder  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 1923 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 134: /* expression_else  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 1929 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 135: /* expression_if_then_else  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 1935 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 136: /* expression_for_loop  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 1941 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 137: /* expression_while_loop  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 1947 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 138: /* annotation_argument  */
#line 81 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).aa); }
#line 1953 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 139: /* annotation_argument_list  */
#line 82 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).aaList); }
#line 1959 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 140: /* annotation_declaration  */
#line 83 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).fa); }
#line 1965 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 141: /* annotation_list  */
#line 84 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).faList); }
#line 1971 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 142: /* optional_annotation_list  */
#line 84 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).faList); }
#line 1977 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 143: /* optional_function_argument_list  */
#line 78 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
#line 1983 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 144: /* optional_function_type  */
#line 79 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pTypeDecl); }
#line 1989 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 145: /* function_name  */
#line 75 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).s); }
#line 1995 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 147: /* expression_block  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2001 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 148: /* expression_any  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2007 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 149: /* expressions  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2013 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 150: /* expr_pipe  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2019 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 151: /* name_in_namespace  */
#line 75 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).s); }
#line 2025 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 152: /* expression_delete  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2031 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 153: /* expr_new  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2037 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 154: /* expression_break  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2043 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 155: /* expression_return  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2049 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 156: /* expression_try_catch  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2055 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 157: /* expression_let  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2061 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 158: /* expr_sizeof  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2067 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 159: /* expr_typename  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2073 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 160: /* expr_list  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2079 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 161: /* expr_block  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2085 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 162: /* expr_numeric_const  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2091 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 163: /* expr_assign  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2097 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 164: /* expr  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2103 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 165: /* struct_variable_declaration_list  */
#line 78 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
#line 2109 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 166: /* variable_declaration_list  */
#line 78 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
#line 2115 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 167: /* function_argument_list  */
#line 78 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { deleteVariableDeclarationList(((*yyvaluep).pVarDeclList)); }
#line 2121 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 169: /* variable_declaration  */
#line 77 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pVarDecl); }
#line 2127 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 170: /* let_variable_declaration  */
#line 77 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pVarDecl); }
#line 2133 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 172: /* enum_list  */
#line 86 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pEnum); }
#line 2139 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 175: /* variable_name_list  */
#line 76 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pNameList); }
#line 2145 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 177: /* structure_type_declaration  */
#line 79 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pTypeDecl); }
#line 2151 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 178: /* auto_type_declaration  */
#line 79 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pTypeDecl); }
#line 2157 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 179: /* type_declaration  */
#line 79 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pTypeDecl); }
#line 2163 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 180: /* make_decl  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2169 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 181: /* make_struct_fields  */
#line 85 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pMakeStruct); }
#line 2175 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 182: /* make_struct_dim  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2181 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 183: /* make_struct_decl  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2187 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 184: /* make_dim  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2193 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;

    case 185: /* make_dim_decl  */
#line 80 "src/parser/ds_parser.ypp" /* yacc.c:1254  */
      { delete ((*yyvaluep).pExpression); }
#line 2199 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1254  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = (yytype_int16) yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = (YYSIZE_T) (yyssp - yyss + 1);

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 10:
#line 217 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string(); }
#line 2487 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 11:
#line 218 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = (yyvsp[-1].s); *(yyvsp[-1].s) += (yyvsp[0].ch); }
#line 2493 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 12:
#line 222 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = (yyvsp[-1].s); }
#line 2499 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 13:
#line 226 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pExpression) = new ExprStringBuilder();
    }
#line 2507 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 14:
#line 229 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto sc = make_shared<ExprConstString>(tokAt((yylsp[0])),*(yyvsp[0].s));
        delete (yyvsp[0].s);
        static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression))->elements.push_back(sc);
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
#line 2518 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 15:
#line 235 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto se = ExpressionPtr((yyvsp[-1].pExpression));
        static_cast<ExprStringBuilder *>((yyvsp[-3].pExpression))->elements.push_back(se);
        (yyval.pExpression) = (yyvsp[-3].pExpression);
    }
#line 2528 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 16:
#line 243 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto strb = static_cast<ExprStringBuilder *>((yyvsp[-1].pExpression));
        if ( strb->elements.size()==0 ) {
            (yyval.pExpression) = new ExprConstString(strb->at,"");
            delete (yyvsp[-1].pExpression);
        } else if ( strb->elements.size()==1 && strb->elements[0]->rtti_isStringConstant() ) {
            auto sconst = static_pointer_cast<ExprConstString>(strb->elements[0]);
            (yyval.pExpression) = new ExprConstString(strb->at,sconst->text);
            delete (yyvsp[-1].pExpression);
        } else {
            (yyval.pExpression) = (yyvsp[-1].pExpression);
        }
    }
#line 2546 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 17:
#line 259 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
		if ( g_Program->options.arguments.size() ) {
			g_Program->options.arguments.insert ( g_Program->options.arguments.begin(),
                (yyvsp[0].aaList)->arguments.begin(), (yyvsp[0].aaList)->arguments.end() );
		} else {
			swap ( g_Program->options, *(yyvsp[0].aaList) );
		}
		auto opt = g_Program->options.find("indenting", tInt);
		extern int tab_size, def_tab_size;
		if (opt)
		{
			if (opt->iValue != 0 && opt->iValue != 2 && opt->iValue != 4 && opt->iValue != 8)//this is error
				tab_size = def_tab_size;
			else
				tab_size = opt->iValue ? opt->iValue : def_tab_size;//0 is default
		}
		delete (yyvsp[0].aaList);
	}
#line 2569 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 21:
#line 289 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        if ( auto mod = Module::require(*(yyvsp[0].s)) ) {
            g_Program->addModule(mod);
        } else {
            yyerror("required module not found " + *(yyvsp[0].s),tokAt((yylsp[0])),
                CompilationError::module_not_found);
        }
        delete (yyvsp[0].s);
    }
#line 2583 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 25:
#line 310 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        g_Program->expectErrors[CompilationError((yyvsp[0].i))] ++;
    }
#line 2591 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 26:
#line 313 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        g_Program->expectErrors[CompilationError((yyvsp[-2].i))] += (yyvsp[0].i);
    }
#line 2599 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 27:
#line 319 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = nullptr; }
#line 2605 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 28:
#line 320 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 2611 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 29:
#line 321 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pExpression) = new ExprIfThenElse(tokAt((yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
#line 2620 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 30:
#line 328 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pExpression) = new ExprIfThenElse(tokAt((yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),
            ExpressionPtr((yyvsp[-1].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
#line 2629 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 31:
#line 335 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto pFor = new ExprFor(tokAt((yylsp[-4])));
        pFor->iterators = *(yyvsp[-3].pNameList);
        delete (yyvsp[-3].pNameList);
        pFor->sources = sequenceToList((yyvsp[-1].pExpression));
        pFor->subexpr = ExpressionPtr((yyvsp[0].pExpression));
        ((ExprBlock *)(yyvsp[0].pExpression))->inTheLoop = true;
        (yyval.pExpression) = pFor;
    }
#line 2643 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 32:
#line 347 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto pWhile = new ExprWhile();
        pWhile->cond = ExpressionPtr((yyvsp[-1].pExpression));
        pWhile->body = ExpressionPtr((yyvsp[0].pExpression));
        ((ExprBlock *)(yyvsp[0].pExpression))->inTheLoop = true;
        (yyval.pExpression) = pWhile;
    }
#line 2655 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 33:
#line 357 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),*(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 2661 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 34:
#line 358 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),(yyvsp[0].i));  }
#line 2667 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 35:
#line 359 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),float((yyvsp[0].fd)));  }
#line 2673 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 36:
#line 360 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),true);  }
#line 2679 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 37:
#line 361 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.aa) = new AnnotationArgument(*(yyvsp[-2].s),false);  }
#line 2685 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 38:
#line 365 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.aaList) = new AnnotationArgumentList();
        (yyval.aaList)->arguments.push_back(*(yyvsp[0].aa));
        delete (yyvsp[0].aa);
    }
#line 2695 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 39:
#line 370 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
            (yyval.aaList) = (yyvsp[-2].aaList);
            (yyval.aaList)->arguments.push_back(*(yyvsp[0].aa));
            delete (yyvsp[0].aa);
    }
#line 2705 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 40:
#line 378 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.fa) = new AnnotationDeclaration();
        if ( auto ann = findAnnotation(*(yyvsp[0].s),tokAt((yylsp[0]))) ) {
            (yyval.fa)->annotation = ann->shared_from_this();
        }
        delete (yyvsp[0].s);
    }
#line 2717 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 41:
#line 385 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.fa) = new AnnotationDeclaration();
        if ( auto ann = findAnnotation(*(yyvsp[-3].s),tokAt((yylsp[-3]))) ) {
            (yyval.fa)->annotation = ann->shared_from_this();
        }
        swap ( (yyval.fa)->arguments, *(yyvsp[-1].aaList) );
        delete (yyvsp[-1].aaList);
        delete (yyvsp[-3].s);
    }
#line 2731 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 42:
#line 397 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
            (yyval.faList) = new AnnotationList();
            (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
#line 2740 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 43:
#line 401 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.faList) = (yyvsp[-2].faList);
        (yyval.faList)->push_back(AnnotationDeclarationPtr((yyvsp[0].fa)));
    }
#line 2749 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 44:
#line 408 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.faList) = nullptr; }
#line 2755 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 45:
#line 409 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.faList) = (yyvsp[-1].faList); }
#line 2761 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 46:
#line 413 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pVarDeclList) = nullptr; }
#line 2767 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 47:
#line 414 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pVarDeclList) = nullptr; }
#line 2773 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 48:
#line 415 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pVarDeclList) = (yyvsp[-1].pVarDeclList); }
#line 2779 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 49:
#line 419 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = LineInfo(yylloc.first_column,yylloc.first_line);
    }
#line 2788 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 50:
#line 423 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl);
        (yyval.pTypeDecl)->at = tokAt((yylsp[0]));
    }
#line 2797 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 51:
#line 430 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = (yyvsp[0].s); }
#line 2803 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 52:
#line 431 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("!"); }
#line 2809 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 53:
#line 432 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("~"); }
#line 2815 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 54:
#line 433 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("+="); }
#line 2821 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 55:
#line 434 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("-="); }
#line 2827 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 56:
#line 435 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("*="); }
#line 2833 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 57:
#line 436 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("/="); }
#line 2839 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 58:
#line 437 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("%="); }
#line 2845 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 59:
#line 438 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("&="); }
#line 2851 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 60:
#line 439 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("|="); }
#line 2857 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 61:
#line 440 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("^="); }
#line 2863 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 62:
#line 441 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("+"); }
#line 2869 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 63:
#line 442 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("-"); }
#line 2875 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 64:
#line 443 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("*"); }
#line 2881 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 65:
#line 444 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("/"); }
#line 2887 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 66:
#line 445 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("%"); }
#line 2893 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 67:
#line 446 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("<"); }
#line 2899 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 68:
#line 447 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string(">"); }
#line 2905 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 69:
#line 448 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("=="); }
#line 2911 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 70:
#line 449 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("!="); }
#line 2917 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 71:
#line 450 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("<="); }
#line 2923 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 72:
#line 451 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string(">="); }
#line 2929 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 73:
#line 452 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("&"); }
#line 2935 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 74:
#line 453 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("|"); }
#line 2941 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 75:
#line 454 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("^"); }
#line 2947 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 76:
#line 455 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("++"); }
#line 2953 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 77:
#line 456 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("--"); }
#line 2959 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 78:
#line 457 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("+++"); }
#line 2965 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 79:
#line 458 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = new string("---"); }
#line 2971 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 80:
#line 463 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto pFunction = make_shared<Function>();
        pFunction->at = tokAt((yylsp[-4]));
        pFunction->name = *(yyvsp[-3].s);
        pFunction->body = ExpressionPtr((yyvsp[0].pExpression));
        pFunction->result = TypeDeclPtr((yyvsp[-1].pTypeDecl));
        if ( (yyvsp[-2].pVarDeclList) ) {
            for ( auto pDecl : *(yyvsp[-2].pVarDeclList) ) {
                if ( pDecl->pTypeDecl ) {
                    for ( const auto & name : *pDecl->pNameList ) {
                        if ( !pFunction->findArgument(name) ) {
                            VariablePtr pVar = make_shared<Variable>();
                            pVar->name = name;
                            pVar->at = pDecl->at;
                            pVar->type = make_shared<TypeDecl>(*pDecl->pTypeDecl);
                            if ( pDecl->pInit ) {
                                pVar->init = ExpressionPtr(pDecl->pInit->clone());
                                pVar->move_to_init = pDecl->move_to_init;
                            }
                            pFunction->arguments.push_back(pVar);
                        } else {
                            yyerror("function argument is already declared " + name,pDecl->at,
                                CompilationError::argument_already_declared);
                        }
                    }
                }
            }
            deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        }
        if ( (yyvsp[-5].faList) ) {
            for ( auto pA : *(yyvsp[-5].faList) ) {
                if ( pA->annotation ) {
                    if ( pA->annotation->rtti_isFunctionAnnotation() ) {
                        auto ann = static_pointer_cast<FunctionAnnotation>(pA->annotation);
                        string err;
                        if ( !ann->apply(pFunction, pA->arguments, err) ) {
                            yyerror("can't apply annotation\n" + err,
                                tokAt((yylsp[-4])), CompilationError::invalid_annotation);
                        }
                    } else {
                        yyerror("functions are only allowed function annotations",
                            tokAt((yylsp[-4])), CompilationError::invalid_annotation);
                    }
                }
            }
            swap ( pFunction->annotations, *(yyvsp[-5].faList) );
            delete (yyvsp[-5].faList);
        }
        if ( pFunction->isGeneric() ) {
            if ( !g_Program->addGeneric(pFunction) ) {
                yyerror("generic function is already defined " +
                    pFunction->getMangledName(),tokAt((yylsp[-4])),
                        CompilationError::function_already_declared);
                pFunction.reset();
            }
        } else {
            if ( !g_Program->addFunction(pFunction) ) {
                yyerror("function is already defined " +
                    pFunction->getMangledName(),tokAt((yylsp[-4])),
                        CompilationError::function_already_declared);
                pFunction.reset();
            }
        }
        delete (yyvsp[-3].s);
    }
#line 3041 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 81:
#line 531 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
    }
#line 3049 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 82:
#line 534 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto pB = (ExprBlock *) (yyvsp[-5].pExpression);
        auto pF = (ExprBlock *) (yyvsp[-1].pExpression);
        swap ( pB->finalList, pF->list );
        (yyval.pExpression) = (yyvsp[-5].pExpression);
    }
#line 3060 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 83:
#line 543 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = nullptr; }
#line 3066 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 84:
#line 544 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 3072 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 85:
#line 545 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[-1].pExpression); }
#line 3078 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 86:
#line 546 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[-1].pExpression); }
#line 3084 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 87:
#line 547 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 3090 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 88:
#line 548 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 3096 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 89:
#line 549 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 3102 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 90:
#line 550 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[-1].pExpression); }
#line 3108 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 91:
#line 551 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[-1].pExpression); }
#line 3114 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 92:
#line 552 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 3120 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 93:
#line 553 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 3126 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 94:
#line 557 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprBlock(); }
#line 3132 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 95:
#line 558 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pExpression) = (yyvsp[-1].pExpression);
        if ( (yyvsp[0].pExpression) ) {
            static_cast<ExprBlock*>((yyvsp[-1].pExpression))->list.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        }
    }
#line 3143 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 96:
#line 564 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        delete (yyvsp[-1].pExpression); (yyval.pExpression) = nullptr; YYABORT;
    }
#line 3151 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 97:
#line 570 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        Expression * pipeCall = (yyvsp[-2].pExpression)->tail();
        if ( pipeCall->rtti_isCall() ) {
            auto pCall = (ExprLooksLikeCall *) pipeCall;
            pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        } else {
            yyerror("can only pipe into function call",tokAt((yylsp[-1])),CompilationError::cant_pipe);
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        }
    }
#line 3167 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 98:
#line 584 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.s) = (yyvsp[0].s); }
#line 3173 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 99:
#line 585 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
            *(yyvsp[-2].s) += "::";
            *(yyvsp[-2].s) += *(yyvsp[0].s);
            delete (yyvsp[0].s);
            (yyval.s) = (yyvsp[-2].s);
        }
#line 3184 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 100:
#line 591 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { *(yyvsp[0].s) = "::" + *(yyvsp[0].s); (yyval.s) = (yyvsp[0].s); }
#line 3190 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 101:
#line 595 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pExpression) = new ExprDelete(tokAt((yylsp[-1])), ExpressionPtr((yyvsp[0].pExpression)));
    }
#line 3198 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 102:
#line 601 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto pTypeDecl = g_Program->makeTypeDeclaration(tokAt((yylsp[-1])), *(yyvsp[0].s));
        (yyval.pExpression) = new ExprNew(tokAt((yylsp[-1])),TypeDeclPtr(pTypeDecl));
        delete (yyvsp[0].s);
    }
#line 3208 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 103:
#line 609 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprBreak(tokAt((yylsp[0]))); }
#line 3214 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 104:
#line 613 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pExpression) = new ExprReturn(tokAt((yylsp[0])),nullptr);
    }
#line 3222 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 105:
#line 616 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pExpression) = new ExprReturn(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[0].pExpression)));
    }
#line 3230 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 106:
#line 619 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto pRet = new ExprReturn(tokAt((yylsp[-2])),ExpressionPtr((yyvsp[0].pExpression)));
        pRet->moveSemantics = true;
        (yyval.pExpression) = pRet;
    }
#line 3240 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 107:
#line 627 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pExpression) = new ExprTryCatch(tokAt((yylsp[-3])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
#line 3248 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 108:
#line 633 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto pLet = new ExprLet();
        pLet->subexpr = ExpressionPtr((yyvsp[0].pExpression));
        for ( auto pDecl : *(yyvsp[-2].pVarDeclList) ) {
            if ( pDecl->pTypeDecl ) {
                for ( const auto & name : *pDecl->pNameList ) {
                    if ( !pLet->find(name) ) {
                        VariablePtr pVar = make_shared<Variable>();
                        pVar->name = name;
                        pVar->at = pDecl->at;
                        pVar->type = make_shared<TypeDecl>(*pDecl->pTypeDecl);
                        if ( pDecl->pInit ) {
                            pVar->init = pDecl->pInit->clone();
                            pVar->move_to_init = pDecl->move_to_init;
                        }
                        pLet->variables.push_back(pVar);
                    } else {
                        yyerror("local variable is already declared " + name,tokAt((yylsp[-2])),
                            CompilationError::local_variable_already_declared);
                    }
                }
            }
        }
        deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        (yyval.pExpression) = pLet;
    }
#line 3279 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 109:
#line 659 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto pLet = new ExprLet();
        pLet->scoped = false;
        if ( (yyvsp[0].pVarDecl)->pTypeDecl ) {
            for ( const auto & name : *(yyvsp[0].pVarDecl)->pNameList ) {
                if ( !pLet->find(name) ) {
                    VariablePtr pVar = make_shared<Variable>();
                    pVar->name = name;
                    pVar->at = (yyvsp[0].pVarDecl)->at;
                    pVar->type = make_shared<TypeDecl>(*(yyvsp[0].pVarDecl)->pTypeDecl);
                    if ( (yyvsp[0].pVarDecl)->pInit ) {
                        pVar->init = (yyvsp[0].pVarDecl)->pInit->clone();
                        pVar->move_to_init = (yyvsp[0].pVarDecl)->move_to_init;
                    }
                    pLet->variables.push_back(pVar);
                } else {
                    yyerror("local variable is already declared " + name,tokAt((yylsp[-1])),
                        CompilationError::local_variable_already_declared);
                }
            }
        }
        delete (yyvsp[0].pVarDecl);
        (yyval.pExpression) = pLet;
    }
#line 3308 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 110:
#line 686 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
            (yyval.pExpression) = new ExprSizeOf(tokAt((yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression)));
    }
#line 3316 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 111:
#line 689 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
            (yyval.pExpression) = new ExprSizeOf(tokAt((yylsp[-4])),TypeDeclPtr((yyvsp[-1].pTypeDecl)));
    }
#line 3324 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 112:
#line 695 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pExpression) = new ExprTypeName(tokAt((yylsp[-3])),ExpressionPtr((yyvsp[-1].pExpression)));
    }
#line 3332 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 113:
#line 698 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pExpression) = new ExprTypeName(tokAt((yylsp[-4])),TypeDeclPtr((yyvsp[-1].pTypeDecl)));
    }
#line 3340 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 114:
#line 704 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pExpression) = (yyvsp[0].pExpression);
    }
#line 3348 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 115:
#line 707 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
            (yyval.pExpression) = new ExprSequence(tokAt((yylsp[-2])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
    }
#line 3356 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 116:
#line 713 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        ExprBlock * closure = (ExprBlock *) (yyvsp[0].pExpression);
        (yyval.pExpression) = new ExprMakeBlock(tokAt((yylsp[0])),ExpressionPtr((yyvsp[0].pExpression)));
        closure->returnType = make_shared<TypeDecl>(Type::autoinfer);
    }
#line 3366 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 117:
#line 719 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pExpression) = new ExprMakeBlock(tokAt((yylsp[0])),ExpressionPtr((yyvsp[0].pExpression)));
        ExprBlock * closure = (ExprBlock *) (yyvsp[0].pExpression);
        closure->returnType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
        if ( (yyvsp[-2].pVarDeclList) ) {
            for ( auto pDecl : *(yyvsp[-2].pVarDeclList) ) {
                if ( pDecl->pTypeDecl ) {
                    for ( const auto & name : *pDecl->pNameList ) {
                        if ( !closure->findArgument(name) ) {
                            VariablePtr pVar = make_shared<Variable>();
                            pVar->name = name;
                            pVar->at = pDecl->at;
                            pVar->type = make_shared<TypeDecl>(*pDecl->pTypeDecl);
                            if ( pDecl->pInit ) {
                                pVar->init = ExpressionPtr(pDecl->pInit->clone());
                                pVar->move_to_init = pDecl->move_to_init;
                            }
                            closure->arguments.push_back(pVar);
                        } else {
                            yyerror("block argument is already declared " + name,
                                pDecl->at,CompilationError::argument_already_declared);
                        }
                    }
                }
            }
            deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
            if ( (yyvsp[-3].faList) ) {
                for ( auto pA : *(yyvsp[-3].faList) ) {
                    if ( pA->annotation ) {
                        if ( pA->annotation->rtti_isFunctionAnnotation() ) {
                            auto ann = static_pointer_cast<FunctionAnnotation>(pA->annotation);
                            string err;
                            if ( !ann->apply(closure, pA->arguments, err) ) {
                                yyerror("can't apply annotation\n" + err, tokAt((yylsp[-3])),
                                    CompilationError::invalid_annotation);
                            }
                        } else {
                            yyerror("blocks are only allowed function annotations", tokAt((yylsp[-3])),
                                CompilationError::invalid_annotation);
                        }
                    }
                }
                swap ( closure->annotations, *(yyvsp[-3].faList) );
                delete (yyvsp[-3].faList);
            }
        }
    }
#line 3418 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 118:
#line 769 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprConstInt(tokAt((yylsp[0])),(int32_t)(yyvsp[0].i)); }
#line 3424 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 119:
#line 770 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprConstUInt(tokAt((yylsp[0])),(uint32_t)(yyvsp[0].ui)); }
#line 3430 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 120:
#line 771 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprConstInt64(tokAt((yylsp[0])),(int64_t)(yyvsp[0].i64)); }
#line 3436 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 121:
#line 772 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprConstUInt64(tokAt((yylsp[0])),(uint64_t)(yyvsp[0].ui64)); }
#line 3442 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 122:
#line 773 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprConstFloat(tokAt((yylsp[0])),(float)(yyvsp[0].fd)); }
#line 3448 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 123:
#line 774 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprConstDouble(tokAt((yylsp[0])),(double)(yyvsp[0].d)); }
#line 3454 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 124:
#line 778 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 3460 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 125:
#line 779 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprCopy(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
#line 3466 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 126:
#line 780 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"&=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3472 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 127:
#line 781 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"|=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3478 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 128:
#line 782 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"^=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3484 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 129:
#line 783 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"+=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3490 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 130:
#line 784 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"-=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3496 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 131:
#line 785 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"*=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3502 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 132:
#line 786 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"/=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3508 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 133:
#line 787 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"%=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3514 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 134:
#line 791 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprConstPtr(tokAt((yylsp[0])),nullptr); }
#line 3520 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 135:
#line 792 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprVar(tokAt((yylsp[0])),*(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 3526 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 136:
#line 793 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 3532 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 137:
#line 794 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 3538 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 138:
#line 795 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 3544 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 139:
#line 796 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprConstBool(tokAt((yylsp[0])),true); }
#line 3550 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 140:
#line 797 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprConstBool(tokAt((yylsp[0])),false); }
#line 3556 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 141:
#line 798 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[-1])),"!",ExpressionPtr((yyvsp[0].pExpression))); }
#line 3562 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 142:
#line 799 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[-1])),"~",ExpressionPtr((yyvsp[0].pExpression))); }
#line 3568 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 143:
#line 800 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[-1])),"+",ExpressionPtr((yyvsp[0].pExpression))); }
#line 3574 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 144:
#line 801 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[-1])),"-",ExpressionPtr((yyvsp[0].pExpression))); }
#line 3580 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 145:
#line 802 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprMove(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3586 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 146:
#line 803 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"+", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3592 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 147:
#line 804 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"-", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3598 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 148:
#line 805 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"*", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3604 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 149:
#line 806 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"/", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3610 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 150:
#line 807 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"%", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3616 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 151:
#line 808 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"<", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3622 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 152:
#line 809 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),">", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3628 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 153:
#line 810 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"==", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3634 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 154:
#line 811 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"!=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3640 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 155:
#line 812 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"<=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3646 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 156:
#line 813 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),">=", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3652 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 157:
#line 814 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"&", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3658 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 158:
#line 815 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"|", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3664 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 159:
#line 816 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp2(tokAt((yylsp[-1])),"^", ExpressionPtr((yyvsp[-2].pExpression)), ExpressionPtr((yyvsp[0].pExpression))); }
#line 3670 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 160:
#line 817 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[-1])),"++", ExpressionPtr((yyvsp[0].pExpression))); }
#line 3676 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 161:
#line 818 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[-1])),"--", ExpressionPtr((yyvsp[0].pExpression))); }
#line 3682 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 162:
#line 819 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[0])),"+++", ExpressionPtr((yyvsp[-1].pExpression))); }
#line 3688 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 163:
#line 820 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprOp1(tokAt((yylsp[0])),"---", ExpressionPtr((yyvsp[-1].pExpression))); }
#line 3694 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 164:
#line 821 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[-1].pExpression); }
#line 3700 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 165:
#line 822 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprAt(tokAt((yylsp[-2])), ExpressionPtr((yyvsp[-3].pExpression)), ExpressionPtr((yyvsp[-1].pExpression))); }
#line 3706 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 166:
#line 823 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprField(tokAt((yylsp[-1])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 3712 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 167:
#line 824 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprSafeField(tokAt((yylsp[-1])), ExpressionPtr((yyvsp[-2].pExpression)), *(yyvsp[0].s)); delete (yyvsp[0].s); }
#line 3718 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 168:
#line 825 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
            (yyval.pExpression) = g_Program->makeCall(tokAt((yylsp[-2])),*(yyvsp[-2].s));
            delete (yyvsp[-2].s);
        }
#line 3727 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 169:
#line 829 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
            (yyval.pExpression) = parseFunctionArguments(g_Program->makeCall(tokAt((yylsp[-3])),*(yyvsp[-3].s)),(yyvsp[-1].pExpression));
            delete (yyvsp[-3].s);
        }
#line 3736 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 170:
#line 833 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pExpression) = g_Program->makeCall(tokAt((yylsp[-2])),das_to_string((yyvsp[-2].type)));
    }
#line 3744 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 171:
#line 836 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
            (yyval.pExpression) = parseFunctionArguments(g_Program->makeCall(tokAt((yylsp[-3])),das_to_string((yyvsp[-3].type))),(yyvsp[-1].pExpression));
        }
#line 3752 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 172:
#line 839 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprPtr2Ref(tokAt((yylsp[0])),ExpressionPtr((yyvsp[-1].pExpression))); }
#line 3758 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 173:
#line 840 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = new ExprNullCoalescing(tokAt((yylsp[-1])),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression))); }
#line 3764 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 174:
#line 841 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
            (yyval.pExpression) = new ExprOp3(tokAt((yylsp[-3])),"?",ExpressionPtr((yyvsp[-4].pExpression)),ExpressionPtr((yyvsp[-2].pExpression)),ExpressionPtr((yyvsp[0].pExpression)));
        }
#line 3772 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 175:
#line 844 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 3778 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 176:
#line 845 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 3784 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 177:
#line 846 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 3790 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 178:
#line 847 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 3796 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 179:
#line 848 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        if ( (yyvsp[-2].pExpression)->rtti_isCall() ) {
            auto pCall = (ExprLooksLikeCall *) (yyvsp[-2].pExpression);
            pCall->arguments.push_back(ExpressionPtr((yyvsp[0].pExpression)));
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        } else {
            yyerror("can only pipe into a function call",tokAt((yylsp[-1])),CompilationError::cant_pipe);
            (yyval.pExpression) = (yyvsp[-2].pExpression);
        }
    }
#line 3811 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 180:
#line 858 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        if ( (yyvsp[0].pExpression)->rtti_isCall() ) {
            auto pCall = (ExprLooksLikeCall *) (yyvsp[0].pExpression);
            pCall->arguments.insert(pCall->arguments.begin(),ExpressionPtr((yyvsp[-2].pExpression)));
            (yyval.pExpression) = (yyvsp[0].pExpression);
        } else {
            yyerror("can only pipe into a function call",tokAt((yylsp[-1])),CompilationError::cant_pipe);
            (yyval.pExpression) = (yyvsp[0].pExpression);
        }
    }
#line 3826 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 181:
#line 868 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
		ExprConstEnumeration * resEnum = nullptr;
        auto enums = g_Program->findEnum(*(yyvsp[-1].s));
        if ( enums.size()!=1 ) {
            if ( enums.size() ) {
                string candidates = g_Program->describeCandidates(enums);
                yyerror("enumeraiton not found " + *(yyvsp[-1].s) + "\n" + candidates, tokAt((yylsp[-1])),
                    CompilationError::enumeration_not_found);
            } else {
                yyerror("enumeraiton not found " + *(yyvsp[-1].s), tokAt((yylsp[-1])),
                    CompilationError::enumeration_not_found);
            }
        } else {
            auto pEnum = enums.back();
            auto ff = pEnum->find(*(yyvsp[0].s));
            if ( ff.second ) {
				auto td = make_shared<TypeDecl>(pEnum);
                resEnum = new ExprConstEnumeration(tokAt((yylsp[0])), ff.first, td);
            } else {
                yyerror("enumeraiton value not found " + *(yyvsp[-1].s) + " " + *(yyvsp[0].s), tokAt((yylsp[0])),
                    CompilationError::enumeration_not_found);
            }
        }
		if ( resEnum ) {
			(yyval.pExpression) = resEnum;
		} else {
			(yyval.pExpression) = new ExprConstInt(0);	// dummy
		}
        delete (yyvsp[-1].s);
        delete (yyvsp[0].s);
    }
#line 3862 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 182:
#line 902 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); }
#line 3868 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 183:
#line 903 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[-1].pVarDecl)); }
#line 3874 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 184:
#line 907 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
#line 3880 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 185:
#line 908 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
#line 3886 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 186:
#line 912 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pVarDeclList) = new vector<VariableDeclaration*>(); (yyval.pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
#line 3892 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 187:
#line 913 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pVarDeclList) = (yyvsp[-2].pVarDeclList); (yyvsp[-2].pVarDeclList)->push_back((yyvsp[0].pVarDecl)); }
#line 3898 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 188:
#line 917 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.b) = false; }
#line 3904 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 189:
#line 918 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.b) = true; }
#line 3910 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 190:
#line 922 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto autoT = new TypeDecl(Type::autoinfer);
        (yyval.pVarDecl) = new VariableDeclaration(tokAt((yylsp[0])),(yyvsp[0].pNameList),autoT,nullptr);
    }
#line 3919 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 191:
#line 926 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pVarDecl) = new VariableDeclaration(tokAt((yylsp[-2])),(yyvsp[-2].pNameList),(yyvsp[0].pTypeDecl),nullptr);
    }
#line 3927 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 192:
#line 929 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pVarDecl) = new VariableDeclaration(tokAt((yylsp[-4])),(yyvsp[-4].pNameList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->move_to_init = (yyvsp[-1].b);
    }
#line 3936 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 193:
#line 933 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        (yyval.pVarDecl) = new VariableDeclaration(tokAt((yylsp[-2])),(yyvsp[-2].pNameList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->move_to_init = (yyvsp[-1].b);
    }
#line 3946 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 194:
#line 938 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        (yyval.pVarDecl) = new VariableDeclaration(tokAt((yylsp[-2])),(yyvsp[-2].pNameList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->move_to_init = (yyvsp[-1].b);
    }
#line 3956 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 195:
#line 946 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pVarDecl) = new VariableDeclaration(tokAt((yylsp[-3])),(yyvsp[-3].pNameList),(yyvsp[-1].pTypeDecl),nullptr);
    }
#line 3964 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 196:
#line 949 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pVarDecl) = new VariableDeclaration(tokAt((yylsp[-5])),(yyvsp[-5].pNameList),(yyvsp[-3].pTypeDecl),(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->move_to_init = (yyvsp[-2].b);
    }
#line 3973 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 197:
#line 953 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pVarDecl) = new VariableDeclaration(tokAt((yylsp[-4])),(yyvsp[-4].pNameList),(yyvsp[-2].pTypeDecl),(yyvsp[0].pExpression));
        (yyval.pVarDecl)->move_to_init = (yyvsp[-1].b);
    }
#line 3982 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 198:
#line 957 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        (yyval.pVarDecl) = new VariableDeclaration(tokAt((yylsp[-3])),(yyvsp[-3].pNameList),typeDecl,(yyvsp[-1].pExpression));
        (yyval.pVarDecl)->move_to_init = (yyvsp[-2].b);
    }
#line 3992 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 199:
#line 962 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto typeDecl = new TypeDecl(Type::autoinfer);
        (yyval.pVarDecl) = new VariableDeclaration(tokAt((yylsp[-2])),(yyvsp[-2].pNameList),typeDecl,(yyvsp[0].pExpression));
        (yyval.pVarDecl)->move_to_init = (yyvsp[-1].b);
    }
#line 4002 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 200:
#line 970 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        for ( auto pDecl : *(yyvsp[-1].pVarDeclList) ) {
            if ( pDecl->pTypeDecl ) {
                for ( const auto & name : *pDecl->pNameList ) {
                    VariablePtr pVar = make_shared<Variable>();
                    pVar->name = name;
                    pVar->at = pDecl->at;
                    pVar->type = make_shared<TypeDecl>(*pDecl->pTypeDecl);
                    if ( pDecl->pInit ) {
                        pVar->init = pDecl->pInit->clone();
                        pVar->move_to_init = pDecl->move_to_init;
                    }
                    if ( !g_Program->addVariable(pVar) )
                        yyerror("global variable is already declared " + name,pDecl->at,
                            CompilationError::global_variable_already_declared);
                }
            }
        }
        deleteVariableDeclarationList((yyvsp[-1].pVarDeclList));
    }
#line 4027 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 201:
#line 993 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pEnum) = new Enumeration();
    }
#line 4035 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 202:
#line 996 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        if ( !(yyvsp[-2].pEnum)->add(*(yyvsp[-1].s)) ) {
            yyerror("enumeration alread declared " + *(yyvsp[-1].s), tokAt((yylsp[-1])),
                CompilationError::enumeration_value_already_declared);
        }
        delete (yyvsp[-1].s);
        (yyval.pEnum) = (yyvsp[-2].pEnum);
    }
#line 4048 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 203:
#line 1004 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        if ( !(yyvsp[-4].pEnum)->add(*(yyvsp[-3].s),(yyvsp[-1].i)) ) {
            yyerror("enumeration value alread declared " + *(yyvsp[-3].s), tokAt((yylsp[-3])),
                CompilationError::enumeration_value_already_declared);
        }
        delete (yyvsp[-3].s);
        (yyval.pEnum) = (yyvsp[-4].pEnum);
    }
#line 4061 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 204:
#line 1015 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto pEnum = EnumerationPtr((yyvsp[-1].pEnum));
        pEnum->at = tokAt((yylsp[-4]));
        pEnum->name = *(yyvsp[-3].s); 
        if ( !g_Program->addEnumeration(pEnum) ) {
            yyerror("enumeration is alredy defined "+*(yyvsp[-3].s),tokAt((yylsp[-1])),
                CompilationError::enumeration_already_declared);
        }
		delete (yyvsp[-3].s);
    }
#line 4076 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 205:
#line 1028 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto pStruct = make_shared<Structure>(*(yyvsp[-3].s));
        pStruct->at = tokAt((yylsp[-4]));
        for ( auto pDecl : *(yyvsp[-1].pVarDeclList) ) {
            for ( const auto & name : *pDecl->pNameList ) {
                if ( !pStruct->findField(name) ) {
                    auto td = make_shared<TypeDecl>(*pDecl->pTypeDecl);
                    auto init = pDecl->pInit ? ExpressionPtr(pDecl->pInit->clone()) : nullptr;
                    pStruct->fields.emplace_back(name, td, init, pDecl->at);
                } else {
                    yyerror("structure field is already declared "+name,pDecl->at,
                        CompilationError::structure_field_already_declared);
                }
            }
        }
        if ( (yyvsp[-5].faList) ) {
            if ( (yyvsp[-5].faList)->size()!=1 ) {
                yyerror("structures are only allowed one annotation", tokAt((yylsp[-4])),
                    CompilationError::invalid_annotation);
            } else {
                auto & annotation = (yyvsp[-5].faList)->back()->annotation;
                auto & args = (yyvsp[-5].faList)->back()->arguments;
                if ( !annotation->rtti_isStructureAnnotation() ) {
                    yyerror("structures are only allowed structure annotation", tokAt((yylsp[-4])),
                        CompilationError::invalid_annotation);
                } else if ( !g_Program->addStructureHandle(pStruct,
                        static_pointer_cast<StructureTypeAnnotation>(annotation), args) ) {
                    yyerror("handled structure is alredy defined "+*(yyvsp[-3].s),tokAt((yylsp[-4])),
                        CompilationError::structure_already_declared);
                }
            }
            delete (yyvsp[-5].faList);
        } else {
            if ( !g_Program->addStructure(pStruct) )
                yyerror("structure is alredy defined "+*(yyvsp[-3].s),tokAt((yylsp[-4])),
                    CompilationError::structure_already_declared);
        }
        deleteVariableDeclarationList((yyvsp[-1].pVarDeclList));
        delete((yyvsp[-3].s));
    }
#line 4121 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 206:
#line 1071 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto pSL = new vector<string>();
        pSL->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = pSL;
        delete (yyvsp[0].s);
    }
#line 4132 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 207:
#line 1077 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyvsp[-2].pNameList)->push_back(*(yyvsp[0].s));
        (yyval.pNameList) = (yyvsp[-2].pNameList);
        delete (yyvsp[0].s);
    }
#line 4142 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 208:
#line 1085 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tBool; }
#line 4148 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 209:
#line 1086 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tString; }
#line 4154 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 210:
#line 1087 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tInt; }
#line 4160 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 211:
#line 1088 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tInt64; }
#line 4166 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 212:
#line 1089 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tInt2; }
#line 4172 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 213:
#line 1090 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tInt3; }
#line 4178 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 214:
#line 1091 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tInt4; }
#line 4184 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 215:
#line 1092 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tUInt; }
#line 4190 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 216:
#line 1093 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tUInt64; }
#line 4196 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 217:
#line 1094 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tUInt2; }
#line 4202 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 218:
#line 1095 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tUInt3; }
#line 4208 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 219:
#line 1096 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tUInt4; }
#line 4214 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 220:
#line 1097 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tFloat; }
#line 4220 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 221:
#line 1098 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tFloat2; }
#line 4226 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 222:
#line 1099 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tFloat3; }
#line 4232 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 223:
#line 1100 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tFloat4; }
#line 4238 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 224:
#line 1101 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tVoid; }
#line 4244 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 225:
#line 1102 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tRange; }
#line 4250 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 226:
#line 1103 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.type) = Type::tURange; }
#line 4256 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 227:
#line 1107 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pTypeDecl) = g_Program->makeTypeDeclaration(tokAt((yylsp[0])),*(yyvsp[0].s));
        if ( !(yyval.pTypeDecl) ) {
            (yyval.pTypeDecl) = new TypeDecl(Type::tVoid);
        }
        delete (yyvsp[0].s);
    }
#line 4268 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 228:
#line 1117 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt((yylsp[0]));
    }
#line 4277 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 229:
#line 1121 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::autoinfer);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-3]));
        (yyval.pTypeDecl)->alias = *(yyvsp[-1].s);
        delete (yyvsp[-1].s);
    }
#line 4288 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 230:
#line 1130 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pTypeDecl) = new TypeDecl((yyvsp[0].type)); (yyval.pTypeDecl)->at = tokAt((yylsp[0])); }
#line 4294 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 231:
#line 1131 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
#line 4300 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 232:
#line 1132 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pTypeDecl) = (yyvsp[0].pTypeDecl); }
#line 4306 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 233:
#line 1133 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyvsp[-3].pTypeDecl)->dim.push_back((yyvsp[-1].i));
        (yyval.pTypeDecl) = (yyvsp[-3].pTypeDecl);
    }
#line 4315 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 234:
#line 1137 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyvsp[-1].pTypeDecl)->constant = true;
        (yyvsp[-1].pTypeDecl)->removeConstant = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
#line 4325 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 235:
#line 1142 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyvsp[-2].pTypeDecl)->constant = false;
        (yyvsp[-2].pTypeDecl)->removeConstant = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
#line 4335 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 236:
#line 1147 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyvsp[-1].pTypeDecl)->ref = true;
        (yyvsp[-1].pTypeDecl)->removeRef = false;
        (yyval.pTypeDecl) = (yyvsp[-1].pTypeDecl);
    }
#line 4345 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 237:
#line 1152 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyvsp[-2].pTypeDecl)->ref = false;
        (yyvsp[-2].pTypeDecl)->removeRef = true;
        (yyval.pTypeDecl) = (yyvsp[-2].pTypeDecl);
    }
#line 4355 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 238:
#line 1157 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tPointer);
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
#line 4364 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 239:
#line 1161 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tArray);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-3]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
#line 4374 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 240:
#line 1166 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tTable);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-5]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        (yyval.pTypeDecl)->secondType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
#line 4385 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 241:
#line 1172 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt((yylsp[0]));
    }
#line 4394 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 242:
#line 1176 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-3]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
    }
#line 4404 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 243:
#line 1181 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        (yyval.pTypeDecl) = new TypeDecl(Type::tBlock);
        (yyval.pTypeDecl)->at = tokAt((yylsp[-4]));
        (yyval.pTypeDecl)->firstType = TypeDeclPtr((yyvsp[-1].pTypeDecl));
        if ( (yyvsp[-2].pVarDeclList) ) {
            for ( auto pDecl : *(yyvsp[-2].pVarDeclList) ) {
                if ( pDecl->pTypeDecl ) {
                    for ( size_t ai=0; ai!= pDecl->pNameList->size(); ++ai ) {
                        auto pVarType = make_shared<TypeDecl>(*pDecl->pTypeDecl);
                        if ( pDecl->pInit ) {
                            yyerror("can't have default values in block type declaration",
                                pDecl->at,CompilationError::cant_initialize);
                        }
                        (yyval.pTypeDecl)->argTypes.push_back(pVarType);
                    }
                }
            }
            deleteVariableDeclarationList((yyvsp[-2].pVarDeclList));
        }
    }
#line 4429 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 244:
#line 1204 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 4435 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 245:
#line 1205 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    { (yyval.pExpression) = (yyvsp[0].pExpression); }
#line 4441 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 246:
#line 1209 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto mfd = make_shared<MakeFieldDecl>(tokAt((yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)));
        delete (yyvsp[-2].s);
        auto msd = new MakeStruct();
        msd->push_back(mfd);
        (yyval.pMakeStruct) = msd;
    }
#line 4453 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 247:
#line 1216 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto mfd = make_shared<MakeFieldDecl>(tokAt((yylsp[-2])),*(yyvsp[-2].s),ExpressionPtr((yyvsp[0].pExpression)));
        delete (yyvsp[-2].s);
        ((MakeStruct *)(yyvsp[-4].pMakeStruct))->push_back(mfd);
        (yyval.pMakeStruct) = (yyvsp[-4].pMakeStruct);
    }
#line 4464 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 248:
#line 1225 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto msd = new ExprMakeStructure();
        msd->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = msd;
    }
#line 4474 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 249:
#line 1230 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        ((ExprMakeStructure *) (yyvsp[-2].pExpression))->structs.push_back(MakeStructPtr((yyvsp[0].pMakeStruct)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
#line 4483 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 250:
#line 1237 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        ((ExprMakeStructure *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
        (yyvsp[-2].pExpression)->at = tokAt((yylsp[-5]));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
#line 4493 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 251:
#line 1245 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        auto mka = new ExprMakeArray();
        mka->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = mka;
    }
#line 4503 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 252:
#line 1250 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
        ((ExprMakeArray *) (yyvsp[-2].pExpression))->values.push_back(ExpressionPtr((yyvsp[0].pExpression)));
        (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
#line 4512 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;

  case 253:
#line 1257 "src/parser/ds_parser.ypp" /* yacc.c:1660  */
    {
       ((ExprMakeArray *)(yyvsp[-2].pExpression))->makeType = TypeDeclPtr((yyvsp[-3].pTypeDecl));
       (yyvsp[-2].pExpression)->at = tokAt((yylsp[-5]));
       (yyval.pExpression) = (yyvsp[-2].pExpression);
    }
#line 4522 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
    break;


#line 4526 "/Users/borisbatkin/work/yzg/generated/ds_parser.cpp" /* yacc.c:1660  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1264 "src/parser/ds_parser.ypp" /* yacc.c:1903  */


void yyerror(const string & error, const LineInfo & at, CompilationError cerr) {
    g_Program->error(error,at,cerr);
}

void yyerror(const string & error, CompilationError cerr) {
    g_Program->error(error,LineInfo(yylloc.first_column,yylloc.first_line),cerr);
}

vector<ExpressionPtr> sequenceToList ( Expression * arguments ) {
    vector<ExpressionPtr> argList;
    auto arg = arguments;
    if ( arg->rtti_isSequence() ) {
        while ( arg->rtti_isSequence() ) {
            auto pSeq = static_cast<ExprSequence *>(arg);
            assert(!pSeq->right->rtti_isSequence());
            argList.push_back(pSeq->right);
            arg = pSeq->left.get();
        }
        argList.push_back(arg->shared_from_this());
        reverse(argList.begin(),argList.end());
        delete arguments;
    } else {
        argList.push_back(ExpressionPtr(arg));
    }
    return argList;
}

ExprLooksLikeCall * parseFunctionArguments ( ExprLooksLikeCall * pCall, Expression * arguments ) {
    pCall->arguments = sequenceToList(arguments);
    return pCall;
}

void deleteVariableDeclarationList ( vector<VariableDeclaration *> * list ) {
    if ( !list ) return;
    for ( auto pD : *list )
        delete pD;
    delete list;
}

LineInfo tokAt ( const struct YYLTYPE & li ) {
    return LineInfo(li.first_column,li.first_line);
}

Annotation * findAnnotation ( const string & name, const LineInfo & at ) {
    auto ann = g_Program->findAnnotation(name);
    if ( ann.size()==1 ) {
        return ann.back().get();
    } else if ( ann.size()==0 ) {
        yyerror("annotation " + name + " not found", at, CompilationError::annotation_not_found );
        return nullptr;
    } else {
        string candidates = g_Program->describeCandidates(ann);
        yyerror("too many options for annotation " + name + "\n" + candidates, at, CompilationError::annotation_not_found );
        return nullptr;
    }
}


