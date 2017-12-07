/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "inicioCT.y"
	import java.io.*;
	import java.util.*;
#line 24 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define IDENTIFICADOR 257
#define INCLUSAO_ARQUIVO 258
#define ABRE_CHAVES 259
#define FECHA_CHAVES 260
#define FUNCAO_PRINCIPAL 261
#define ABRE_COLCHETES 262
#define FECHA_COLCHETES 263
#define DOIS_PONTOS 264
#define PONTO_VIRGULA 265
#define IGUAL 266
#define ATRIBUIR 267
#define INCLUIR 268
#define INTEIRO 269
#define REAL 270
#define CARACTER 271
#define INCREMENTO 272
#define DECREMENTO 273
#define MAIS 274
#define MENOS 275
#define MULTIPLICADO 276
#define DIVIDIDO 277
#define RESTO 278
#define MAIOR 279
#define MENOR 280
#define ABRE_PARENTESES 281
#define FECHA_PARENTESES 282
#define SE 283
#define SENAO 284
#define ENQUANTO 285
#define FACA 286
#define ATE 287
#define PARA 288
#define CASO 289
#define OPCAO 290
#define FIM_OPCAO 291
#define ASPAS_SIMPLES 292
#define CARACTER_ENTRE_ASPAS 293
#define NUMERO 294
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    2,    3,    4,    4,    4,    4,
    4,    5,    5,    5,    5,    5,    5,    5,    6,    6,
    6,    6,    6,    9,    9,    7,    7,    7,    7,    7,
    7,    8,    8,    8,    8,    8,   14,   14,   14,   10,
   10,   10,   10,   10,   10,   11,   11,   11,   12,   12,
   12,   12,   13,   13,
};
static const YYINT yylen[] = {                            2,
    1,    2,    2,    0,    4,    2,    2,    2,    2,    2,
    0,    3,    6,    3,    6,    3,    6,    0,    4,    3,
    3,    3,    0,    1,    1,    3,    3,    3,    4,    4,
    0,    8,    9,    5,    7,    0,    6,    6,    0,    2,
    2,    2,    2,    2,    0,    2,    5,    0,    7,    8,
    7,    0,    5,    0,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    1,    0,    0,    0,    6,    3,    2,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    5,    7,
    8,    9,   10,   24,    0,    0,    0,    0,    0,   25,
    0,    0,   22,   20,   21,    0,   12,    0,   14,    0,
   16,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   40,   41,   42,   43,   44,   19,   46,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   28,    0,
   26,    0,   27,   34,    0,    0,    0,    0,    0,    0,
    0,   13,   15,   17,    0,   29,   30,    0,    0,    0,
    0,    0,    0,    0,   47,    0,    0,   49,    0,   53,
   51,    0,    0,   35,   32,    0,   50,    0,    0,   33,
    0,    0,    0,    0,   38,   37,
};
static const YYINT yydgoto[] = {                          3,
    4,    5,    6,   21,   22,   23,   62,   24,   71,   52,
   53,   25,   69,  124,
};
static const YYINT yysindex[] = {                      -189,
 -229, -225,    0,    0, -189, -189, -126,    0,    0,    0,
 -250, -222, -214, -198, -219, -246, -200, -171, -186, -178,
 -155, -126, -126, -126, -126, -226, -145, -145, -160,  -75,
  -72, -241, -126, -157, -241, -126, -130, -123,    0,    0,
    0,    0,    0,    0, -226, -226, -226, -226, -226,    0,
 -124, -135,    0,    0,    0, -241,    0, -241,    0, -241,
    0, -134, -238, -113, -241, -133, -104, -106, -115, -114,
 -103,    0,    0,    0,    0,    0,    0,    0, -226,  -94,
  -74,  -63,  -71, -241, -248, -247, -206,  -97,  -58,  -85,
 -241,  -55,  -47,  -68, -196, -196, -196, -126,    0, -241,
    0, -241,    0,    0,  -43, -126,  -66,  -48, -126,  -69,
 -103,    0,    0,    0,  -38,    0,    0, -126,  -37, -241,
 -130,  -36, -273,  -35,    0, -206,  -34,    0,  -54,    0,
    0,  -33,  -28,    0,    0, -206,    0, -126, -126,    0,
  -64,  -62,  -69,  -69,    0,    0,
};
static const YYINT yyrindex[] = {                       230,
    0,    0,    0,    0,  230,  230,  -21,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -252, -252, -252, -252,  -78,  -51,  -51, -228, -228,
 -228,  -41,  -21,    0,  -41,  -21,  -40,    0,    0,    0,
    0,    0,    0,    0, -105, -105, -105, -105, -105,    0,
  -51,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -41,    0,    0,    0,    0,    0,
 -163,    0,    0,    0,    0,    0,    0,    0, -183,    0,
    0,    0,    0,    0,    0,    0, -156,    0,    0,    0,
    0,    0,    0,    0, -228, -228, -228,  -21,    0,    0,
    0,    0,    0,    0,    0,  -21,    0,    0,  -21, -155,
 -163,    0,    0,    0,    0,    0,    0,  -21,    0,  -41,
  -40,    0,    0,    0,    0, -156,    0,    0,    0,    0,
    0,    0,    0,    0,    0, -156,    0,  -46,  -46,    0,
    0,    0, -155, -155,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   80,    0,    0,  -22,   -5,   42,  -31,  -82,  -20,  -44,
   91,    0,  122,   -2,
};
#define YYTABLESIZE 245
static const YYINT yytable[] = {                         40,
   41,   42,   43,   66,  104,   51,   78,   11,   44,   44,
   64,   63,   33,   67,   63,   44,   26,  100,  102,  132,
  133,   27,   28,   57,   59,   61,   78,   84,   18,    7,
   44,   18,    8,   88,   29,   80,   34,   81,   11,   82,
   85,   86,   30,  135,   63,   50,   50,   45,   46,   47,
   48,   49,   50,  140,   18,   18,   18,   18,   31,   18,
   18,   32,   18,   99,  101,  103,  125,   50,   54,   55,
  108,    1,   12,   13,   14,  115,   15,   16,    2,  116,
   35,  117,   20,  119,    9,   10,  122,   36,  129,  112,
  113,  114,   77,   45,   37,  127,   45,   45,   48,   63,
   36,   56,   38,   36,   39,   45,   45,   45,   12,   13,
   14,   11,   36,   36,   36,  141,  142,   45,   45,   45,
   45,   45,   45,   65,   45,   45,   68,   45,   36,   36,
   11,   36,   11,   70,   36,   72,   73,   74,   75,   76,
  145,  146,   12,   13,   14,   79,   87,   83,   89,   45,
   46,   47,   48,   49,   48,   90,   15,   16,   17,   18,
   91,   19,   20,   48,   48,   48,   92,   93,   95,   94,
   45,   46,   47,   48,   49,   45,   48,   48,   48,   48,
   48,   48,   48,   48,  105,   48,   58,   98,   96,   60,
   48,   48,   48,   12,   13,   14,   12,   13,   14,   97,
  106,  107,   45,  109,   48,   48,   48,   48,   23,   48,
   48,  110,   48,  111,  120,  118,  121,   23,   23,   23,
  123,  126,  128,  131,  134,  136,  143,  137,  144,    4,
  138,   23,   23,   23,   23,  139,   23,   23,   11,   23,
   31,   54,  130,    0,   11,
};
static const YYINT yycheck[] = {                         22,
   23,   24,   25,   35,   87,   26,   51,  260,  257,  257,
   33,   32,  259,   36,   35,  257,  267,  266,  266,  293,
  294,  272,  273,   29,   30,   31,   71,  266,  257,  259,
  257,  260,  258,   65,  257,   56,  283,   58,  291,   60,
  279,  280,  257,  126,   65,  294,  294,  274,  275,  276,
  277,  278,  294,  136,  283,  284,  285,  286,  257,  288,
  289,  281,  291,   84,   85,   86,  111,  294,   27,   28,
   91,  261,  269,  270,  271,   98,  283,  284,  268,  100,
  281,  102,  289,  106,    5,    6,  109,  259,  120,   95,
   96,   97,   51,  257,  281,  118,  260,  281,  282,  120,
  257,  262,  281,  260,  260,  269,  270,  271,  269,  270,
  271,  257,  269,  270,  271,  138,  139,  281,  282,  283,
  284,  285,  286,  281,  288,  289,  257,  291,  285,  286,
  257,  288,  257,  257,  291,   45,   46,   47,   48,   49,
  143,  144,  269,  270,  271,  281,  260,  282,  282,  274,
  275,  276,  277,  278,  260,  260,  283,  284,  285,  286,
  267,  288,  289,  269,  270,  271,  282,  282,  263,   79,
  274,  275,  276,  277,  278,  281,  282,  283,  284,  285,
  286,  260,  288,  289,  282,  291,  262,  259,  263,  262,
  269,  270,  271,  269,  270,  271,  269,  270,  271,  263,
  259,  287,  281,  259,  283,  284,  285,  286,  260,  288,
  289,  259,  291,  282,  281,  259,  265,  269,  270,  271,
  290,  260,  260,  260,  260,  260,  291,  282,  291,    0,
  264,  283,  284,  285,  286,  264,  288,  289,  260,  291,
  282,  282,  121,   -1,  291,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 294
#define YYUNDFTOKEN 311
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"IDENTIFICADOR",
"INCLUSAO_ARQUIVO","ABRE_CHAVES","FECHA_CHAVES","FUNCAO_PRINCIPAL",
"ABRE_COLCHETES","FECHA_COLCHETES","DOIS_PONTOS","PONTO_VIRGULA","IGUAL",
"ATRIBUIR","INCLUIR","INTEIRO","REAL","CARACTER","INCREMENTO","DECREMENTO",
"MAIS","MENOS","MULTIPLICADO","DIVIDIDO","RESTO","MAIOR","MENOR",
"ABRE_PARENTESES","FECHA_PARENTESES","SE","SENAO","ENQUANTO","FACA","ATE",
"PARA","CASO","OPCAO","FIM_OPCAO","ASPAS_SIMPLES","CARACTER_ENTRE_ASPAS",
"NUMERO",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : inicio",
"inicio : programa",
"programa : inclusao programa",
"programa : funcao_principal programa",
"programa :",
"funcao_principal : FUNCAO_PRINCIPAL ABRE_CHAVES comandos FECHA_CHAVES",
"inclusao : INCLUIR INCLUSAO_ARQUIVO",
"comandos : declaracao comandos",
"comandos : atribuicao comandos",
"comandos : condicionais comandos",
"comandos : lacos comandos",
"comandos :",
"declaracao : INTEIRO IDENTIFICADOR declaracao",
"declaracao : INTEIRO IDENTIFICADOR ABRE_COLCHETES tipo FECHA_COLCHETES declaracao",
"declaracao : REAL IDENTIFICADOR declaracao",
"declaracao : REAL IDENTIFICADOR ABRE_COLCHETES tipo FECHA_COLCHETES declaracao",
"declaracao : CARACTER IDENTIFICADOR declaracao",
"declaracao : CARACTER IDENTIFICADOR ABRE_COLCHETES tipo FECHA_COLCHETES declaracao",
"declaracao :",
"atribuicao : IDENTIFICADOR ATRIBUIR tipo atribuicao",
"atribuicao : IDENTIFICADOR INCREMENTO atribuicao",
"atribuicao : IDENTIFICADOR DECREMENTO atribuicao",
"atribuicao : IDENTIFICADOR ATRIBUIR expressao",
"atribuicao :",
"tipo : IDENTIFICADOR",
"tipo : NUMERO",
"condicao : tipo MAIOR tipo",
"condicao : tipo MENOR tipo",
"condicao : tipo IGUAL tipo",
"condicao : tipo MAIOR IGUAL tipo",
"condicao : tipo MENOR IGUAL tipo",
"condicao :",
"condicionais : SE ABRE_PARENTESES condicao FECHA_PARENTESES ABRE_CHAVES comandos FECHA_CHAVES condicionais",
"condicionais : SENAO SE ABRE_PARENTESES condicao FECHA_PARENTESES ABRE_CHAVES comandos FECHA_CHAVES condicionais",
"condicionais : SENAO ABRE_CHAVES comandos FECHA_CHAVES condicionais",
"condicionais : CASO ABRE_PARENTESES IDENTIFICADOR FECHA_PARENTESES ABRE_CHAVES opcoes FECHA_CHAVES",
"condicionais :",
"opcoes : OPCAO NUMERO DOIS_PONTOS comandos FIM_OPCAO opcoes",
"opcoes : OPCAO CARACTER_ENTRE_ASPAS DOIS_PONTOS comandos FIM_OPCAO opcoes",
"opcoes :",
"operacoes : MAIS expressao",
"operacoes : MENOS expressao",
"operacoes : MULTIPLICADO expressao",
"operacoes : DIVIDIDO expressao",
"operacoes : RESTO expressao",
"operacoes :",
"expressao : tipo operacoes",
"expressao : operacoes ABRE_PARENTESES expressao FECHA_PARENTESES operacoes",
"expressao :",
"lacos : ENQUANTO ABRE_PARENTESES condicao FECHA_PARENTESES ABRE_CHAVES comandos FECHA_CHAVES",
"lacos : FACA ABRE_CHAVES comandos FECHA_CHAVES ATE ABRE_PARENTESES condicao FECHA_PARENTESES",
"lacos : PARA ABRE_PARENTESES atribuicao_for FECHA_PARENTESES ABRE_CHAVES comandos FECHA_CHAVES",
"lacos :",
"atribuicao_for : IDENTIFICADOR ATRIBUIR tipo PONTO_VIRGULA atribuicao_for",
"atribuicao_for :",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 134 "inicioCT.y"

	// Referencia ao JFlex
	private Yylex lexer;

	/* Interface com o JFlex */
	private int yylex(){
		int yyl_return = -1;
		try {
			yyl_return = lexer.yylex();
		} catch (IOException e) {
			System.err.println("Erro de IO: " + e);
		}
		return yyl_return;
	}

	/* Reporte de erro */
	public void yyerror(String error){
		System.err.println("Error: " + error);
	}

	// Interface com o JFlex eh criado no construtor
	public Parser(Reader r){
		lexer = new Yylex(r, this);
	}

	// Main
	public static void main(String[] args){
		try{ 
			Parser yyparser = new Parser(new FileReader(args[0]));
			yyparser.yyparse();
			} catch (IOException ex) {
				System.err.println("Error: " + ex);
			}
	}
#line 380 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 60 "inicioCT.y"
	{ System.out.println(yystack.l_mark[0].sval); }
break;
case 2:
#line 62 "inicioCT.y"
	{ yyval.sval = yystack.l_mark[-1].sval + "\n" + yystack.l_mark[0].sval; }
break;
case 3:
#line 63 "inicioCT.y"
	{ yyval.sval = yystack.l_mark[-1].sval + "\n" + yystack.l_mark[0].sval; }
break;
case 4:
#line 64 "inicioCT.y"
	{ yyval.sval = ""; }
break;
case 5:
#line 66 "inicioCT.y"
	{ yyval.sval = "int main() {\n " + yystack.l_mark[-1].sval + "}\n"; }
break;
case 6:
#line 68 "inicioCT.y"
	{ yyval.sval = "#include " + yystack.l_mark[0].sval; }
break;
case 7:
#line 70 "inicioCT.y"
	{ yyval.sval = yystack.l_mark[-1].sval + yystack.l_mark[0].sval; }
break;
case 8:
#line 71 "inicioCT.y"
	{ yyval.sval = yystack.l_mark[-1].sval + yystack.l_mark[0].sval; }
break;
case 9:
#line 72 "inicioCT.y"
	{ yyval.sval = yystack.l_mark[-1].sval + yystack.l_mark[0].sval; }
break;
case 10:
#line 73 "inicioCT.y"
	{ yyval.sval = yystack.l_mark[-1].sval + yystack.l_mark[0].sval; }
break;
case 11:
#line 74 "inicioCT.y"
	{ yyval.sval = ""; }
break;
case 12:
#line 76 "inicioCT.y"
	{  yyval.sval = " int " + yystack.l_mark[-1].sval + ";\n" + yystack.l_mark[0].sval; }
break;
case 13:
#line 77 "inicioCT.y"
	{  yyval.sval = " int " + yystack.l_mark[-4].sval + "[" + yystack.l_mark[-2].sval + "]" + ";\n" + yystack.l_mark[0].sval; }
break;
case 14:
#line 78 "inicioCT.y"
	{  yyval.sval = " float " + yystack.l_mark[-1].sval + ";\n" + yystack.l_mark[0].sval; }
break;
case 15:
#line 79 "inicioCT.y"
	{  yyval.sval = " real " + yystack.l_mark[-4].sval + "[" + yystack.l_mark[-2].sval + "]" + ";\n" + yystack.l_mark[0].sval; }
break;
case 16:
#line 80 "inicioCT.y"
	{  yyval.sval = " char " + yystack.l_mark[-1].sval + ";\n" + yystack.l_mark[0].sval; }
break;
case 17:
#line 81 "inicioCT.y"
	{  yyval.sval = " char " + yystack.l_mark[-4].sval + "[" + yystack.l_mark[-2].sval + "]" + ";\n" + yystack.l_mark[0].sval; }
break;
case 18:
#line 82 "inicioCT.y"
	{yyval.sval = ""; }
break;
case 19:
#line 84 "inicioCT.y"
	{  yyval.sval = " " + yystack.l_mark[-3].sval + " = " + yystack.l_mark[-1].sval + ";\n" + yystack.l_mark[0].sval; }
break;
case 20:
#line 85 "inicioCT.y"
	{  yyval.sval = " " + yystack.l_mark[-2].sval + "++" + ";\n" + yystack.l_mark[0].sval; }
break;
case 21:
#line 86 "inicioCT.y"
	{  yyval.sval = " " + yystack.l_mark[-2].sval + "--" + ";\n" + yystack.l_mark[0].sval; }
break;
case 22:
#line 88 "inicioCT.y"
	{  yyval.sval = yystack.l_mark[-2].sval + "=" + yystack.l_mark[0].sval + ";\n"; }
break;
case 23:
#line 90 "inicioCT.y"
	{yyval.sval = ""; }
break;
case 24:
#line 92 "inicioCT.y"
	{yyval.sval = yystack.l_mark[0].sval;}
break;
case 25:
#line 93 "inicioCT.y"
	{yyval.sval = yystack.l_mark[0].sval;}
break;
case 26:
#line 95 "inicioCT.y"
	{ yyval.sval = yystack.l_mark[-2].sval + " > " + yystack.l_mark[0].sval; }
break;
case 27:
#line 96 "inicioCT.y"
	{ yyval.sval = yystack.l_mark[-2].sval + " < " + yystack.l_mark[0].sval; }
break;
case 28:
#line 97 "inicioCT.y"
	{ yyval.sval = yystack.l_mark[-2].sval + " == " + yystack.l_mark[0].sval; }
break;
case 29:
#line 98 "inicioCT.y"
	{ yyval.sval = yystack.l_mark[-3].sval + " >" + "= " + yystack.l_mark[0].sval; }
break;
case 30:
#line 99 "inicioCT.y"
	{ yyval.sval = yystack.l_mark[-3].sval + " <" + "= " + yystack.l_mark[0].sval; }
break;
case 31:
#line 100 "inicioCT.y"
	{yyval.sval = ""; }
break;
case 32:
#line 103 "inicioCT.y"
	{ yyval.sval = " if " + "(" + yystack.l_mark[-5].sval + ")" + "{\n" + yystack.l_mark[-2].sval + " }\n" + yystack.l_mark[0].sval; }
break;
case 33:
#line 104 "inicioCT.y"
	{ yyval.sval = " else" + "if" + "(" + yystack.l_mark[-5].sval + ")" + "{\n" + yystack.l_mark[-2].sval + " }\n" + yystack.l_mark[0].sval; }
break;
case 34:
#line 105 "inicioCT.y"
	{ yyval.sval = " else" + "{\n" + yystack.l_mark[-2].sval + "}\n" + yystack.l_mark[0].sval; }
break;
case 35:
#line 106 "inicioCT.y"
	{ yyval.sval = "switch" + "(" + yystack.l_mark[-4].sval + ")" + "{\n" + yystack.l_mark[-1].sval + "}\n"; }
break;
case 36:
#line 107 "inicioCT.y"
	{yyval.sval = ""; }
break;
case 37:
#line 109 "inicioCT.y"
	{ yyval.sval = "case " + yystack.l_mark[-4].sval + ":\n" + yystack.l_mark[-2].sval + " break;\n" + yystack.l_mark[0].sval; }
break;
case 38:
#line 110 "inicioCT.y"
	{ yyval.sval = "case " + yystack.l_mark[-4].sval + ":\n" + yystack.l_mark[-2].sval + " break;\n" + yystack.l_mark[0].sval; }
break;
case 39:
#line 111 "inicioCT.y"
	{yyval.sval = ""; }
break;
case 40:
#line 113 "inicioCT.y"
	{ yyval.sval = "+" + yystack.l_mark[0].sval; }
break;
case 41:
#line 114 "inicioCT.y"
	{ yyval.sval = "-" + yystack.l_mark[0].sval; }
break;
case 42:
#line 115 "inicioCT.y"
	{ yyval.sval = "*" + yystack.l_mark[0].sval; }
break;
case 43:
#line 116 "inicioCT.y"
	{ yyval.sval = "/" + yystack.l_mark[0].sval; }
break;
case 44:
#line 117 "inicioCT.y"
	{ yyval.sval = "%" + yystack.l_mark[0].sval; }
break;
case 45:
#line 118 "inicioCT.y"
	{yyval.sval = ""; }
break;
case 46:
#line 120 "inicioCT.y"
	{ yyval.sval = yystack.l_mark[-1].sval + yystack.l_mark[0].sval; }
break;
case 47:
#line 121 "inicioCT.y"
	{ yyval.sval = "(" + yystack.l_mark[-2].sval + ")" + yystack.l_mark[0].sval; }
break;
case 48:
#line 122 "inicioCT.y"
	{yyval.sval = ""; }
break;
case 49:
#line 124 "inicioCT.y"
	{yyval.sval = "while " + "(" + yystack.l_mark[-4].sval + ")" + "{\n " + yystack.l_mark[-1].sval + "}\n"; }
break;
case 50:
#line 125 "inicioCT.y"
	{ yyval.sval = "do" + "{\n " + yystack.l_mark[-5].sval + "}" + " while" + "(" + yystack.l_mark[-1].sval + ")\n"; }
break;
case 51:
#line 126 "inicioCT.y"
	{ yyval.sval = "for" + "(" + yystack.l_mark[-4].sval + ")" + "{" + yystack.l_mark[-1].sval + "}\n"; }
break;
case 52:
#line 127 "inicioCT.y"
	{yyval.sval = ""; }
break;
case 53:
#line 129 "inicioCT.y"
	{  yyval.sval = " " + yystack.l_mark[-4].sval + " = " + yystack.l_mark[-2].sval + ";" + yystack.l_mark[0].sval; }
break;
case 54:
#line 130 "inicioCT.y"
	{yyval.sval = ""; }
break;
#line 798 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
