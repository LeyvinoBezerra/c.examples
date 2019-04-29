#include <stdio.h>
#include <stdlib.h>

// Prof: Bruno Monteiro
// Objetivo: atribuicoes simples

int main()
{    
	int meuVetor[100];      			  // Declara��o do vetor 
	
	printf("Atribuicao direta... \n");
	meuVetor[0] = 10;    // Atribui��o direta 
	meuVetor[1] = 20;    // Atribui��o direta 
	meuVetor[2] = 30;    // Atribui��o direta 
	
	printf("Imprimindo... \n");
	printf(" %d ", meuVetor[0] );  // Ser� impresso 10
	printf(" %d ", meuVetor[1] );  // Ser� impresso 20
	printf(" %d ", meuVetor[2] );  // Ser� impresso 30
	
	printf("\n");
	printf("Atribuicao pelo teclado... \n");
	
	printf("Elemento 0: ");
	scanf("%d", &meuVetor[0] );  // Atribui��o por dispositivo de entrada 
	
	printf("Elemento 1: ");
	scanf("%d", &meuVetor[1] );  // Atribui��o por dispositivo de entrada 
	
	printf("Elemento 2: ");
	scanf("%d", &meuVetor[2] );  // Atribui��o por dispositivo de entrada 
	
	printf("\n");
	printf("Imprimindo novamente... \n");
	printf(" %d ", meuVetor[0] );  
    printf(" %d ", meuVetor[1] );  
    printf(" %d ", meuVetor[2] );  
    
    system("pause");
    return 0;
}
