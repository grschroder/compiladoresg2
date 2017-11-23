#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley) 01/20/90";
#endif
#define YYBYACC 1
#line 2 "inicioCT.y"
	import java.io.*;
	import java.util.*;
#line 9 "y.tab.c"
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
#define PARA 279
#define MAIOR 280
#define MENOR 281
#define ABRE_PARENTESES 282
#define FECHA_PARENTESES 283
#define SE 284
#define SENAO 285
#define ENQUANTO 286
#define FACA 287
#define ATE 288
#define NUMERO 289
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    1,    1,    1,    2,    3,    4,    4,    4,    4,
    4,    5,    5,    5,    5,    5,    5,    5,    6,    6,
    6,    6,    6,    9,    9,    7,    7,    7,    7,    7,
    7,    8,    8,    8,    8,   10,   10,   10,   10,   10,
   10,   11,   11,   11,   12,   12,   12,   12,
};
short yylen[] = {                                         2,
    1,    2,    2,    0,    4,    2,    2,    2,    2,    2,
    0,    3,    6,    3,    6,    3,    6,    0,    4,    3,
    3,    3,    0,    1,    1,    3,    3,    3,    4,    4,
    0,    8,    9,    5,    0,    2,    2,    2,    2,    2,
    0,    2,    5,    0,    7,    8,    6,    0,
};
short yydefred[] = {                                      0,
    0,    0,    0,    1,    0,    0,    0,    6,    3,    2,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    5,    7,    8,    9,
   10,   24,    0,    0,    0,    0,    0,   25,    0,    0,
   22,   20,   21,    0,   12,    0,   14,    0,   16,    0,
    0,    0,    0,    0,    0,    0,    0,   36,   37,   38,
   39,   40,   19,   42,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   28,    0,   26,    0,   27,   34,    0,
    0,    0,    0,   13,   15,   17,   47,    0,   29,   30,
    0,    0,    0,   43,    0,    0,   45,    0,   32,    0,
   46,   33,
};
short yydgoto[] = {                                       3,
    4,    5,    6,   20,   21,   22,   61,   23,   67,   50,
   51,   24,
};
short yysindex[] = {                                   -247,
 -237, -234,    0,    0, -247, -247, -154,    0,    0,    0,
 -241, -227, -213, -180, -203, -193, -248, -191, -178, -167,
 -154, -154, -154, -154, -228, -162, -162, -196, -170, -142,
 -181, -229, -154, -177, -229, -154,    0,    0,    0,    0,
    0,    0, -228, -228, -228, -228, -228,    0,  -92, -175,
    0,    0,    0, -229,    0, -229,    0, -229,    0, -155,
 -165, -239, -152, -229, -159, -139, -120,    0,    0,    0,
    0,    0,    0,    0, -228, -129, -121, -119, -154, -116,
 -229, -232, -201, -265, -132,  -97, -125, -117, -131, -131,
 -131,  -96, -154,    0, -229,    0, -229,    0,    0,  -91,
 -154, -115, -120,    0,    0,    0,    0,  -89,    0,    0,
 -154,  -82, -229,    0, -265,  -73,    0,  -95,    0, -265,
    0,    0,
};
short yyrindex[] = {                                    191,
    0,    0,    0,    0,  191,  191,  -67,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -67,  -67,  -67,  -67,  -90,  -70,  -70, -138, -138, -138,
    0,  -85,  -67,    0,  -85,  -67,    0,    0,    0,    0,
    0,    0, -110, -110, -110, -110, -110,    0,  -70,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -85,    0,    0, -173,    0,    0,    0,
    0,    0,    0,    0, -215,    0,    0,    0,  -67,    0,
    0,    0,    0, -134,    0,    0,    0,    0, -138, -138,
 -138,    0,  -67,    0,    0,    0,    0,    0,    0,    0,
  -67,    0, -173,    0,    0,    0,    0,    0,    0,    0,
  -67,    0,  -85,    0, -134,    0,    0,    0,    0, -134,
    0,    0,
};
short yygindex[] = {                                      0,
   80,    0,    0,  -21,  -20,   -9,  -31,  -77,  -19,  -44,
    8,    0,
};
#define YYTABLESIZE 217
short yytable[] = {                                      38,
   39,   40,   41,   65,   74,   49,   99,   55,   57,   59,
   33,   63,   62,    1,   66,   62,   52,   53,   16,   17,
    2,    7,   74,    8,   42,   25,   81,   42,   42,   28,
   26,   27,   85,   95,   76,   34,   77,  119,   78,   73,
   82,   83,  122,   29,   62,   43,   44,   45,   46,   47,
   68,   69,   70,   71,   72,   42,   48,   92,  114,   48,
   48,   94,   96,   98,   97,   54,   41,   44,  104,  105,
  106,  108,   12,   13,   14,  109,   30,  110,   31,  112,
   36,  118,   88,   41,    9,   10,   41,   48,   32,  116,
   35,   56,   37,   62,   11,   41,   41,   41,   12,   13,
   14,   60,   11,   79,   64,   41,   75,   84,   41,   41,
   41,   41,   41,   41,   12,   13,   14,   80,   18,   58,
   87,   18,   35,   86,   15,   35,   12,   13,   14,   16,
   17,   18,   19,   89,   35,   35,   35,   12,   13,   14,
   18,   90,   93,   91,   35,   18,   18,   18,   18,   44,
  100,   35,   35,   43,   44,   45,   46,   47,   44,   44,
   44,  101,  102,  107,   11,  103,  113,  111,   44,   44,
  115,   41,   44,   44,   44,   44,   44,  117,   44,   44,
   44,   43,   44,   45,   46,   47,  120,  121,   44,   23,
    4,   41,   11,   44,   44,   44,   44,   31,   23,   23,
   23,    0,    0,    0,    0,    0,    0,    0,   23,    0,
    0,    0,    0,   23,   23,   23,   23,
};
short yycheck[] = {                                      21,
   22,   23,   24,   35,   49,   25,   84,   28,   29,   30,
  259,   33,   32,  261,   36,   35,   26,   27,  284,  285,
  268,  259,   67,  258,  257,  267,  266,  257,  257,  257,
  272,  273,   64,  266,   54,  284,   56,  115,   58,   49,
  280,  281,  120,  257,   64,  274,  275,  276,  277,  278,
   43,   44,   45,   46,   47,  257,  289,   79,  103,  289,
  289,   81,   82,   83,  266,  262,  282,  283,   89,   90,
   91,   93,  269,  270,  271,   95,  257,   97,  282,  101,
  259,  113,   75,  257,    5,    6,  260,  289,  282,  111,
  282,  262,  260,  113,  257,  269,  270,  271,  269,  270,
  271,  283,  257,  259,  282,  279,  282,  260,  282,  283,
  284,  285,  286,  287,  269,  270,  271,  283,  257,  262,
  260,  260,  257,  283,  279,  260,  269,  270,  271,  284,
  285,  286,  287,  263,  269,  270,  271,  269,  270,  271,
  279,  263,  259,  263,  279,  284,  285,  286,  287,  260,
  283,  286,  287,  274,  275,  276,  277,  278,  269,  270,
  271,  259,  288,  260,  257,  283,  282,  259,  279,  260,
  260,  282,  283,  284,  285,  286,  287,  260,  269,  270,
  271,  274,  275,  276,  277,  278,  260,  283,  279,  260,
    0,  282,  260,  284,  285,  286,  287,  283,  269,  270,
  271,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  279,   -1,
   -1,   -1,   -1,  284,  285,  286,  287,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 289
#if YYDEBUG
char *yyname[] = {
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
"MAIS","MENOS","MULTIPLICADO","DIVIDIDO","RESTO","PARA","MAIOR","MENOR",
"ABRE_PARENTESES","FECHA_PARENTESES","SE","SENAO","ENQUANTO","FACA","ATE",
"NUMERO",
};
char *yyrule[] = {
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
"condicionais :",
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
"lacos : PARA ABRE_PARENTESES FECHA_PARENTESES ABRE_CHAVES comandos FECHA_CHAVES",
"lacos :",
};
#endif
#define yyclearin (yychar=(-1))
#define yyerrok (yyerrflag=0)
#ifdef YYSTACKSIZE
#ifndef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#endif
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH 500
#endif
#endif
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short yyss[YYSTACKSIZE];
YYSTYPE yyvs[YYSTACKSIZE];
#define yystacksize YYSTACKSIZE
#line 116 "inicioCT.y"

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
#line 293 "y.tab.c"
#define YYABORT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse()
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register char *yys;
    extern char *getenv();

    if (yys = getenv("YYDEBUG"))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if (yyn = yydefred[yystate]) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("yydebug: state %d, reading %d (%s)\n", yystate,
                    yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("yydebug: state %d, shifting to state %d (%s)\n",
                    yystate, yytable[yyn],yyrule[yyn]);
#endif
        if (yyssp >= yyss + yystacksize - 1)
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
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
#ifdef lint
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#ifdef lint
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("yydebug: state %d, error recovery shifting\
 to state %d\n", *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yyss + yystacksize - 1)
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("yydebug: error recovery discarding state %d\n",
                            *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("yydebug: state %d, error recovery discards token %d (%s)\n",
                    yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("yydebug: state %d, reducing by rule %d (%s)\n",
                yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 1:
#line 53 "inicioCT.y"
{ System.out.println(yyvsp[0].sval); }
break;
case 2:
#line 55 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + "\n" + yyvsp[0].sval; }
break;
case 3:
#line 56 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + "\n" + yyvsp[0].sval; }
break;
case 4:
#line 57 "inicioCT.y"
{ yyval.sval = ""; }
break;
case 5:
#line 59 "inicioCT.y"
{ yyval.sval = "int main() {\n " + yyvsp[-1].sval + "}\n"; }
break;
case 6:
#line 61 "inicioCT.y"
{ yyval.sval = "#include " + yyvsp[0].sval; }
break;
case 7:
#line 63 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 8:
#line 64 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 9:
#line 65 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 10:
#line 66 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 11:
#line 67 "inicioCT.y"
{ yyval.sval = ""; }
break;
case 12:
#line 69 "inicioCT.y"
{  yyval.sval = " int " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 13:
#line 70 "inicioCT.y"
{  yyval.sval = " int " + yyvsp[-4].sval + "[" + yyvsp[-2].sval + "]" + ";\n" + yyvsp[0].sval; }
break;
case 14:
#line 71 "inicioCT.y"
{  yyval.sval = " float " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 15:
#line 72 "inicioCT.y"
{  yyval.sval = " real " + yyvsp[-4].sval + "[" + yyvsp[-2].sval + "]" + ";\n" + yyvsp[0].sval; }
break;
case 16:
#line 73 "inicioCT.y"
{  yyval.sval = " char " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 17:
#line 74 "inicioCT.y"
{  yyval.sval = " char " + yyvsp[-4].sval + "[" + yyvsp[-2].sval + "]" + ";\n" + yyvsp[0].sval; }
break;
case 18:
#line 75 "inicioCT.y"
{yyval.sval = ""; }
break;
case 19:
#line 77 "inicioCT.y"
{  yyval.sval = " " + yyvsp[-3].sval + " = " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 20:
#line 78 "inicioCT.y"
{  yyval.sval = " " + yyvsp[-2].sval + "++" + ";\n" + yyvsp[0].sval; }
break;
case 21:
#line 79 "inicioCT.y"
{  yyval.sval = " " + yyvsp[-2].sval + "--" + ";\n" + yyvsp[0].sval; }
break;
case 22:
#line 80 "inicioCT.y"
{  yyval.sval = yyvsp[-2].sval + "=" + yyvsp[0].sval + ";\n"; }
break;
case 23:
#line 82 "inicioCT.y"
{yyval.sval = ""; }
break;
case 24:
#line 84 "inicioCT.y"
{yyval.sval = yyvsp[0].sval;}
break;
case 25:
#line 85 "inicioCT.y"
{yyval.sval = yyvsp[0].sval;}
break;
case 26:
#line 87 "inicioCT.y"
{ yyval.sval = yyvsp[-2].sval + " > " + yyvsp[0].sval; }
break;
case 27:
#line 88 "inicioCT.y"
{ yyval.sval = yyvsp[-2].sval + " < " + yyvsp[0].sval; }
break;
case 28:
#line 89 "inicioCT.y"
{ yyval.sval = yyvsp[-2].sval + " == " + yyvsp[0].sval; }
break;
case 29:
#line 90 "inicioCT.y"
{ yyval.sval = yyvsp[-3].sval + " >" + "= " + yyvsp[0].sval; }
break;
case 30:
#line 91 "inicioCT.y"
{ yyval.sval = yyvsp[-3].sval + " <" + "= " + yyvsp[0].sval; }
break;
case 31:
#line 92 "inicioCT.y"
{yyval.sval = ""; }
break;
case 32:
#line 94 "inicioCT.y"
{ yyval.sval = " if " + "(" + yyvsp[-5].sval + ")" + "{\n" + yyvsp[-2].sval + " }\n" + yyvsp[0].sval; }
break;
case 33:
#line 95 "inicioCT.y"
{ yyval.sval = " else" + "if" + "(" + yyvsp[-5].sval + ")" + "{\n" + yyvsp[-2].sval + " }\n" + yyvsp[0].sval; }
break;
case 34:
#line 96 "inicioCT.y"
{ yyval.sval = " else" + "{\n" + yyvsp[-2].sval + "}\n" + yyvsp[0].sval; }
break;
case 35:
#line 97 "inicioCT.y"
{yyval.sval = ""; }
break;
case 36:
#line 99 "inicioCT.y"
{ yyval.sval = "+" + yyvsp[0].sval; }
break;
case 37:
#line 100 "inicioCT.y"
{ yyval.sval = "-" + yyvsp[0].sval; }
break;
case 38:
#line 101 "inicioCT.y"
{ yyval.sval = "*" + yyvsp[0].sval; }
break;
case 39:
#line 102 "inicioCT.y"
{ yyval.sval = "/" + yyvsp[0].sval; }
break;
case 40:
#line 103 "inicioCT.y"
{ yyval.sval = "%" + yyvsp[0].sval; }
break;
case 41:
#line 104 "inicioCT.y"
{yyval.sval = ""; }
break;
case 42:
#line 106 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 43:
#line 107 "inicioCT.y"
{ yyval.sval = "(" + yyvsp[-2].sval + ")" + yyvsp[0].sval; }
break;
case 44:
#line 108 "inicioCT.y"
{yyval.sval = ""; }
break;
case 45:
#line 110 "inicioCT.y"
{yyval.sval = "while " + "(" + yyvsp[-4].sval + ")" + "{\n " + yyvsp[-1].sval + "}\n"; }
break;
case 46:
#line 111 "inicioCT.y"
{ yyval.sval = "do" + "{\n " + yyvsp[-5].sval + "}" + " while" + "(" + yyvsp[-1].sval + ")\n"; }
break;
case 47:
#line 112 "inicioCT.y"
{ yyval.sval = "for" + "(" + ")" + "{" + yyvsp[-1].sval + "}"; }
break;
case 48:
#line 113 "inicioCT.y"
{yyval.sval = ""; }
break;
#line 625 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("yydebug: after reduction, shifting from state 0 to\
 state %d\n", YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("yydebug: state %d, reading %d (%s)\n",
                        YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("yydebug: after reduction, shifting from state %d \
to state %d\n", *yyssp, yystate);
#endif
    if (yyssp >= yyss + yystacksize - 1)
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
