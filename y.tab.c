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
short yylhs[] = {                                        -1,
    0,    1,    1,    1,    2,    3,    4,    4,    4,    4,
    4,    5,    5,    5,    5,    5,    5,    5,    6,    6,
    6,    6,    6,    9,    9,    7,    7,    7,    7,    7,
    7,    8,    8,    8,    8,    8,   13,   13,   13,   10,
   10,   10,   10,   10,   10,   11,   11,   11,   12,   12,
   12,   12,
};
short yylen[] = {                                         2,
    1,    2,    2,    0,    4,    2,    2,    2,    2,    2,
    0,    3,    6,    3,    6,    3,    6,    0,    4,    3,
    3,    3,    0,    1,    1,    3,    3,    3,    4,    4,
    0,    8,    9,    5,    7,    0,    6,    6,    0,    2,
    2,    2,    2,    2,    0,    2,    5,    0,    7,    8,
    6,    0,
};
short yydefred[] = {                                      0,
    0,    0,    0,    1,    0,    0,    0,    6,    3,    2,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    5,    7,
    8,    9,   10,   24,    0,    0,    0,    0,    0,   25,
    0,    0,   22,   20,   21,    0,   12,    0,   14,    0,
   16,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   40,   41,   42,   43,   44,   19,   46,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   28,    0,   26,    0,
   27,   34,    0,    0,    0,    0,    0,    0,   13,   15,
   17,    0,   29,   30,    0,    0,    0,   51,    0,    0,
   47,    0,    0,   49,    0,    0,    0,   35,   32,    0,
   50,    0,    0,   33,    0,    0,    0,    0,   38,   37,
};
short yydgoto[] = {                                       3,
    4,    5,    6,   21,   22,   23,   62,   24,   70,   52,
   53,   25,  120,
};
short yysindex[] = {                                   -226,
 -236, -240,    0,    0, -226, -226, -131,    0,    0,    0,
 -168, -220, -213, -186, -208, -242, -204, -180, -200, -189,
 -164, -131, -131, -131, -131, -248, -159, -159, -210, -121,
  -97, -247, -131, -172, -247, -131, -161, -139,    0,    0,
    0,    0,    0,    0, -248, -248, -248, -248, -248,    0,
  -49, -156,    0,    0,    0, -247,    0, -247,    0, -247,
    0, -155, -190, -132, -247, -140, -117, -115, -126,  -99,
    0,    0,    0,    0,    0,    0,    0, -248, -112, -103,
 -100,  -93, -247, -244, -241, -214, -111,  -70,  -96, -131,
  -67,  -89, -238, -238, -238, -131,    0, -247,    0, -247,
    0,    0,  -65, -131,  -83,  -61,  -90,  -99,    0,    0,
    0,  -59,    0,    0, -131,  -58, -247,    0, -227,  -57,
    0, -214,  -56,    0,  -77,  -48,  -45,    0,    0, -214,
    0, -131, -131,    0,  -85,  -73,  -90,  -90,    0,    0,
};
short yyrindex[] = {                                    220,
    0,    0,    0,    0,  220,  220,  -39,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -252, -252, -252, -252,  -74,  -47,  -47, -154, -154,
 -154,  -52,  -39,    0,  -52,  -39,    0,    0,    0,    0,
    0,    0,    0,    0, -101, -101, -101, -101, -101,    0,
  -47,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -52,    0,    0,    0,    0, -169,
    0,    0,    0,    0,    0,    0,    0, -187,    0,    0,
    0,    0,    0,    0,    0, -124,    0,    0,    0,  -39,
    0,    0, -154, -154, -154,  -39,    0,    0,    0,    0,
    0,    0,    0,  -39,    0,    0, -164, -169,    0,    0,
    0,    0,    0,    0,  -39,    0,  -52,    0,    0,    0,
    0, -124,    0,    0,    0,    0,    0,    0,    0, -124,
    0,  -60,  -60,    0,    0,    0, -164, -164,    0,    0,
};
short yygindex[] = {                                      0,
  102,    0,    0,  -22,  -10,   21,  -31,  -79,  -20,  -46,
    9,    0,  -14,
};
#define YYTABLESIZE 244
short yytable[] = {                                      40,
   41,   42,   43,   66,   77,   51,  102,   11,   44,   44,
   64,   63,   44,   67,   63,   44,   33,    8,   57,   59,
   61,   98,    7,   77,  100,   45,   46,   47,   48,   49,
   12,   13,   14,   87,    1,   79,   29,   80,   11,   81,
   34,    2,  129,   30,   63,   50,   50,   54,   55,   50,
  134,   56,   50,   71,   72,   73,   74,   75,   12,   13,
   14,  121,   97,   99,  101,  126,  127,  106,   15,   16,
   31,   76,   32,  112,   20,   83,   35,  113,   36,  114,
   37,  116,  109,  110,  111,  125,   92,   45,   84,   85,
   45,   38,  123,   45,   48,   39,   63,   11,   26,   45,
   45,   45,   18,   27,   28,   18,    9,   10,   65,  135,
  136,   45,   45,   45,   45,   45,   45,   69,   45,   45,
   68,   45,  139,  140,   78,   11,   82,   86,   18,   18,
   18,   18,   36,   18,   18,   36,   18,   12,   13,   14,
   58,   88,   89,   90,   36,   36,   36,   12,   13,   14,
   93,   15,   16,   17,   18,   91,   19,   20,   48,   94,
   36,   36,   95,   36,   60,   96,   36,   48,   48,   48,
  103,   12,   13,   14,   45,   46,   47,   48,   49,   45,
   48,   48,   48,   48,   48,   48,   48,   48,  104,   48,
  105,  107,  108,  115,   48,   48,   48,  117,  118,  119,
  122,  124,  128,  130,  131,  137,   45,   11,   48,   48,
   48,   48,   23,   48,   48,  132,   48,  138,  133,    4,
   11,   23,   23,   23,   45,   46,   47,   48,   49,   31,
   11,    0,    0,    0,    0,   23,   23,   23,   23,    0,
   23,   23,    0,   23,
};
short yycheck[] = {                                      22,
   23,   24,   25,   35,   51,   26,   86,  260,  257,  257,
   33,   32,  257,   36,   35,  257,  259,  258,   29,   30,
   31,  266,  259,   70,  266,  274,  275,  276,  277,  278,
  269,  270,  271,   65,  261,   56,  257,   58,  291,   60,
  283,  268,  122,  257,   65,  294,  294,   27,   28,  294,
  130,  262,  294,   45,   46,   47,   48,   49,  269,  270,
  271,  108,   83,   84,   85,  293,  294,   90,  283,  284,
  257,   51,  281,   96,  289,  266,  281,   98,  259,  100,
  281,  104,   93,   94,   95,  117,   78,  257,  279,  280,
  260,  281,  115,  281,  282,  260,  117,  257,  267,  269,
  270,  271,  257,  272,  273,  260,    5,    6,  281,  132,
  133,  281,  282,  283,  284,  285,  286,  257,  288,  289,
  282,  291,  137,  138,  281,  257,  282,  260,  283,  284,
  285,  286,  257,  288,  289,  260,  291,  269,  270,  271,
  262,  282,  260,  259,  269,  270,  271,  269,  270,  271,
  263,  283,  284,  285,  286,  282,  288,  289,  260,  263,
  285,  286,  263,  288,  262,  259,  291,  269,  270,  271,
  282,  269,  270,  271,  274,  275,  276,  277,  278,  281,
  282,  283,  284,  285,  286,  260,  288,  289,  259,  291,
  287,  259,  282,  259,  269,  270,  271,  281,  260,  290,
  260,  260,  260,  260,  282,  291,  281,  257,  283,  284,
  285,  286,  260,  288,  289,  264,  291,  291,  264,    0,
  260,  269,  270,  271,  274,  275,  276,  277,  278,  282,
  291,   -1,   -1,   -1,   -1,  283,  284,  285,  286,   -1,
  288,  289,   -1,  291,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 294
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
"MAIS","MENOS","MULTIPLICADO","DIVIDIDO","RESTO","MAIOR","MENOR",
"ABRE_PARENTESES","FECHA_PARENTESES","SE","SENAO","ENQUANTO","FACA","ATE",
"PARA","CASO","OPCAO","FIM_OPCAO","ASPAS_SIMPLES","CARACTER_ENTRE_ASPAS",
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
#line 128 "inicioCT.y"

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
#line 314 "y.tab.c"
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
#line 59 "inicioCT.y"
{ System.out.println(yyvsp[0].sval); }
break;
case 2:
#line 61 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + "\n" + yyvsp[0].sval; }
break;
case 3:
#line 62 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + "\n" + yyvsp[0].sval; }
break;
case 4:
#line 63 "inicioCT.y"
{ yyval.sval = ""; }
break;
case 5:
#line 65 "inicioCT.y"
{ yyval.sval = "int main() {\n " + yyvsp[-1].sval + "}\n"; }
break;
case 6:
#line 67 "inicioCT.y"
{ yyval.sval = "#include " + yyvsp[0].sval; }
break;
case 7:
#line 69 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 8:
#line 70 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 9:
#line 71 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 10:
#line 72 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 11:
#line 73 "inicioCT.y"
{ yyval.sval = ""; }
break;
case 12:
#line 75 "inicioCT.y"
{  yyval.sval = " int " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 13:
#line 76 "inicioCT.y"
{  yyval.sval = " int " + yyvsp[-4].sval + "[" + yyvsp[-2].sval + "]" + ";\n" + yyvsp[0].sval; }
break;
case 14:
#line 77 "inicioCT.y"
{  yyval.sval = " float " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 15:
#line 78 "inicioCT.y"
{  yyval.sval = " real " + yyvsp[-4].sval + "[" + yyvsp[-2].sval + "]" + ";\n" + yyvsp[0].sval; }
break;
case 16:
#line 79 "inicioCT.y"
{  yyval.sval = " char " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 17:
#line 80 "inicioCT.y"
{  yyval.sval = " char " + yyvsp[-4].sval + "[" + yyvsp[-2].sval + "]" + ";\n" + yyvsp[0].sval; }
break;
case 18:
#line 81 "inicioCT.y"
{yyval.sval = ""; }
break;
case 19:
#line 83 "inicioCT.y"
{  yyval.sval = " " + yyvsp[-3].sval + " = " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 20:
#line 84 "inicioCT.y"
{  yyval.sval = " " + yyvsp[-2].sval + "++" + ";\n" + yyvsp[0].sval; }
break;
case 21:
#line 85 "inicioCT.y"
{  yyval.sval = " " + yyvsp[-2].sval + "--" + ";\n" + yyvsp[0].sval; }
break;
case 22:
#line 86 "inicioCT.y"
{  yyval.sval = yyvsp[-2].sval + "=" + yyvsp[0].sval + ";\n"; }
break;
case 23:
#line 88 "inicioCT.y"
{yyval.sval = ""; }
break;
case 24:
#line 90 "inicioCT.y"
{yyval.sval = yyvsp[0].sval;}
break;
case 25:
#line 91 "inicioCT.y"
{yyval.sval = yyvsp[0].sval;}
break;
case 26:
#line 93 "inicioCT.y"
{ yyval.sval = yyvsp[-2].sval + " > " + yyvsp[0].sval; }
break;
case 27:
#line 94 "inicioCT.y"
{ yyval.sval = yyvsp[-2].sval + " < " + yyvsp[0].sval; }
break;
case 28:
#line 95 "inicioCT.y"
{ yyval.sval = yyvsp[-2].sval + " == " + yyvsp[0].sval; }
break;
case 29:
#line 96 "inicioCT.y"
{ yyval.sval = yyvsp[-3].sval + " >" + "= " + yyvsp[0].sval; }
break;
case 30:
#line 97 "inicioCT.y"
{ yyval.sval = yyvsp[-3].sval + " <" + "= " + yyvsp[0].sval; }
break;
case 31:
#line 98 "inicioCT.y"
{yyval.sval = ""; }
break;
case 32:
#line 101 "inicioCT.y"
{ yyval.sval = " if " + "(" + yyvsp[-5].sval + ")" + "{\n" + yyvsp[-2].sval + " }\n" + yyvsp[0].sval; }
break;
case 33:
#line 102 "inicioCT.y"
{ yyval.sval = " else" + "if" + "(" + yyvsp[-5].sval + ")" + "{\n" + yyvsp[-2].sval + " }\n" + yyvsp[0].sval; }
break;
case 34:
#line 103 "inicioCT.y"
{ yyval.sval = " else" + "{\n" + yyvsp[-2].sval + "}\n" + yyvsp[0].sval; }
break;
case 35:
#line 104 "inicioCT.y"
{ yyval.sval = "switch" + "(" + yyvsp[-4].sval + ")" + "{\n" + yyvsp[-1].sval + "}\n"; }
break;
case 36:
#line 105 "inicioCT.y"
{yyval.sval = ""; }
break;
case 37:
#line 107 "inicioCT.y"
{ yyval.sval = "case " + yyvsp[-4].sval + ":\n" + yyvsp[-2].sval + " break;\n" + yyvsp[0].sval; }
break;
case 38:
#line 108 "inicioCT.y"
{ yyval.sval = "case " + yyvsp[-4].sval + ":\n" + yyvsp[-2].sval + " break;\n" + yyvsp[0].sval; }
break;
case 39:
#line 109 "inicioCT.y"
{yyval.sval = ""; }
break;
case 40:
#line 111 "inicioCT.y"
{ yyval.sval = "+" + yyvsp[0].sval; }
break;
case 41:
#line 112 "inicioCT.y"
{ yyval.sval = "-" + yyvsp[0].sval; }
break;
case 42:
#line 113 "inicioCT.y"
{ yyval.sval = "*" + yyvsp[0].sval; }
break;
case 43:
#line 114 "inicioCT.y"
{ yyval.sval = "/" + yyvsp[0].sval; }
break;
case 44:
#line 115 "inicioCT.y"
{ yyval.sval = "%" + yyvsp[0].sval; }
break;
case 45:
#line 116 "inicioCT.y"
{yyval.sval = ""; }
break;
case 46:
#line 118 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 47:
#line 119 "inicioCT.y"
{ yyval.sval = "(" + yyvsp[-2].sval + ")" + yyvsp[0].sval; }
break;
case 48:
#line 120 "inicioCT.y"
{yyval.sval = ""; }
break;
case 49:
#line 122 "inicioCT.y"
{yyval.sval = "while " + "(" + yyvsp[-4].sval + ")" + "{\n " + yyvsp[-1].sval + "}\n"; }
break;
case 50:
#line 123 "inicioCT.y"
{ yyval.sval = "do" + "{\n " + yyvsp[-5].sval + "}" + " while" + "(" + yyvsp[-1].sval + ")\n"; }
break;
case 51:
#line 124 "inicioCT.y"
{ yyval.sval = "for" + "(" + ")" + "{" + yyvsp[-1].sval + "}\n"; }
break;
case 52:
#line 125 "inicioCT.y"
{yyval.sval = ""; }
break;
#line 662 "y.tab.c"
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
