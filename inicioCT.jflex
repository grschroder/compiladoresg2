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
":=" { return Parser.ATRIBUIR; }
"++" { return Parser.INCREMENTO; }
"--" { return Parser.DECREMENTO; }
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
