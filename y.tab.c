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
#define NUMERO 286
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    1,    1,    1,    2,    3,    4,    4,    4,    4,
    5,    5,    5,    5,    5,    5,    5,    6,    6,    6,
    6,    6,    6,    9,    9,    7,    7,    7,    7,    7,
    7,    8,    8,    8,    8,   10,   10,   10,   10,   10,
   10,   11,   11,   11,
};
short yylen[] = {                                         2,
    1,    2,    2,    0,    4,    2,    2,    2,    2,    0,
    3,    6,    3,    6,    3,    6,    0,    4,    4,    3,
    3,    3,    0,    1,    1,    3,    3,    3,    4,    4,
    0,    8,    9,    5,    0,    2,    2,    2,    2,    2,
    0,    2,    5,    0,
};
short yydefred[] = {                                      0,
    0,    0,    0,    1,    0,    0,    0,    6,    3,    2,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    5,
    7,    8,    9,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   22,   20,   21,    0,   11,    0,   13,    0,
   15,   24,   25,    0,    0,    0,    0,   18,   36,   37,
   38,   39,   40,   19,   42,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   28,    0,   26,    0,   27,   34,    0,    0,   12,   14,
   16,    0,   29,   30,    0,   43,    0,    0,   32,    0,
   33,
};
short yydgoto[] = {                                       3,
    4,    5,    6,   17,   18,   19,   54,   20,   41,   42,
   43,
};
short yysindex[] = {                                   -200,
 -225, -221,    0,    0, -200, -200, -178,    0,    0,    0,
  -89, -211, -201, -198, -219, -231, -193, -178, -178, -178,
 -236, -183, -183, -120,  -97,  -94, -242, -178, -206,    0,
    0,    0,    0, -183, -205, -205, -205, -205, -205, -183,
  -88, -192,    0,    0,    0, -242,    0, -242,    0, -242,
    0,    0,    0, -179, -184, -162, -242,    0,    0,    0,
    0,    0,    0,    0,    0, -205, -158, -151, -145, -140,
 -242, -243, -241, -265, -152, -150, -185, -185, -185, -178,
    0, -242,    0, -242,    0,    0, -127,  -88,    0,    0,
    0, -122,    0,    0, -178,    0, -265,  -96,    0, -265,
    0,
};
short yyrindex[] = {                                    163,
    0,    0,    0,    0,  163,  163,  -93,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -93,  -93,  -93,
 -126, -123, -123, -230, -230, -230, -117,  -93,    0,    0,
    0,    0,    0, -161, -130, -130, -130, -130, -130, -149,
 -182,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0, -117,    0,    0,    0,
    0,    0,    0,    0,    0, -251,    0,    0,    0,    0,
    0,    0,    0, -100,    0,    0, -230, -230, -230,  -93,
    0,    0,    0,    0,    0,    0,    0, -182,    0,    0,
    0,    0,    0,    0,  -93,    0, -100,    0,    0, -100,
    0,
};
short yygindex[] = {                                      0,
   89,    0,    0,  -18,  -13,   -5,  122,  -17,  -24,  -37,
  -30,
};
#define YYTABLESIZE 190
short yytable[] = {                                      31,
   32,   33,   55,   65,   59,   60,   61,   62,   63,   56,
   47,   49,   51,   52,   52,   52,   44,   45,   15,   16,
   34,   67,   82,   68,   84,   69,   17,   28,   58,   17,
   41,   44,   55,    7,   64,   76,    8,   35,   36,   37,
   38,   39,   53,   53,   53,   24,   81,   83,   85,   40,
   96,   52,   29,   17,   17,   25,   86,   93,   26,   94,
    1,   92,   27,   89,   90,   91,   30,    2,   35,   36,
   37,   38,   39,   11,   41,   57,   98,   41,   11,   99,
   53,   71,  101,   12,   13,   14,   41,   41,   41,   66,
   12,   13,   14,    9,   10,   72,   73,   74,   23,   41,
   41,   41,   41,   70,   77,   15,   16,   23,   23,   23,
   23,   78,   24,   24,   24,   24,   24,   79,   80,   23,
   23,   23,   23,   23,   25,   25,   25,   25,   25,   44,
   87,   95,   88,   44,   23,   23,   23,   97,   44,   44,
   44,   46,   44,   44,   44,   23,   23,   23,   12,   13,
   14,   41,   44,   44,   44,   41,   35,   44,   44,   35,
   23,   23,    4,  100,   48,   31,   10,   50,   35,   35,
   35,   12,   13,   14,   12,   13,   14,   21,   75,    0,
    0,    0,   22,   23,    0,   35,   36,   37,   38,   39,
};
short yycheck[] = {                                      18,
   19,   20,   27,   41,   35,   36,   37,   38,   39,   28,
   24,   25,   26,  257,  257,  257,   22,   23,  284,  285,
  257,   46,  266,   48,  266,   50,  257,  259,   34,  260,
  282,  283,   57,  259,   40,   66,  258,  274,  275,  276,
  277,  278,  286,  286,  286,  257,   71,   72,   73,  286,
   88,  257,  284,  284,  285,  257,   74,   82,  257,   84,
  261,   80,  282,   77,   78,   79,  260,  268,  274,  275,
  276,  277,  278,  257,  257,  282,   95,  260,  257,   97,
  286,  266,  100,  269,  270,  271,  269,  270,  271,  282,
  269,  270,  271,    5,    6,  280,  281,  260,  260,  282,
  283,  284,  285,  283,  263,  284,  285,  269,  270,  271,
  260,  263,  274,  275,  276,  277,  278,  263,  259,  269,
  270,  271,  284,  285,  274,  275,  276,  277,  278,  260,
  283,  259,  283,  260,  284,  285,  260,  260,  269,  270,
  271,  262,  269,  270,  271,  269,  270,  271,  269,  270,
  271,  282,  283,  284,  285,  282,  257,  284,  285,  260,
  284,  285,    0,  260,  262,  283,  260,  262,  269,  270,
  271,  269,  270,  271,  269,  270,  271,  267,   57,   -1,
   -1,   -1,  272,  273,   -1,  274,  275,  276,  277,  278,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 286
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
"ABRE_PARENTESES","FECHA_PARENTESES","SE","SENAO","NUMERO",
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
"comandos :",
"declaracao : INTEIRO IDENTIFICADOR declaracao",
"declaracao : INTEIRO IDENTIFICADOR ABRE_COLCHETES tipo FECHA_COLCHETES declaracao",
"declaracao : REAL IDENTIFICADOR declaracao",
"declaracao : REAL IDENTIFICADOR ABRE_COLCHETES tipo FECHA_COLCHETES declaracao",
"declaracao : CARACTER IDENTIFICADOR declaracao",
"declaracao : CARACTER IDENTIFICADOR ABRE_COLCHETES tipo FECHA_COLCHETES declaracao",
"declaracao :",
"atribuicao : IDENTIFICADOR ATRIBUIR IDENTIFICADOR atribuicao",
"atribuicao : IDENTIFICADOR ATRIBUIR NUMERO atribuicao",
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
#line 107 "inicioCT.y"

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
#line 273 "y.tab.c"
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
#line 49 "inicioCT.y"
{ System.out.println(yyvsp[0].sval); }
break;
case 2:
#line 51 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + "\n" + yyvsp[0].sval; }
break;
case 3:
#line 52 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + "\n" + yyvsp[0].sval; }
break;
case 4:
#line 53 "inicioCT.y"
{ yyval.sval = ""; }
break;
case 5:
#line 55 "inicioCT.y"
{ yyval.sval = "int main() {\n " + yyvsp[-1].sval + "}\n"; }
break;
case 6:
#line 57 "inicioCT.y"
{ yyval.sval = "#include " + yyvsp[0].sval; }
break;
case 7:
#line 59 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 8:
#line 60 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 9:
#line 61 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 10:
#line 62 "inicioCT.y"
{ yyval.sval = ""; }
break;
case 11:
#line 64 "inicioCT.y"
{  yyval.sval = " int " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 12:
#line 65 "inicioCT.y"
{  yyval.sval = " int " + yyvsp[-4].sval + "[" + yyvsp[-2].sval + "]" + ";\n" + yyvsp[0].sval; }
break;
case 13:
#line 66 "inicioCT.y"
{  yyval.sval = " float " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 14:
#line 67 "inicioCT.y"
{  yyval.sval = " real " + yyvsp[-4].sval + "[" + yyvsp[-2].sval + "]" + ";\n" + yyvsp[0].sval; }
break;
case 15:
#line 68 "inicioCT.y"
{  yyval.sval = " char " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 16:
#line 69 "inicioCT.y"
{  yyval.sval = " char " + yyvsp[-4].sval + "[" + yyvsp[-2].sval + "]" + ";\n" + yyvsp[0].sval; }
break;
case 17:
#line 70 "inicioCT.y"
{yyval.sval = ""; }
break;
case 18:
#line 72 "inicioCT.y"
{  yyval.sval = " " + yyvsp[-3].sval + " = " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 19:
#line 73 "inicioCT.y"
{  yyval.sval = " " + yyvsp[-3].sval + " = " + yyvsp[-1].sval + ";\n" + yyvsp[0].sval; }
break;
case 20:
#line 74 "inicioCT.y"
{  yyval.sval = " " + yyvsp[-2].sval + "++" + ";\n" + yyvsp[0].sval; }
break;
case 21:
#line 75 "inicioCT.y"
{  yyval.sval = " " + yyvsp[-2].sval + "--" + ";\n" + yyvsp[0].sval; }
break;
case 22:
#line 76 "inicioCT.y"
{  yyval.sval = yyvsp[-2].sval + "=" + yyvsp[0].sval + ";\n"; }
break;
case 23:
#line 77 "inicioCT.y"
{yyval.sval = ""; }
break;
case 24:
#line 79 "inicioCT.y"
{yyval.sval = yyvsp[0].sval;}
break;
case 25:
#line 80 "inicioCT.y"
{yyval.sval = yyvsp[0].sval;}
break;
case 26:
#line 82 "inicioCT.y"
{ yyval.sval = yyvsp[-2].sval + " > " + yyvsp[0].sval; }
break;
case 27:
#line 83 "inicioCT.y"
{ yyval.sval = yyvsp[-2].sval + " < " + yyvsp[0].sval; }
break;
case 28:
#line 84 "inicioCT.y"
{ yyval.sval = yyvsp[-2].sval + " == " + yyvsp[0].sval; }
break;
case 29:
#line 85 "inicioCT.y"
{ yyval.sval = yyvsp[-3].sval + " >" + "= " + yyvsp[0].sval; }
break;
case 30:
#line 86 "inicioCT.y"
{ yyval.sval = yyvsp[-3].sval + " <" + "= " + yyvsp[0].sval; }
break;
case 31:
#line 87 "inicioCT.y"
{yyval.sval = ""; }
break;
case 32:
#line 89 "inicioCT.y"
{ yyval.sval = " if " + "(" + yyvsp[-5].sval + ")" + "{\n" + yyvsp[-2].sval + " }\n" + yyvsp[0].sval; }
break;
case 33:
#line 90 "inicioCT.y"
{ yyval.sval = " else" + "if" + "(" + yyvsp[-5].sval + ")" + "{\n" + yyvsp[-2].sval + " }\n" + yyvsp[0].sval; }
break;
case 34:
#line 91 "inicioCT.y"
{ yyval.sval = " else" + "{\n" + yyvsp[-2].sval + "}\n" + yyvsp[0].sval; }
break;
case 35:
#line 92 "inicioCT.y"
{yyval.sval = ""; }
break;
case 36:
#line 94 "inicioCT.y"
{ yyval.sval = "+" + yyvsp[0].sval; }
break;
case 37:
#line 95 "inicioCT.y"
{ yyval.sval = "-" + yyvsp[0].sval; }
break;
case 38:
#line 96 "inicioCT.y"
{ yyval.sval = "*" + yyvsp[0].sval; }
break;
case 39:
#line 97 "inicioCT.y"
{ yyval.sval = "/" + yyvsp[0].sval; }
break;
case 40:
#line 98 "inicioCT.y"
{ yyval.sval = "%" + yyvsp[0].sval; }
break;
case 41:
#line 99 "inicioCT.y"
{yyval.sval = ""; }
break;
case 42:
#line 101 "inicioCT.y"
{ yyval.sval = yyvsp[-1].sval + yyvsp[0].sval; }
break;
case 43:
#line 102 "inicioCT.y"
{ yyval.sval = "(" + yyvsp[-2].sval + ")" + yyvsp[0].sval; }
break;
case 44:
#line 103 "inicioCT.y"
{yyval.sval = ""; }
break;
#line 589 "y.tab.c"
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
