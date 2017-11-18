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
public final static short IGUAL=265;
public final static short ATRIBUIR=266;
public final static short INCLUIR=267;
public final static short INTEIRO=268;
public final static short REAL=269;
public final static short CARACTER=270;
public final static short INCREMENTO=271;
public final static short DECREMENTO=272;
public final static short MAIS=273;
public final static short MENOS=274;
public final static short PARA=275;
public final static short MAIOR=276;
public final static short MENOR=277;
public final static short ABRE_PARENTESES=278;
public final static short FECHA_PARENTESES=279;
public final static short SE=280;
public final static short SENAO=281;
public final static short NUMERO=282;
public final static short YYERRCODE=256;
final static short yylhs[] = {                           -1,
    0,    1,    1,    1,    2,    3,    4,    4,    4,    4,
    5,    5,    5,    5,    5,    5,    5,    5,    5,    5,
    6,    6,    6,    6,    6,    6,   10,   10,    8,    8,
    8,    8,    8,    8,    9,    9,    9,    9,    7,    7,
};
final static short yylen[] = {                            2,
    1,    2,    2,    0,    4,    2,    2,    2,    2,    0,
    3,    6,    6,    3,    6,    6,    3,    6,    6,    0,
    4,    4,    3,    3,    3,    0,    1,    1,    3,    3,
    3,    4,    4,    0,    8,    9,    5,    0,    4,    4,
};
final static short yydefred[] = {                         0,
    0,    0,    0,    1,    0,    0,    0,    6,    3,    2,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    5,
    7,    8,    9,    0,    0,   25,   23,   24,    0,   11,
    0,   14,    0,   17,   27,   28,    0,    0,    0,    0,
    0,    0,   21,   22,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   31,    0,   29,    0,   30,   37,    0,
    0,   39,   40,   12,   15,   16,   18,   19,    0,   32,
   33,    0,    0,    0,   35,    0,   36,
};
final static short yydgoto[] = {                          3,
    4,    5,    6,   17,   18,   19,   36,   47,   20,   48,
};
final static short yysindex[] = {                      -241,
 -236, -237,    0,    0, -241, -241, -240,    0,    0,    0,
 -186, -244, -239, -232, -251, -235, -229, -240, -240, -240,
 -248, -184, -184, -178, -173, -169, -246, -240, -197,    0,
    0,    0,    0, -211, -184,    0,    0,    0, -188,    0,
 -245,    0, -243,    0,    0,    0, -181, -194, -152, -246,
 -148, -147,    0,    0, -151, -150, -149, -146, -145, -144,
 -246, -250, -249, -213, -168, -141, -141, -209, -209, -209,
 -209, -209, -240,    0, -246,    0, -246,    0,    0, -140,
 -171,    0,    0,    0,    0,    0,    0,    0, -139,    0,
    0, -240, -213, -138,    0, -213,    0,
};
final static short yyrindex[] = {                       120,
    0,    0,    0,    0,  120,  120, -137,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -137, -137, -137,
    0, -216, -216, -238, -238, -238, -155, -137,    0,    0,
    0,    0,    0, -216, -216,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -155,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -191,    0,    0,    0, -238, -238, -238,
 -238, -238, -137,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -137, -191,    0,    0, -191,    0,
};
final static short yygindex[] = {                         0,
   99,    0,    0,  -18,  -21,   53,   40,   75,  -58,   -5,
};
final static int YYTABLESIZE=125;
static short yytable[];
static { yytable();}
static void yytable(){
yytable = new short[]{                         31,
   32,   33,   40,   42,   44,   79,   45,   45,   34,   49,
   45,   56,   24,   58,   75,   77,   11,   25,   20,    1,
    8,   20,    7,   28,   26,    2,   27,   12,   13,   14,
   30,   46,   46,   35,   95,   46,   57,   97,   59,   15,
   16,   20,   20,   26,   29,   11,   84,   85,   86,   87,
   88,   26,   26,   26,   89,   74,   76,   78,   12,   13,
   14,   51,   52,   26,   26,   38,   15,   16,   38,   90,
   61,   91,   11,   94,   37,   38,   38,   38,   38,   21,
   50,   62,   63,   39,   22,   23,   53,   54,   41,   12,
   13,   14,   43,   55,   12,   13,   14,   60,   12,   13,
   14,   51,   52,    9,   10,   82,   83,   64,   66,   67,
   80,   68,   69,   70,   73,   81,   71,   72,   92,    4,
   93,   96,   10,   34,   65,
};
}
static short yycheck[];
static { yycheck(); }
static void yycheck() {
yycheck = new short[] {                         18,
   19,   20,   24,   25,   26,   64,  257,  257,  257,   28,
  257,  257,  257,  257,  265,  265,  257,  257,  257,  261,
  258,  260,  259,  259,  257,  267,  278,  268,  269,  270,
  260,  282,  282,  282,   93,  282,  282,   96,  282,  280,
  281,  280,  281,  260,  280,  257,   68,   69,   70,   71,
   72,  268,  269,  270,   73,   61,   62,   63,  268,  269,
  270,  273,  274,  280,  281,  257,  280,  281,  260,   75,
  265,   77,  257,   92,   22,   23,  268,  269,  270,  266,
  278,  276,  277,  262,  271,  272,   34,   35,  262,  268,
  269,  270,  262,  282,  268,  269,  270,  279,  268,  269,
  270,  273,  274,    5,    6,   66,   67,  260,  257,  257,
  279,  263,  263,  263,  259,  257,  263,  263,  259,    0,
  260,  260,  260,  279,   50,
};
}
final static short YYFINAL=3;
final static short YYMAXTOKEN=282;
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
"FUNCAO_PRINCIPAL","ABRE_COLCHETES","FECHA_COLCHETES","DOIS_PONTOS","IGUAL",
"ATRIBUIR","INCLUIR","INTEIRO","REAL","CARACTER","INCREMENTO","DECREMENTO",
"MAIS","MENOS","PARA","MAIOR","MENOR","ABRE_PARENTESES","FECHA_PARENTESES","SE",
"SENAO","NUMERO",
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
"comandos :",
"declaracao : INTEIRO IDENTIFICADOR declaracao",
"declaracao : INTEIRO IDENTIFICADOR ABRE_COLCHETES NUMERO FECHA_COLCHETES declaracao",
"declaracao : INTEIRO IDENTIFICADOR ABRE_COLCHETES NUMERO FECHA_COLCHETES declaracao",
"declaracao : REAL IDENTIFICADOR declaracao",
"declaracao : REAL IDENTIFICADOR ABRE_COLCHETES IDENTIFICADOR FECHA_COLCHETES declaracao",
"declaracao : REAL IDENTIFICADOR ABRE_COLCHETES NUMERO FECHA_COLCHETES declaracao",
"declaracao : CARACTER IDENTIFICADOR declaracao",
"declaracao : CARACTER IDENTIFICADOR ABRE_COLCHETES IDENTIFICADOR FECHA_COLCHETES declaracao",
"declaracao : CARACTER IDENTIFICADOR ABRE_COLCHETES NUMERO FECHA_COLCHETES declaracao",
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
"expressao : IDENTIFICADOR MAIS IDENTIFICADOR expressao",
"expressao : IDENTIFICADOR MENOS IDENTIFICADOR expressao",
};

