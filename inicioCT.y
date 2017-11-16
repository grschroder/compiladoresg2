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
%token IGUAL
%token ATRIBUIR
%token INCLUIR
%token INTEIRO
%token REAL
%token CARACTER
%token INCREMENTO
%token DECREMENTO
%token <sval> NUMERO
%type <sval> programa
%type <sval> funcao_principal
%type <sval> inclusao
%type <sval> comandos
%type <sval> declaracao
%type <sval> atribuicao

%%
inicio : programa	 { System.out.println($1); }

programa : inclusao programa	{ $$ = $1 + "\n" + $2; }
		 | funcao_principal programa { $$ = $1 + "\n" + $2; }
	     |					{ $$ = ""; }

funcao_principal : FUNCAO_PRINCIPAL ABRE_CHAVES comandos FECHA_CHAVES { $$ = "int main() {\n " + $3 + "}\n"; }

inclusao : INCLUIR INCLUSAO_ARQUIVO	{ $$ = "#include " + $2; }

comandos : declaracao comandos	{ $$ = $1 + $2; }
		 | atribuicao comandos  { $$ = $1 + $2; }
		 |	{ $$ = ""; }

declaracao : INTEIRO IDENTIFICADOR declaracao {  $$ = " int " + $2 + ";\n" + $3; }
		   | INTEIRO IDENTIFICADOR ABRE_COLCHETES NUMERO FECHA_COLCHETES declaracao {  $$ = " int " + $2 + "[" + $4 + "]" + ";\n" + $6; }
		   | INTEIRO IDENTIFICADOR ABRE_COLCHETES NUMERO FECHA_COLCHETES declaracao {  $$ = " int " + $2 + "[" + $4 + "]" + ";\n" + $6; }
		   | REAL IDENTIFICADOR declaracao {  $$ = " float " + $2 + ";\n" + $3; }
		   | REAL IDENTIFICADOR ABRE_COLCHETES IDENTIFICADOR FECHA_COLCHETES declaracao {  $$ = " real " + $2 + "[" + $4 + "]" + ";\n" + $6; }
		   | REAL IDENTIFICADOR ABRE_COLCHETES NUMERO FECHA_COLCHETES declaracao {  $$ = " real " + $2 + "[" + $4 + "]" + ";\n" + $6; }		   
		   | CARACTER IDENTIFICADOR declaracao {  $$ = " char " + $2 + ";\n" + $3; }
		   | CARACTER IDENTIFICADOR ABRE_COLCHETES IDENTIFICADOR FECHA_COLCHETES declaracao {  $$ = " char " + $2 + "[" + $4 + "]" + ";\n" + $6; }
		   | CARACTER IDENTIFICADOR ABRE_COLCHETES NUMERO FECHA_COLCHETES declaracao {  $$ = " char " + $2 + "[" + $4 + "]" + ";\n" + $6; }
		   | {$$ = ""; }

atribuicao : IDENTIFICADOR ATRIBUIR IDENTIFICADOR atribuicao {  $$ = $1 + " = " + $3 + ";\n" + $4; }
		   | IDENTIFICADOR ATRIBUIR NUMERO atribuicao {  $$ = $1 + " = " + $3 + ";\n" + $4; }
		   | IDENTIFICADOR INCREMENTO atribuicao {  $$ = $1 + "++" + ";\n" + $3; }
		   | IDENTIFICADOR DECREMENTO atribuicao {  $$ = $1 + "--" + ";\n" + $3; }
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
