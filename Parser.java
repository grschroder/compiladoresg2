//### This file created by BYACC 1.8(/Java extension  1.15)
//### Java capabilities added 7 Jan 97, Bob Jamison
//### Updated : 27 Nov 97  -- Bob Jamison, Joe Nieten
//###           01 Jan 98  -- Bob Jamison -- fixed generic semantic constructor
//###           01 Jun 99  -- Bob Jamison -- added Runnable support
//###           06 Aug 00  -- Bob Jamison -- made state variables class-global
//###           03 Jan 01  -- Bob Jamison -- improved flags, tracing
//###           16 May 01  -- Bob Jamison -- added custom stack sizing
//###           04 Mar 02  -- Yuval Oren  -- improved java performance, added options
//###           14 Mar 02  -- Tomas Hurka -- -d support, static initializer workaround
//### Please send bug reports to tom@hukatronic.cz
//### static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley) 01/20/90";






//#line 2 "inicioCT.y"
	import java.io.*;
	import java.util.*;
//#line 20 "Parser.java"




public class Parser
{

boolean yydebug;        //do I want debug output?
int yynerrs;            //number of errors so far
int yyerrflag;          //was there an error?
int yychar;             //the current working character

//########## MESSAGES ##########
//###############################################################
// method: debug
//###############################################################
void debug(String msg)
{
  if (yydebug)
    System.out.println(msg);
}

//########## STATE STACK ##########
final static int YYSTACKSIZE = 500;  //maximum stack size
int statestk[] = new int[YYSTACKSIZE]; //state stack
int stateptr;
int stateptrmax;                     //highest index of stackptr
int statemax;                        //state when highest index reached
//###############################################################
// methods: state stack push,pop,drop,peek
//###############################################################
final void state_push(int state)
{
  try {
		stateptr++;
		statestk[stateptr]=state;
	 }
	 catch (ArrayIndexOutOfBoundsException e) {
     int oldsize = statestk.length;
     int newsize = oldsize * 2;
     int[] newstack = new int[newsize];
     System.arraycopy(statestk,0,newstack,0,oldsize);
     statestk = newstack;
     statestk[stateptr]=state;
  }
}
final int state_pop()
{
  return statestk[stateptr--];
}
final void state_drop(int cnt)
{
  stateptr -= cnt; 
}
final int state_peek(int relative)
{
  return statestk[stateptr-relative];
}
//###############################################################
// method: init_stacks : allocate and prepare stacks
//###############################################################
final boolean init_stacks()
{
  stateptr = -1;
  val_init();
  return true;
}
//###############################################################
// method: dump_stacks : show n levels of the stacks
//###############################################################
void dump_stacks(int count)
{
int i;
  System.out.println("=index==state====value=     s:"+stateptr+"  v:"+valptr);
  for (i=0;i<count;i++)
    System.out.println(" "+i+"    "+statestk[i]+"      "+valstk[i]);
  System.out.println("======================");
}


//########## SEMANTIC VALUES ##########
//public class ParserVal is defined in ParserVal.java


String   yytext;//user variable to return contextual strings
ParserVal yyval; //used to return semantic vals from action routines
ParserVal yylval;//the 'lval' (result) I got from yylex()
ParserVal valstk[];
int valptr;
//###############################################################
// methods: value stack push,pop,drop,peek.
//###############################################################
void val_init()
{
  valstk=new ParserVal[YYSTACKSIZE];
  yyval=new ParserVal();
  yylval=new ParserVal();
  valptr=-1;
}
void val_push(ParserVal val)
{
  if (valptr>=YYSTACKSIZE)
    return;
  valstk[++valptr]=val;
}
ParserVal val_pop()
{
  if (valptr<0)
    return new ParserVal();
  return valstk[valptr--];
}
void val_drop(int cnt)
{
int ptr;
  ptr=valptr-cnt;
  if (ptr<0)
    return;
  valptr = ptr;
}
ParserVal val_peek(int relative)
{
int ptr;
  ptr=valptr-relative;
  if (ptr<0)
    return new ParserVal();
  return valstk[ptr];
}
final ParserVal dup_yyval(ParserVal val)
{
  ParserVal dup = new ParserVal();
  dup.ival = val.ival;
  dup.dval = val.dval;
  dup.sval = val.sval;
  dup.obj = val.obj;
  return dup;
}
//#### end semantic value section ####
public final static short IDENTIFICADOR=257;
public final static short INCLUSAO_ARQUIVO=258;
public final static short ABRE_CHAVES=259;
public final static short FECHA_CHAVES=260;
public final static short FUNCAO_PRINCIPAL=261;
public final static short ABRE_COLCHETES=262;
public final static short FECHA_COLCHETES=263;
public final static short DOIS_PONTOS=264;
public final static short PONTO_VIRGULA=265;
public final static short IGUAL=266;
public final static short ATRIBUIR=267;
public final static short INCLUIR=268;
public final static short INTEIRO=269;
public final static short REAL=270;
public final static short CARACTER=271;
public final static short INCREMENTO=272;
public final static short DECREMENTO=273;
public final static short MAIS=274;
public final static short MENOS=275;
public final static short MULTIPLICADO=276;
public final static short DIVIDIDO=277;
public final static short RESTO=278;
public final static short MAIOR=279;
public final static short MENOR=280;
public final static short ABRE_PARENTESES=281;
public final static short FECHA_PARENTESES=282;
public final static short SE=283;
public final static short SENAO=284;
public final static short ENQUANTO=285;
public final static short FACA=286;
public final static short ATE=287;
public final static short PARA=288;
public final static short CASO=289;
public final static short OPCAO=290;
public final static short FIM_OPCAO=291;
public final static short ASPAS_SIMPLES=292;
public final static short CARACTER_ENTRE_ASPAS=293;
public final static short NUMERO=294;
public final static short YYERRCODE=256;
final static short yylhs[] = {                           -1,
    0,    1,    1,    1,    2,    3,    4,    4,    4,    4,
    4,    5,    5,    5,    5,    5,    5,    5,    6,    6,
    6,    6,    6,    9,    9,    7,    7,    7,    7,    7,
    7,    8,    8,    8,    8,    8,   14,   14,   14,   10,
   10,   10,   10,   10,   10,   11,   11,   11,   12,   12,
   12,   12,   13,   13,
};
final static short yylen[] = {                            2,
    1,    2,    2,    0,    4,    2,    2,    2,    2,    2,
    0,    3,    6,    3,    6,    3,    6,    0,    4,    3,
    3,    3,    0,    1,    1,    3,    3,    3,    4,    4,
    0,    8,    9,    5,    7,    0,    6,    6,    0,    2,
    2,    2,    2,    2,    0,    2,    5,    0,    7,    8,
    7,    0,    5,    0,
};
final static short yydefred[] = {                         0,
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
final static short yydgoto[] = {                          3,
    4,    5,    6,   21,   22,   23,   62,   24,   71,   52,
   53,   25,   69,  124,
};
final static short yysindex[] = {                      -189,
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
final static short yyrindex[] = {                       230,
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
final static short yygindex[] = {                         0,
   80,    0,    0,  -22,   -5,   42,  -31,  -82,  -20,  -44,
   91,    0,  122,   -2,
};
final static int YYTABLESIZE=245;
static short yytable[];
static { yytable();}
static void yytable(){
yytable = new short[]{                         40,
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
}
static short yycheck[];
static { yycheck(); }
static void yycheck() {
yycheck = new short[] {                         22,
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
}
final static short YYFINAL=3;
final static short YYMAXTOKEN=294;
final static String yyname[] = {
"end-of-file",null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,
null,null,null,"IDENTIFICADOR","INCLUSAO_ARQUIVO","ABRE_CHAVES","FECHA_CHAVES",
"FUNCAO_PRINCIPAL","ABRE_COLCHETES","FECHA_COLCHETES","DOIS_PONTOS",
"PONTO_VIRGULA","IGUAL","ATRIBUIR","INCLUIR","INTEIRO","REAL","CARACTER",
"INCREMENTO","DECREMENTO","MAIS","MENOS","MULTIPLICADO","DIVIDIDO","RESTO",
"MAIOR","MENOR","ABRE_PARENTESES","FECHA_PARENTESES","SE","SENAO","ENQUANTO",
"FACA","ATE","PARA","CASO","OPCAO","FIM_OPCAO","ASPAS_SIMPLES",
"CARACTER_ENTRE_ASPAS","NUMERO",
};
final static String yyrule[] = {
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

//#line 134 "inicioCT.y"

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
//#line 386 "Parser.java"
//###############################################################
// method: yylexdebug : check lexer state
//###############################################################
void yylexdebug(int state,int ch)
{
String s=null;
  if (ch < 0) ch=0;
  if (ch <= YYMAXTOKEN) //check index bounds
     s = yyname[ch];    //now get it
  if (s==null)
    s = "illegal-symbol";
  debug("state "+state+", reading "+ch+" ("+s+")");
}





//The following are now global, to aid in error reporting
int yyn;       //next next thing to do
int yym;       //
int yystate;   //current parsing state from state table
String yys;    //current token string


//###############################################################
// method: yyparse : parse input and execute indicated items
//###############################################################
int yyparse()
{
boolean doaction;
  init_stacks();
  yynerrs = 0;
  yyerrflag = 0;
  yychar = -1;          //impossible char forces a read
  yystate=0;            //initial state
  state_push(yystate);  //save it
  val_push(yylval);     //save empty value
  while (true) //until parsing is done, either correctly, or w/error
    {
    doaction=true;
    if (yydebug) debug("loop"); 
    //#### NEXT ACTION (from reduction table)
    for (yyn=yydefred[yystate];yyn==0;yyn=yydefred[yystate])
      {
      if (yydebug) debug("yyn:"+yyn+"  state:"+yystate+"  yychar:"+yychar);
      if (yychar < 0)      //we want a char?
        {
        yychar = yylex();  //get next token
        if (yydebug) debug(" next yychar:"+yychar);
        //#### ERROR CHECK ####
        if (yychar < 0)    //it it didn't work/error
          {
          yychar = 0;      //change it to default string (no -1!)
          if (yydebug)
            yylexdebug(yystate,yychar);
          }
        }//yychar<0
      yyn = yysindex[yystate];  //get amount to shift by (shift index)
      if ((yyn != 0) && (yyn += yychar) >= 0 &&
          yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
        {
        if (yydebug)
          debug("state "+yystate+", shifting to state "+yytable[yyn]);
        //#### NEXT STATE ####
        yystate = yytable[yyn];//we are in a new state
        state_push(yystate);   //save it
        val_push(yylval);      //push our lval as the input for next rule
        yychar = -1;           //since we have 'eaten' a token, say we need another
        if (yyerrflag > 0)     //have we recovered an error?
           --yyerrflag;        //give ourselves credit
        doaction=false;        //but don't process yet
        break;   //quit the yyn=0 loop
        }

    yyn = yyrindex[yystate];  //reduce
    if ((yyn !=0 ) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
      {   //we reduced!
      if (yydebug) debug("reduce");
      yyn = yytable[yyn];
      doaction=true; //get ready to execute
      break;         //drop down to actions
      }
    else //ERROR RECOVERY
      {
      if (yyerrflag==0)
        {
        yyerror("syntax error");
        yynerrs++;
        }
      if (yyerrflag < 3) //low error count?
        {
        yyerrflag = 3;
        while (true)   //do until break
          {
          if (stateptr<0)   //check for under & overflow here
            {
            yyerror("stack underflow. aborting...");  //note lower case 's'
            return 1;
            }
          yyn = yysindex[state_peek(0)];
          if ((yyn != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
            if (yydebug)
              debug("state "+state_peek(0)+", error recovery shifting to state "+yytable[yyn]+" ");
            yystate = yytable[yyn];
            state_push(yystate);
            val_push(yylval);
            doaction=false;
            break;
            }
          else
            {
            if (yydebug)
              debug("error recovery discarding state "+state_peek(0)+" ");
            if (stateptr<0)   //check for under & overflow here
              {
              yyerror("Stack underflow. aborting...");  //capital 'S'
              return 1;
              }
            state_pop();
            val_pop();
            }
          }
        }
      else            //discard this token
        {
        if (yychar == 0)
          return 1; //yyabort
        if (yydebug)
          {
          yys = null;
          if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
          if (yys == null) yys = "illegal-symbol";
          debug("state "+yystate+", error recovery discards token "+yychar+" ("+yys+")");
          }
        yychar = -1;  //read another
        }
      }//end error recovery
    }//yyn=0 loop
    if (!doaction)   //any reason not to proceed?
      continue;      //skip action
    yym = yylen[yyn];          //get count of terminals on rhs
    if (yydebug)
      debug("state "+yystate+", reducing "+yym+" by rule "+yyn+" ("+yyrule[yyn]+")");
    if (yym>0)                 //if count of rhs not 'nil'
      yyval = val_peek(yym-1); //get current semantic value
    yyval = dup_yyval(yyval); //duplicate yyval if ParserVal is used as semantic value
    switch(yyn)
      {
//########## USER-SUPPLIED ACTIONS ##########
case 1:
//#line 60 "inicioCT.y"
{ System.out.println(val_peek(0).sval); }
break;
case 2:
//#line 62 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + "\n" + val_peek(0).sval; }
break;
case 3:
//#line 63 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + "\n" + val_peek(0).sval; }
break;
case 4:
//#line 64 "inicioCT.y"
{ yyval.sval = ""; }
break;
case 5:
//#line 66 "inicioCT.y"
{ yyval.sval = "int main() {\n " + val_peek(1).sval + "}\n"; }
break;
case 6:
//#line 68 "inicioCT.y"
{ yyval.sval = "#include " + val_peek(0).sval; }
break;
case 7:
//#line 70 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + val_peek(0).sval; }
break;
case 8:
//#line 71 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + val_peek(0).sval; }
break;
case 9:
//#line 72 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + val_peek(0).sval; }
break;
case 10:
//#line 73 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + val_peek(0).sval; }
break;
case 11:
//#line 74 "inicioCT.y"
{ yyval.sval = ""; }
break;
case 12:
//#line 76 "inicioCT.y"
{  yyval.sval = " int " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
case 13:
//#line 77 "inicioCT.y"
{  yyval.sval = " int " + val_peek(4).sval + "[" + val_peek(2).sval + "]" + ";\n" + val_peek(0).sval; }
break;
case 14:
//#line 78 "inicioCT.y"
{  yyval.sval = " float " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
case 15:
//#line 79 "inicioCT.y"
{  yyval.sval = " real " + val_peek(4).sval + "[" + val_peek(2).sval + "]" + ";\n" + val_peek(0).sval; }
break;
case 16:
//#line 80 "inicioCT.y"
{  yyval.sval = " char " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
case 17:
//#line 81 "inicioCT.y"
{  yyval.sval = " char " + val_peek(4).sval + "[" + val_peek(2).sval + "]" + ";\n" + val_peek(0).sval; }
break;
case 18:
//#line 82 "inicioCT.y"
{yyval.sval = ""; }
break;
case 19:
//#line 84 "inicioCT.y"
{  yyval.sval = " " + val_peek(3).sval + " = " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
case 20:
//#line 85 "inicioCT.y"
{  yyval.sval = " " + val_peek(2).sval + "++" + ";\n" + val_peek(0).sval; }
break;
case 21:
//#line 86 "inicioCT.y"
{  yyval.sval = " " + val_peek(2).sval + "--" + ";\n" + val_peek(0).sval; }
break;
case 22:
//#line 88 "inicioCT.y"
{  yyval.sval = val_peek(2).sval + "=" + val_peek(0).sval + ";\n"; }
break;
case 23:
//#line 90 "inicioCT.y"
{yyval.sval = ""; }
break;
case 24:
//#line 92 "inicioCT.y"
{yyval.sval = val_peek(0).sval;}
break;
case 25:
//#line 93 "inicioCT.y"
{yyval.sval = val_peek(0).sval;}
break;
case 26:
//#line 95 "inicioCT.y"
{ yyval.sval = val_peek(2).sval + " > " + val_peek(0).sval; }
break;
case 27:
//#line 96 "inicioCT.y"
{ yyval.sval = val_peek(2).sval + " < " + val_peek(0).sval; }
break;
case 28:
//#line 97 "inicioCT.y"
{ yyval.sval = val_peek(2).sval + " == " + val_peek(0).sval; }
break;
case 29:
//#line 98 "inicioCT.y"
{ yyval.sval = val_peek(3).sval + " >" + "= " + val_peek(0).sval; }
break;
case 30:
//#line 99 "inicioCT.y"
{ yyval.sval = val_peek(3).sval + " <" + "= " + val_peek(0).sval; }
break;
case 31:
//#line 100 "inicioCT.y"
{yyval.sval = ""; }
break;
case 32:
//#line 103 "inicioCT.y"
{ yyval.sval = " if " + "(" + val_peek(5).sval + ")" + "{\n" + val_peek(2).sval + " }\n" + val_peek(0).sval; }
break;
case 33:
//#line 104 "inicioCT.y"
{ yyval.sval = " else" + "if" + "(" + val_peek(5).sval + ")" + "{\n" + val_peek(2).sval + " }\n" + val_peek(0).sval; }
break;
case 34:
//#line 105 "inicioCT.y"
{ yyval.sval = " else" + "{\n" + val_peek(2).sval + "}\n" + val_peek(0).sval; }
break;
case 35:
//#line 106 "inicioCT.y"
{ yyval.sval = "switch" + "(" + val_peek(4).sval + ")" + "{\n" + val_peek(1).sval + "}\n"; }
break;
case 36:
//#line 107 "inicioCT.y"
{yyval.sval = ""; }
break;
case 37:
//#line 109 "inicioCT.y"
{ yyval.sval = "case " + val_peek(4).sval + ":\n" + val_peek(2).sval + " break;\n" + val_peek(0).sval; }
break;
case 38:
//#line 110 "inicioCT.y"
{ yyval.sval = "case " + val_peek(4).sval + ":\n" + val_peek(2).sval + " break;\n" + val_peek(0).sval; }
break;
case 39:
//#line 111 "inicioCT.y"
{yyval.sval = ""; }
break;
case 40:
//#line 113 "inicioCT.y"
{ yyval.sval = "+" + val_peek(0).sval; }
break;
case 41:
//#line 114 "inicioCT.y"
{ yyval.sval = "-" + val_peek(0).sval; }
break;
case 42:
//#line 115 "inicioCT.y"
{ yyval.sval = "*" + val_peek(0).sval; }
break;
case 43:
//#line 116 "inicioCT.y"
{ yyval.sval = "/" + val_peek(0).sval; }
break;
case 44:
//#line 117 "inicioCT.y"
{ yyval.sval = "%" + val_peek(0).sval; }
break;
case 45:
//#line 118 "inicioCT.y"
{yyval.sval = ""; }
break;
case 46:
//#line 120 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + val_peek(0).sval; }
break;
case 47:
//#line 121 "inicioCT.y"
{ yyval.sval = "(" + val_peek(2).sval + ")" + val_peek(0).sval; }
break;
case 48:
//#line 122 "inicioCT.y"
{yyval.sval = ""; }
break;
case 49:
//#line 124 "inicioCT.y"
{yyval.sval = "while " + "(" + val_peek(4).sval + ")" + "{\n " + val_peek(1).sval + "}\n"; }
break;
case 50:
//#line 125 "inicioCT.y"
{ yyval.sval = "do" + "{\n " + val_peek(5).sval + "}" + " while" + "(" + val_peek(1).sval + ")\n"; }
break;
case 51:
//#line 126 "inicioCT.y"
{ yyval.sval = "for" + "(" + val_peek(4).sval + ")" + "{" + val_peek(1).sval + "}\n"; }
break;
case 52:
//#line 127 "inicioCT.y"
{yyval.sval = ""; }
break;
case 53:
//#line 129 "inicioCT.y"
{  yyval.sval = " " + val_peek(4).sval + " = " + val_peek(2).sval + ";" + val_peek(0).sval; }
break;
case 54:
//#line 130 "inicioCT.y"
{yyval.sval = ""; }
break;
//#line 751 "Parser.java"
//########## END OF USER-SUPPLIED ACTIONS ##########
    }//switch
    //#### Now let's reduce... ####
    if (yydebug) debug("reduce");
    state_drop(yym);             //we just reduced yylen states
    yystate = state_peek(0);     //get new state
    val_drop(yym);               //corresponding value drop
    yym = yylhs[yyn];            //select next TERMINAL(on lhs)
    if (yystate == 0 && yym == 0)//done? 'rest' state and at first TERMINAL
      {
      if (yydebug) debug("After reduction, shifting from state 0 to state "+YYFINAL+"");
      yystate = YYFINAL;         //explicitly say we're done
      state_push(YYFINAL);       //and save it
      val_push(yyval);           //also save the semantic value of parsing
      if (yychar < 0)            //we want another character?
        {
        yychar = yylex();        //get next character
        if (yychar<0) yychar=0;  //clean, if necessary
        if (yydebug)
          yylexdebug(yystate,yychar);
        }
      if (yychar == 0)          //Good exit (if lex returns 0 ;-)
         break;                 //quit the loop--all DONE
      }//if yystate
    else                        //else not done yet
      {                         //get next state and push, for next yydefred[]
      yyn = yygindex[yym];      //find out where to go
      if ((yyn != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn]; //get new state
      else
        yystate = yydgoto[yym]; //else go to new defred
      if (yydebug) debug("after reduction, shifting from state "+state_peek(0)+" to state "+yystate+"");
      state_push(yystate);     //going again, so push state & val...
      val_push(yyval);         //for next action
      }
    }//main loop
  return 0;//yyaccept!!
}
//## end of method parse() ######################################



//## run() --- for Thread #######################################
/**
 * A default run method, used for operating this parser
 * object in the background.  It is intended for extending Thread
 * or implementing Runnable.  Turn off with -Jnorun .
 */
public void run()
{
  yyparse();
}
//## end of method run() ########################################



//## Constructors ###############################################
/**
 * Default constructor.  Turn off with -Jnoconstruct .

 */
public Parser()
{
  //nothing to do
}


/**
 * Create a parser, setting the debug to true or false.
 * @param debugMe true for debugging, false for no debug.
 */
public Parser(boolean debugMe)
{
  yydebug=debugMe;
}
//###############################################################



}
//################### END OF CLASS ##############################
