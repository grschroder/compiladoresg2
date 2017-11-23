import java.io.*;

%%

%byaccj

%{

	// Armazena uma referencia para o parser
	private Parser yyparser;

	// Construtor recebendo o parser como parametro adicional
	public Yylex(Reader r, Parser yyparser){
		this(r);
		this.yyparser = yyparser;
	}	

%}

NL = \n | \r | \r\n

%%

funcao_principal { return Parser.FUNCAO_PRINCIPAL; }
incluir	{ return Parser.INCLUIR; }
inteiro { return Parser.INTEIRO; }
real	{ return Parser.REAL; }
caracter { return Parser.CARACTER; }
\<.*\>	{ yyparser.yylval = new ParserVal(yytext());
		  return Parser.INCLUSAO_ARQUIVO; }
"{"	{ return Parser.ABRE_CHAVES; }
"}" { return Parser.FECHA_CHAVES; }
"[" { return Parser.ABRE_COLCHETES; }
"]" { return Parser.FECHA_COLCHETES; }
"(" { return Parser.ABRE_PARENTESES; }
")" { return Parser.FECHA_PARENTESES; }
":=" { return Parser.ATRIBUIR; }
"++" { return Parser.INCREMENTO; }
"--" { return Parser.DECREMENTO; }
"+" { return Parser.MAIS; }
"-" { return Parser.MENOS; }
"\*" { return Parser.MULTIPLICADO; }
"\/" { return Parser.DIVIDIDO; }
"\%" { return Parser.RESTO; }
"\>" { return Parser.MAIOR; }
"\<" { return Parser.MENOR; }
"="	{ return Parser.IGUAL; }
"\;" { return Parser.PONTO_VIRGULA; }
":" { return Parser.DOIS_PONTOS; }
"\'" { return Parser.ASPAS_SIMPLES; }
se { return Parser.SE; }
senao { return Parser.SENAO; }
enquanto { return Parser.ENQUANTO; }
faca { return Parser.FACA; }
ate { return Parser.ATE; }
para { return Parser.PARA; }
caso { return Parser.CASO; }
opcao { return Parser.OPCAO; }
fim_opcao { return Parser.FIM_OPCAO; }
\'[a-z]\' { 
			yyparser.yylval = new ParserVal(yytext());
			return Parser.CARACTER_ENTRE_ASPAS;			
		  }
[a-zA-Z][a-zA-Z0-9]*	{ 
		//System.out.println(""+yytext());
		yyparser.yylval = new ParserVal(yytext());
		return Parser.IDENTIFICADOR;
	}
[0-9]+ { 
		yyparser.yylval = new ParserVal(yytext());
		return Parser.NUMERO;
	}

{NL}|" "|\t	{  }
