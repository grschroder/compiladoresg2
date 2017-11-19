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
public final static short PARA=279;
public final static short MAIOR=280;
public final static short MENOR=281;
public final static short ABRE_PARENTESES=282;
public final static short FECHA_PARENTESES=283;
public final static short SE=284;
public final static short SENAO=285;
public final static short ENQUANTO=286;
public final static short NUMERO=287;
public final static short YYERRCODE=256;
final static short yylhs[] = {                           -1,
    0,    1,    1,    1,    2,    3,    4,    4,    4,    4,
    4,    5,    5,    5,    5,    5,    5,    5,    6,    6,
    6,    6,    6,    9,    9,    7,    7,    7,    7,    7,
    7,    8,    8,    8,    8,   10,   10,   10,   10,   10,
   10,   11,   11,   11,   12,
};
final static short yylen[] = {                            2,
    1,    2,    2,    0,    4,    2,    2,    2,    2,    2,
    0,    3,    6,    3,    6,    3,    6,    0,    4,    3,
    3,    3,    0,    1,    1,    3,    3,    3,    4,    4,
    0,    8,    9,    5,    0,    2,    2,    2,    2,    2,
    0,    2,    5,    0,    7,
};
final static short yydefred[] = {                         0,
    0,    0,    0,    1,    0,    0,    0,    6,    3,    2,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    5,    7,    8,    9,   10,   24,    0,    0,
    0,    0,    0,   25,    0,    0,   22,   20,   21,    0,
   12,    0,   14,    0,   16,    0,    0,    0,    0,    0,
    0,   36,   37,   38,   39,   40,   19,   42,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   28,    0,   26,    0,   27,   34,
    0,    0,    0,   13,   15,   17,    0,   29,   30,    0,
    0,   43,    0,    0,   45,   32,    0,   33,
};
final static short yydgoto[] = {                          3,
    4,    5,    6,   18,   19,   20,   56,   21,   61,   46,
   47,   22,
};
final static short yysindex[] = {                      -244,
 -237, -242,    0,    0, -244, -244, -185,    0,    0,    0,
 -177, -227, -216, -214, -230, -228, -218, -206, -185, -185,
 -185, -185, -249, -187, -187, -151, -111,  -95, -243, -185,
 -204, -243,    0,    0,    0,    0,    0,    0, -249, -249,
 -249, -249, -249,    0, -112, -202,    0,    0,    0, -243,
    0, -243,    0, -243,    0, -200, -213, -166, -243, -173,
  -97,    0,    0,    0,    0,    0,    0,    0, -249, -147,
 -138, -134, -129, -243, -253, -248, -223, -152, -127, -146,
 -156, -156, -156, -185,    0, -243,    0, -243,    0,    0,
 -123, -185,  -97,    0,    0,    0, -113,    0,    0, -185,
 -108,    0, -223, -104,    0,    0, -223,    0,
};
final static short yyrindex[] = {                       157,
    0,    0,    0,    0,  157,  157,  -99,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -99,  -99,
  -99,  -99, -136, -116, -116, -197, -197, -197, -110,  -99,
    0, -110,    0,    0,    0,    0,    0,    0, -143, -143,
 -143, -143, -143,    0, -116,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -110,    0,
 -178,    0,    0,    0,    0,    0,    0,    0, -180,    0,
    0,    0,    0,    0,    0,    0, -148,    0,    0,    0,
 -197, -197, -197,  -99,    0,    0,    0,    0,    0,    0,
    0,  -99, -178,    0,    0,    0,    0,    0,    0,  -99,
    0,    0, -148,    0,    0,    0, -148,    0,
};
final static short yygindex[] = {                         0,
   92,    0,    0,  -19,   -7,   21,  -27,  -67,  -17,  -38,
    8,    0,
};
final static int YYTABLESIZE=181;
static short yytable[];
static { yytable();}
static void yytable(){
yytable = new short[]{                         34,
   35,   36,   37,   38,   60,   45,   68,   38,   38,   90,
   58,   57,   86,   38,   57,    8,    1,   88,   51,   53,
   55,    7,   68,    2,   39,   40,   41,   42,   43,   26,
   30,   78,   70,   44,   71,  106,   72,   44,   44,  108,
   27,   57,   28,   44,   48,   49,   62,   63,   64,   65,
   66,   29,   74,   33,  102,   31,   85,   87,   89,   18,
   15,   16,   18,   32,   97,   67,   75,   76,   98,   11,
   99,   11,  101,   94,   95,   96,   80,   59,   41,   69,
  104,   41,   73,   12,   13,   14,   18,   18,   18,   23,
   41,   41,   41,   77,   24,   25,    9,   10,   15,   16,
   17,   41,   44,   41,   41,   41,   41,   41,   35,   79,
   50,   35,   12,   13,   14,   81,   44,   12,   13,   14,
   35,   35,   35,   44,   82,   44,   44,   44,   83,   84,
   91,   92,   44,   44,   44,  100,   93,   35,   41,   44,
   44,   44,   44,   23,   11,   41,  103,   44,   44,   44,
   52,  105,   23,   23,   23,  107,    4,   12,   13,   14,
   11,   39,   40,   41,   42,   43,   54,   23,   23,   23,
    0,    0,   31,   12,   13,   14,   39,   40,   41,   42,
   43,
};
}
static short yycheck[];
static { yycheck(); }
static void yycheck() {
yycheck = new short[] {                         19,
   20,   21,   22,  257,   32,   23,   45,  257,  257,   77,
   30,   29,  266,  257,   32,  258,  261,  266,   26,   27,
   28,  259,   61,  268,  274,  275,  276,  277,  278,  257,
  259,   59,   50,  287,   52,  103,   54,  287,  287,  107,
  257,   59,  257,  287,   24,   25,   39,   40,   41,   42,
   43,  282,  266,  260,   93,  284,   74,   75,   76,  257,
  284,  285,  260,  282,   84,   45,  280,  281,   86,  257,
   88,  257,   92,   81,   82,   83,   69,  282,  257,  282,
  100,  260,  283,  269,  270,  271,  284,  285,  286,  267,
  269,  270,  271,  260,  272,  273,    5,    6,  284,  285,
  286,  282,  283,  282,  283,  284,  285,  286,  257,  283,
  262,  260,  269,  270,  271,  263,  260,  269,  270,  271,
  269,  270,  271,  260,  263,  269,  270,  271,  263,  259,
  283,  259,  269,  270,  271,  259,  283,  286,  282,  283,
  284,  285,  286,  260,  257,  282,  260,  284,  285,  286,
  262,  260,  269,  270,  271,  260,    0,  269,  270,  271,
  260,  274,  275,  276,  277,  278,  262,  284,  285,  286,
   -1,   -1,  283,  269,  270,  271,  274,  275,  276,  277,
  278,
};
}
final static short YYFINAL=3;
final static short YYMAXTOKEN=287;
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
"PARA","MAIOR","MENOR","ABRE_PARENTESES","FECHA_PARENTESES","SE","SENAO",
"ENQUANTO","NUMERO",
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
};

