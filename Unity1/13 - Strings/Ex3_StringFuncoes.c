#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prof: Bruno Monteiro
// Objetivo: algumas fun��es de manipula��o de string

int main()
{    
	char meuNome[20];   // Declara��o do vetor de caracteres 
	char saudacao[20];  // Declara��o do vetor de caracteres 
	char mensagem[40];  // Declara��o do vetor de caracteres 
	 
	printf("Digite seu nome: ");
	gets(meuNome);    // A fun��o gets() � ideal para ler do teclado frases grandes com espa�os   
	 
	strcpy(mensagem, "");          // Inicializa com uma frase vazia, se n�o, vai ficar cheia de �lixo� 
	strcpy(saudacao, " Ola!");     // Inicializa com sua frase de sauda��o 
	
	strcat(mensagem, meuNome);     // Une as duas strings: �� + �Bruno � 
	strcat(mensagem, saudacao);    // Une as duas strings: �Bruno � + � Ola!� 
	 
	printf("Resultado: %s \n\n", mensagem);   // Exibe a string resultante: �Bruno Ola!�   
	    
    system("pause");
    return 0;
}
