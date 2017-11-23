%{
	import java.io.*;
	import java.util.*;
%}
/* BYACC Declarations */
%token <sval> IDENTIFICADOR
%token <sval> INCLUSAO_ARQUIVO
%token ABRE_CHAVES
%token FECHA_CHAVES
%token FUNCAO_PRINCIPAL
%token ABRE_COLCHETES
%token FECHA_COLCHETES
%token DOIS_PONTOS
%token PONTO_VIRGULA
%token IGUAL
%token ATRIBUIR
%token INCLUIR
%token INTEIRO
%token REAL
%token CARACTER
%token INCREMENTO
%token DECREMENTO
%token MAIS
%token MENOS
%token MULTIPLICADO
%token DIVIDIDO
%token RESTO
%token MAIOR
%token MENOR
%token ABRE_PARENTESES
%token FECHA_PARENTESES
%token SE
%token SENAO
%token ENQUANTO
%token FACA
%token ATE
%token PARA
%token CASO
%token OPCAO
%token FIM_OPCAO
%token ASPAS_SIMPLES
%token <sval> CARACTER_ENTRE_ASPAS
%token <sval> NUMERO
%type <sval> programa
%type <sval> funcao_principal
%type <sval> inclusao
%type <sval> comandos
%type <sval> declaracao
%type <sval> atribuicao
%type <sval> condicao
%type <sval> condicionais
%type <sval> tipo
%type <sval> operacoes
%type <sval> expressao
%type <sval> lacos
%type <sval> opcoes

%%
inicio : programa	 { System.out.println($1); }

programa : inclusao programa	{ $$ = $1 + "\n" + $2; }
		 | funcao_principal programa { $$ = $1 + "\n" + $2; }
	     |					{ $$ = ""; }

funcao_principal : FUNCAO_PRINCIPAL ABRE_CHAVES comandos FECHA_CHAVES { $$ = "int main() {\n " + $3 + "}\n"; }

inclusao : INCLUIR INCLUSAO_ARQUIVO	{ $$ = "#include " + $2; }

comandos : declaracao comandos	 { $$ = $1 + $2; }
		 | atribuicao comandos   { $$ = $1 + $2; }
		 | condicionais comandos { $$ = $1 + $2; }
		 | lacos comandos { $$ = $1 + $2; }
		 |	{ $$ = ""; }

declaracao : INTEIRO IDENTIFICADOR declaracao {  $$ = " int " + $2 + ";\n" + $3; }
		   | INTEIRO IDENTIFICADOR ABRE_COLCHETES tipo FECHA_COLCHETES declaracao {  $$ = " int " + $2 + "[" + $4 + "]" + ";\n" + $6; }
		   | REAL IDENTIFICADOR declaracao {  $$ = " float " + $2 + ";\n" + $3; }
		   | REAL IDENTIFICADOR ABRE_COLCHETES tipo FECHA_COLCHETES declaracao {  $$ = " real " + $2 + "[" + $4 + "]" + ";\n" + $6; }
		   | CARACTER IDENTIFICADOR declaracao {  $$ = " char " + $2 + ";\n" + $3; }
		   | CARACTER IDENTIFICADOR ABRE_COLCHETES tipo FECHA_COLCHETES declaracao {  $$ = " char " + $2 + "[" + $4 + "]" + ";\n" + $6; }
		   | {$$ = ""; }

atribuicao : IDENTIFICADOR ATRIBUIR tipo atribuicao {  $$ = " " + $1 + " = " + $3 + ";\n" + $4; }
		   | IDENTIFICADOR INCREMENTO atribuicao {  $$ = " " + $1 + "++" + ";\n" + $3; }
		   | IDENTIFICADOR DECREMENTO atribuicao {  $$ = " " + $1 + "--" + ";\n" + $3; }
		   | IDENTIFICADOR ATRIBUIR expressao {  $$ = $1 + "=" + $3 + ";\n"; }
		   //| IDENTIFICADOR ATRIBUIR tipo PONTO_VIRGULA atribuicao {  $$ = " " + $1 + " = " + $3 + ";" + $5; }
		   | {$$ = ""; }

tipo		: IDENTIFICADOR {$$ = $1;}
			| NUMERO		{$$ = $1;}
		   
condicao   : tipo MAIOR tipo { $$ = $1 + " > " + $3; }
		   | tipo MENOR tipo { $$ = $1 + " < " + $3; }
		   | tipo IGUAL tipo { $$ = $1 + " == " + $3; }
		   | tipo MAIOR IGUAL tipo { $$ = $1 + " >" + "= " + $4; }
		   | tipo MENOR IGUAL tipo { $$ = $1 + " <" + "= " + $4; }
		   | {$$ = ""; }

//é possível começar com senao -- ARRUMAR --
condicionais : SE ABRE_PARENTESES condicao FECHA_PARENTESES ABRE_CHAVES comandos FECHA_CHAVES condicionais { $$ = " if " + "(" + $3 + ")" + "{\n" + $6 + " }\n" + $8; }
			 | SENAO SE ABRE_PARENTESES condicao FECHA_PARENTESES ABRE_CHAVES comandos FECHA_CHAVES condicionais { $$ = " else" + "if" + "(" + $4 + ")" + "{\n" + $7 + " }\n" + $9; }
			 | SENAO ABRE_CHAVES comandos FECHA_CHAVES condicionais { $$ = " else" + "{\n" + $3 + "}\n" + $5; }
			 | CASO ABRE_PARENTESES IDENTIFICADOR FECHA_PARENTESES ABRE_CHAVES opcoes FECHA_CHAVES { $$ = "switch" + "(" + $3 + ")" + "{\n" + $6 + "}\n"; }
		     | {$$ = ""; }
//referente ao switch case
opcoes		: OPCAO NUMERO DOIS_PONTOS comandos FIM_OPCAO opcoes { $$ = "case " + $2 + ":\n" + $4 + " break;\n" + $6; }
			| OPCAO CARACTER_ENTRE_ASPAS DOIS_PONTOS comandos FIM_OPCAO opcoes { $$ = "case " + $2 + ":\n" + $4 + " break;\n" + $6; }
			| {$$ = ""; }

operacoes	: MAIS expressao { $$ = "+" + $2; }
			| MENOS expressao { $$ = "-" + $2; }
			| MULTIPLICADO expressao { $$ = "*" + $2; }
			| DIVIDIDO expressao { $$ = "/" + $2; }
			| RESTO expressao { $$ = "%" + $2; }
		    | {$$ = ""; }
			
expressao	: tipo operacoes { $$ = $1 + $2; }
			| operacoes ABRE_PARENTESES expressao FECHA_PARENTESES operacoes { $$ = "(" + $3 + ")" + $5; }
			| {$$ = ""; }
			
lacos		: ENQUANTO ABRE_PARENTESES condicao FECHA_PARENTESES ABRE_CHAVES comandos FECHA_CHAVES {$$ = "while " + "(" + $3 + ")" + "{\n " + $6 + "}\n"; }
			| FACA ABRE_CHAVES comandos FECHA_CHAVES ATE ABRE_PARENTESES condicao FECHA_PARENTESES { $$ = "do" + "{\n " + $3 + "}" + " while" + "(" + $7 + ")\n"; } 
			| PARA ABRE_PARENTESES FECHA_PARENTESES ABRE_CHAVES comandos FECHA_CHAVES { $$ = "for" + "(" + ")" + "{" + $5 + "}\n"; }
			| {$$ = ""; }

%%

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