//#line 110 "inicioCT.y"

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
//#line 343 "Parser.java"
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
//#line 51 "inicioCT.y"
{ System.out.println(val_peek(0).sval); }
break;
case 2:
//#line 53 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + "\n" + val_peek(0).sval; }
break;
case 3:
//#line 54 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + "\n" + val_peek(0).sval; }
break;
case 4:
//#line 55 "inicioCT.y"
{ yyval.sval = ""; }
break;
case 5:
//#line 57 "inicioCT.y"
{ yyval.sval = "int main() {\n " + val_peek(1).sval + "}\n"; }
break;
case 6:
//#line 59 "inicioCT.y"
{ yyval.sval = "#include " + val_peek(0).sval; }
break;
case 7:
//#line 61 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + val_peek(0).sval; }
break;
case 8:
//#line 62 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + val_peek(0).sval; }
break;
case 9:
//#line 63 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + val_peek(0).sval; }
break;
case 10:
//#line 64 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + val_peek(0).sval; }
break;
case 11:
//#line 65 "inicioCT.y"
{ yyval.sval = ""; }
break;
case 12:
//#line 67 "inicioCT.y"
{  yyval.sval = " int " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
case 13:
//#line 68 "inicioCT.y"
{  yyval.sval = " int " + val_peek(4).sval + "[" + val_peek(2).sval + "]" + ";\n" + val_peek(0).sval; }
break;
case 14:
//#line 69 "inicioCT.y"
{  yyval.sval = " float " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
case 15:
//#line 70 "inicioCT.y"
{  yyval.sval = " real " + val_peek(4).sval + "[" + val_peek(2).sval + "]" + ";\n" + val_peek(0).sval; }
break;
case 16:
//#line 71 "inicioCT.y"
{  yyval.sval = " char " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
case 17:
//#line 72 "inicioCT.y"
{  yyval.sval = " char " + val_peek(4).sval + "[" + val_peek(2).sval + "]" + ";\n" + val_peek(0).sval; }
break;
case 18:
//#line 73 "inicioCT.y"
{yyval.sval = ""; }
break;
case 19:
//#line 75 "inicioCT.y"
{  yyval.sval = " " + val_peek(3).sval + " = " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
case 20:
//#line 76 "inicioCT.y"
{  yyval.sval = " " + val_peek(2).sval + "++" + ";\n" + val_peek(0).sval; }
break;
case 21:
//#line 77 "inicioCT.y"
{  yyval.sval = " " + val_peek(2).sval + "--" + ";\n" + val_peek(0).sval; }
break;
case 22:
//#line 78 "inicioCT.y"
{  yyval.sval = val_peek(2).sval + "=" + val_peek(0).sval + ";\n"; }
break;
case 23:
//#line 79 "inicioCT.y"
{yyval.sval = ""; }
break;
case 24:
//#line 81 "inicioCT.y"
{yyval.sval = val_peek(0).sval;}
break;
case 25:
//#line 82 "inicioCT.y"
{yyval.sval = val_peek(0).sval;}
break;
case 26:
//#line 84 "inicioCT.y"
{ yyval.sval = val_peek(2).sval + " > " + val_peek(0).sval; }
break;
case 27:
//#line 85 "inicioCT.y"
{ yyval.sval = val_peek(2).sval + " < " + val_peek(0).sval; }
break;
case 28:
//#line 86 "inicioCT.y"
{ yyval.sval = val_peek(2).sval + " == " + val_peek(0).sval; }
break;
case 29:
//#line 87 "inicioCT.y"
{ yyval.sval = val_peek(3).sval + " >" + "= " + val_peek(0).sval; }
break;
case 30:
//#line 88 "inicioCT.y"
{ yyval.sval = val_peek(3).sval + " <" + "= " + val_peek(0).sval; }
break;
case 31:
//#line 89 "inicioCT.y"
{yyval.sval = ""; }
break;
case 32:
//#line 91 "inicioCT.y"
{ yyval.sval = " if " + "(" + val_peek(5).sval + ")" + "{\n" + val_peek(2).sval + " }\n" + val_peek(0).sval; }
break;
case 33:
//#line 92 "inicioCT.y"
{ yyval.sval = " else" + "if" + "(" + val_peek(5).sval + ")" + "{\n" + val_peek(2).sval + " }\n" + val_peek(0).sval; }
break;
case 34:
//#line 93 "inicioCT.y"
{ yyval.sval = " else" + "{\n" + val_peek(2).sval + "}\n" + val_peek(0).sval; }
break;
case 35:
//#line 94 "inicioCT.y"
{yyval.sval = ""; }
break;
case 36:
//#line 96 "inicioCT.y"
{ yyval.sval = "+" + val_peek(0).sval; }
break;
case 37:
//#line 97 "inicioCT.y"
{ yyval.sval = "-" + val_peek(0).sval; }
break;
case 38:
//#line 98 "inicioCT.y"
{ yyval.sval = "*" + val_peek(0).sval; }
break;
case 39:
//#line 99 "inicioCT.y"
{ yyval.sval = "/" + val_peek(0).sval; }
break;
case 40:
//#line 100 "inicioCT.y"
{ yyval.sval = "%" + val_peek(0).sval; }
break;
case 41:
//#line 101 "inicioCT.y"
{yyval.sval = ""; }
break;
case 42:
//#line 103 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + val_peek(0).sval; }
break;
case 43:
//#line 104 "inicioCT.y"
{ yyval.sval = "(" + val_peek(2).sval + ")" + val_peek(0).sval; }
break;
case 44:
//#line 105 "inicioCT.y"
{yyval.sval = ""; }
break;
case 45:
//#line 107 "inicioCT.y"
{yyval.sval = "while " + "(" + val_peek(4).sval + ")" + "{\n " + val_peek(1).sval + "}\n"; }
break;
//#line 672 "Parser.java"
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