//#line 98 "inicioCT.y"

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
//#line 313 "Parser.java"
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
//#line 44 "inicioCT.y"
{ System.out.println(val_peek(0).sval); }
break;
case 2:
//#line 46 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + "\n" + val_peek(0).sval; }
break;
case 3:
//#line 47 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + "\n" + val_peek(0).sval; }
break;
case 4:
//#line 48 "inicioCT.y"
{ yyval.sval = ""; }
break;
case 5:
//#line 50 "inicioCT.y"
{ yyval.sval = "int main() {\n " + val_peek(1).sval + "}\n"; }
break;
case 6:
//#line 52 "inicioCT.y"
{ yyval.sval = "#include " + val_peek(0).sval; }
break;
case 7:
//#line 54 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + val_peek(0).sval; }
break;
case 8:
//#line 55 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + val_peek(0).sval; }
break;
case 9:
//#line 56 "inicioCT.y"
{ yyval.sval = val_peek(1).sval + val_peek(0).sval; }
break;
case 10:
//#line 57 "inicioCT.y"
{ yyval.sval = ""; }
break;
case 11:
//#line 59 "inicioCT.y"
{  yyval.sval = " int " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
case 12:
//#line 60 "inicioCT.y"
{  yyval.sval = " int " + val_peek(4).sval + "[" + val_peek(2).sval + "]" + ";\n" + val_peek(0).sval; }
break;
case 13:
//#line 61 "inicioCT.y"
{  yyval.sval = " int " + val_peek(4).sval + "[" + val_peek(2).sval + "]" + ";\n" + val_peek(0).sval; }
break;
case 14:
//#line 62 "inicioCT.y"
{  yyval.sval = " float " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
case 15:
//#line 63 "inicioCT.y"
{  yyval.sval = " real " + val_peek(4).sval + "[" + val_peek(2).sval + "]" + ";\n" + val_peek(0).sval; }
break;
case 16:
//#line 64 "inicioCT.y"
{  yyval.sval = " real " + val_peek(4).sval + "[" + val_peek(2).sval + "]" + ";\n" + val_peek(0).sval; }
break;
case 17:
//#line 65 "inicioCT.y"
{  yyval.sval = " char " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
case 18:
//#line 66 "inicioCT.y"
{  yyval.sval = " char " + val_peek(4).sval + "[" + val_peek(2).sval + "]" + ";\n" + val_peek(0).sval; }
break;
case 19:
//#line 67 "inicioCT.y"
{  yyval.sval = " char " + val_peek(4).sval + "[" + val_peek(2).sval + "]" + ";\n" + val_peek(0).sval; }
break;
case 20:
//#line 68 "inicioCT.y"
{yyval.sval = ""; }
break;
case 21:
//#line 70 "inicioCT.y"
{  yyval.sval = " " + val_peek(3).sval + " = " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
case 22:
//#line 71 "inicioCT.y"
{  yyval.sval = " " + val_peek(3).sval + " = " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
case 23:
//#line 72 "inicioCT.y"
{  yyval.sval = val_peek(2).sval + "++" + ";\n" + val_peek(0).sval; }
break;
case 24:
//#line 73 "inicioCT.y"
{  yyval.sval = val_peek(2).sval + "--" + ";\n" + val_peek(0).sval; }
break;
case 25:
//#line 74 "inicioCT.y"
{  yyval.sval = val_peek(2).sval + "=" + val_peek(0).sval; }
break;
case 26:
//#line 75 "inicioCT.y"
{yyval.sval = ""; }
break;
case 27:
//#line 77 "inicioCT.y"
{yyval.sval = val_peek(0).sval;}
break;
case 28:
//#line 78 "inicioCT.y"
{yyval.sval = val_peek(0).sval;}
break;
case 29:
//#line 80 "inicioCT.y"
{ yyval.sval = val_peek(2).sval + " > " + val_peek(0).sval; }
break;
case 30:
//#line 81 "inicioCT.y"
{ yyval.sval = val_peek(2).sval + " < " + val_peek(0).sval; }
break;
case 31:
//#line 82 "inicioCT.y"
{ yyval.sval = val_peek(2).sval + " == " + val_peek(0).sval; }
break;
case 32:
//#line 83 "inicioCT.y"
{ yyval.sval = val_peek(3).sval + " >" + "= " + val_peek(0).sval; }
break;
case 33:
//#line 84 "inicioCT.y"
{ yyval.sval = val_peek(3).sval + " <" + "= " + val_peek(0).sval; }
break;
case 34:
//#line 85 "inicioCT.y"
{yyval.sval = ""; }
break;
case 35:
//#line 87 "inicioCT.y"
{ yyval.sval = " if " + "(" + val_peek(5).sval + ")" + "{\n" + val_peek(2).sval + " }\n" + val_peek(0).sval; }
break;
case 36:
//#line 88 "inicioCT.y"
{ yyval.sval = " else" + "if" + "(" + val_peek(5).sval + ")" + "{\n" + val_peek(2).sval + " }\n" + val_peek(0).sval; }
break;
case 37:
//#line 89 "inicioCT.y"
{ yyval.sval = " else" + "{\n" + val_peek(2).sval + "}\n" + val_peek(0).sval; }
break;
case 38:
//#line 90 "inicioCT.y"
{yyval.sval = ""; }
break;
case 39:
//#line 93 "inicioCT.y"
{ yyval.sval = val_peek(3).sval + " + " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
case 40:
//#line 94 "inicioCT.y"
{ yyval.sval = val_peek(3).sval + " - " + val_peek(1).sval + ";\n" + val_peek(0).sval; }
break;
//#line 622 "Parser.java"
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
