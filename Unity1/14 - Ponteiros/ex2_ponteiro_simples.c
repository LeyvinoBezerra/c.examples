#include <stdio.h>
#include <stdlib.h>

// Prof: Bruno Monteiro
// Objetivo: exemplo simples de uso de ponteiro

int main()
{
    int  x = 10;
    int* p = NULL;
    
    // Lembre-se que toda vari�vel possui um endere�o na mem�ria 
	// (pois � na mem�ria RAM que ficam armazenados os programas em execu��o). 
    // Ponteiro � o nome que se d� a uma vari�vel que armazena um endere�o da mem�ria RAM.


	printf("tamanho de x = %d \n", sizeof(x) );
    printf("tamanho de p = %d \n", sizeof(p) );

    p = &x;

    printf("conteudo de x = %d \n", x);					// 10
    printf("endereco de x = %d \n", &x);				// endere�o de x
    printf("endereco da referencia de p = %d \n", p);	// endere�o de x
    printf("conteudo da referencia de p = %d \n", *p);	// 10
    printf("endereco de p = %d \n", &p);	// endereco da variavel p
    printf("\n");

    *p = *p - 1;	// Altero o conteudo de x usando o ponteiro p

    printf("conteudo de x = %d \n", x);					// 9
    printf("conteudo da referencia de p = %d \n", *p);	// 9

    printf("\n\n");
    system("pause");
    return 0;
}
