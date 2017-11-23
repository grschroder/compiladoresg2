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
   10,   11,   11,   11,   12,   12,
};
short yylen[] = {                                         2,
    1,    2,    2,    0,    4,    2,    2,    2,    2,    2,
    0,    3,    6,    3,    6,    3,    6,    0,    4,    3,
    3,    3,    0,    1,    1,    3,    3,    3,    4,    4,
    0,    8,    9,    5,    0,    2,    2,    2,    2,    2,
    0,    2,    5,    0,    7,    8,
};
short yydefred[] = {                                      0,
    0,    0,    0,    1,    0,    0,    0,    6,    3,    2,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    5,    7,    8,    9,   10,   24,
    0,    0,    0,    0,    0,   25,    0,    0,   22,   20,
   21,    0,   12,    0,   14,    0,   16,    0,    0,    0,
    0,    0,    0,    0,   36,   37,   38,   39,   40,   19,
   42,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   28,    0,
   26,    0,   27,   34,    0,    0,    0,    0,   13,   15,
   17,    0,   29,   30,    0,    0,    0,   43,    0,    0,
   45,    0,   32,    0,   46,   33,
};
short yydgoto[] = {                                       3,
    4,    5,    6,   19,   20,   21,   58,   22,   64,   48,
   49,   23,
};
short yysindex[] = {                                   -212,
 -215, -225,    0,    0, -212, -212, -170,    0,    0,    0,
 -138, -207, -190, -184, -198, -249, -194, -182, -185, -170,
 -170, -170, -170, -248, -163, -163, -205, -200, -130, -244,
 -170, -154, -244, -170,    0,    0,    0,    0,    0,    0,
 -248, -248, -248, -248, -248,    0, -152, -151,    0,    0,
    0, -244,    0, -244,    0, -244,    0, -153, -261, -162,
 -244, -119,  -87, -106,    0,    0,    0,    0,    0,    0,
    0, -248,  -89,  -88,  -86,  -83, -244, -241, -226, -238,
 -105,  -80, -103,  -99, -108, -108, -108, -170,    0, -244,
    0, -244,    0,    0,  -73, -170,  -95, -106,    0,    0,
    0,  -71,    0,    0, -170,  -70, -244,    0, -238,  -69,
    0,  -91,    0, -238,    0,    0,
};
short yyrindex[] = {                                    188,
    0,    0,    0,    0,  188,  188,  -67,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -67,
  -67,  -67,  -67, -127, -104, -104, -139, -139, -139,  -85,
  -67,    0,  -85,  -67,    0,    0,    0,    0,    0,    0,
 -133, -133, -133, -133, -133,    0, -104,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -85,    0,    0, -174,    0,    0,    0,    0,    0,    0,
    0, -191,    0,    0,    0,    0,    0,    0,    0, -167,
    0,    0,    0,    0, -139, -139, -139,  -67,    0,    0,
    0,    0,    0,    0,    0,  -67,    0, -174,    0,    0,
    0,    0,    0,    0,  -67,    0,  -85,    0, -167,    0,
    0,    0,    0, -167,    0,    0,
};
short yygindex[] = {                                      0,
  101,    0,    0,  -20,   -6,   -8,  -29,  -72,  -18,  -40,
   10,    0,
};
#define YYTABLESIZE 198
short yytable[] = {                                      36,
   37,   38,   39,   62,   77,   47,   71,   94,   40,   31,
   60,   59,   40,   63,   59,   40,   50,   51,   78,   79,
   53,   55,   57,   71,   90,   41,   42,   43,   44,   45,
   40,   81,    8,   73,   32,   74,  113,   75,   70,   92,
   46,  116,   59,    7,   46,   15,   16,   46,    1,   27,
   65,   66,   67,   68,   69,    2,   52,  108,   89,   91,
   93,   54,   46,   12,   13,   14,   28,  102,   12,   13,
   14,  103,   29,  104,   35,  106,   34,  112,   99,  100,
  101,   84,   41,   30,  110,   41,   11,   33,   59,   35,
   41,   44,   35,   11,   41,   41,   41,   80,   12,   13,
   14,   35,   35,   35,   11,    9,   10,   41,   41,   41,
   41,   41,   41,   15,   16,   17,   18,   18,   35,   35,
   18,   41,   42,   43,   44,   45,   44,   61,   24,   76,
   72,   56,   44,   25,   26,   44,   44,   44,   12,   13,
   14,   44,   44,   44,   18,   18,   18,   18,   41,   44,
   44,   44,   44,   44,   41,   23,   44,   44,   44,   44,
   12,   13,   14,   82,   23,   23,   23,   41,   42,   43,
   44,   45,   83,   85,   86,   88,   87,   95,   96,   23,
   23,   23,   23,   98,   97,  105,  107,    4,  109,  111,
  114,  115,   11,    0,    0,    0,    0,   31,
};
short yycheck[] = {                                      20,
   21,   22,   23,   33,  266,   24,   47,   80,  257,  259,
   31,   30,  257,   34,   33,  257,   25,   26,  280,  281,
   27,   28,   29,   64,  266,  274,  275,  276,  277,  278,
  257,   61,  258,   52,  284,   54,  109,   56,   47,  266,
  289,  114,   61,  259,  289,  284,  285,  289,  261,  257,
   41,   42,   43,   44,   45,  268,  262,   98,   77,   78,
   79,  262,  289,  269,  270,  271,  257,   88,  269,  270,
  271,   90,  257,   92,  260,   96,  259,  107,   85,   86,
   87,   72,  257,  282,  105,  260,  257,  282,  107,  257,
  282,  283,  260,  257,  269,  270,  271,  260,  269,  270,
  271,  269,  270,  271,  257,    5,    6,  282,  283,  284,
  285,  286,  287,  284,  285,  286,  287,  257,  286,  287,
  260,  274,  275,  276,  277,  278,  260,  282,  267,  283,
  282,  262,  260,  272,  273,  269,  270,  271,  269,  270,
  271,  269,  270,  271,  284,  285,  286,  287,  282,  283,
  284,  285,  286,  287,  282,  260,  284,  285,  286,  287,
  269,  270,  271,  283,  269,  270,  271,  274,  275,  276,
  277,  278,  260,  263,  263,  259,  263,  283,  259,  284,
  285,  286,  287,  283,  288,  259,  282,    0,  260,  260,
  260,  283,  260,   -1,   -1,   -1,   -1,  283,
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
#line 284 "y.tab.c"
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
#line 54 "inicioCT.y"
{ System.out.println(yyvsp[0].sval); }
break;
case 2:
#line 56 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + "\n" + yyvsp[0].sval; }
break;
case 3:
#line 57 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + "\n" + yyvsp[0].sval; }
break;
case 4:
#line 58 "inicioCT.y"
{ yyval.sval = ""; }
break;
case 5:
#line 60 "inicioCT.y"
{ yyval.sval = "int main() {\n " + yyvsp[-1].sval + "}\n"; }
break;
case 6:
#line 62 "inicioCT.y"
{ yyval.sval = "#include " + yyvsp[0].sval; }
break;
case 7:
#line 64 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 8:
#line 65 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 9:
#line 66 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 10:
#line 67 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 11:
#line 68 "inicioCT.y"
{ yyval.sval = ""; }
break;
case 12:
#line 70 "inicioCT.y"
{  yyval.sval = " int " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 13:
#line 71 "inicioCT.y"
{  yyval.sval = " int " + yyvsp[-4].sval + "[" + yyvsp[-2].sval + "]" + ";\n" + yyvsp[0].sval; }
break;
case 14:
#line 72 "inicioCT.y"
{  yyval.sval = " float " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 15:
#line 73 "inicioCT.y"
{  yyval.sval = " real " + yyvsp[-4].sval + "[" + yyvsp[-2].sval + "]" + ";\n" + yyvsp[0].sval; }
break;
case 16:
#line 74 "inicioCT.y"
{  yyval.sval = " char " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 17:
#line 75 "inicioCT.y"
{  yyval.sval = " char " + yyvsp[-4].sval + "[" + yyvsp[-2].sval + "]" + ";\n" + yyvsp[0].sval; }
break;
case 18:
#line 76 "inicioCT.y"
{yyval.sval = ""; }
break;
case 19:
#line 78 "inicioCT.y"
{  yyval.sval = " " + yyvsp[-3].sval + " = " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 20:
#line 79 "inicioCT.y"
{  yyval.sval = " " + yyvsp[-2].sval + "++" + ";\n" + yyvsp[0].sval; }
break;
case 21:
#line 80 "inicioCT.y"
{  yyval.sval = " " + yyvsp[-2].sval + "--" + ";\n" + yyvsp[0].sval; }
break;
case 22:
#line 81 "inicioCT.y"
{  yyval.sval = yyvsp[-2].sval + "=" + yyvsp[0].sval + ";\n"; }
break;
case 23:
#line 83 "inicioCT.y"
{yyval.sval = ""; }
break;
case 24:
#line 85 "inicioCT.y"
{yyval.sval = yyvsp[0].sval;}
break;
case 25:
#line 86 "inicioCT.y"
{yyval.sval = yyvsp[0].sval;}
break;
case 26:
#line 88 "inicioCT.y"
{ yyval.sval = yyvsp[-2].sval + " > " + yyvsp[0].sval; }
break;
case 27:
#line 89 "inicioCT.y"
{ yyval.sval = yyvsp[-2].sval + " < " + yyvsp[0].sval; }
break;
case 28:
#line 90 "inicioCT.y"
{ yyval.sval = yyvsp[-2].sval + " == " + yyvsp[0].sval; }
break;
case 29:
#line 91 "inicioCT.y"
{ yyval.sval = yyvsp[-3].sval + " >" + "= " + yyvsp[0].sval; }
break;
case 30:
#line 92 "inicioCT.y"
{ yyval.sval = yyvsp[-3].sval + " <" + "= " + yyvsp[0].sval; }
break;
case 31:
#line 93 "inicioCT.y"
{yyval.sval = ""; }
break;
case 32:
#line 95 "inicioCT.y"
{ yyval.sval = " if " + "(" + yyvsp[-5].sval + ")" + "{\n" + yyvsp[-2].sval + " }\n" + yyvsp[0].sval; }
break;
case 33:
#line 96 "inicioCT.y"
{ yyval.sval = " else" + "if" + "(" + yyvsp[-5].sval + ")" + "{\n" + yyvsp[-2].sval + " }\n" + yyvsp[0].sval; }
break;
case 34:
#line 97 "inicioCT.y"
{ yyval.sval = " else" + "{\n" + yyvsp[-2].sval + "}\n" + yyvsp[0].sval; }
break;
case 35:
#line 98 "inicioCT.y"
{yyval.sval = ""; }
break;
case 36:
#line 100 "inicioCT.y"
{ yyval.sval = "+" + yyvsp[0].sval; }
break;
case 37:
#line 101 "inicioCT.y"
{ yyval.sval = "-" + yyvsp[0].sval; }
break;
case 38:
#line 102 "inicioCT.y"
{ yyval.sval = "*" + yyvsp[0].sval; }
break;
case 39:
#line 103 "inicioCT.y"
{ yyval.sval = "/" + yyvsp[0].sval; }
break;
case 40:
#line 104 "inicioCT.y"
{ yyval.sval = "%" + yyvsp[0].sval; }
break;
case 41:
#line 105 "inicioCT.y"
{yyval.sval = ""; }
break;
case 42:
#line 107 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 43:
#line 108 "inicioCT.y"
{ yyval.sval = "(" + yyvsp[-2].sval + ")" + yyvsp[0].sval; }
break;
case 44:
#line 109 "inicioCT.y"
{yyval.sval = ""; }
break;
case 45:
#line 111 "inicioCT.y"
{yyval.sval = "while " + "(" + yyvsp[-4].sval + ")" + "{\n " + yyvsp[-1].sval + "}\n"; }
break;
case 46:
#line 112 "inicioCT.y"
{ yyval.sval = "do" + "{\n " + yyvsp[-5].sval + "}" + " while" + "(" + yyvsp[-1].sval + ")\n"; }
break;
#line 608 "y.tab.c"
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
