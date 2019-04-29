#include <stdio.h>
#include <stdlib.h>

// Prof: Bruno Monteiro
// Objetivo: atribuicoes em uma matriz

int main()
{
	int matriz[2][3];      // Declara��o da matriz 2 linhas e 3 colunas

	//  0,0  0,1  0,2
	//  1,0  1,1  1,2

	//    0    1    2
	//   10   11   12

	printf("Atribuicao direta... \n");
	matriz[0][0] = 0;    // Atribui��o direta
	matriz[0][1] = 1;    // Atribui��o direta
	matriz[0][2] = 2;    // Atribui��o direta

	matriz[1][0] = 10;    // Atribui��o direta
	matriz[1][1] = 11;    // Atribui��o direta
	matriz[1][2] = 12;    // Atribui��o direta

	printf("Imprimindo... \n");
	printf(" %d ", matriz[0][0] );
	printf(" %d ", matriz[0][1] );
	printf(" %d ", matriz[0][2] );
	printf("\n");
	printf(" %d ", matriz[1][0] );
	printf(" %d ", matriz[1][1] );
	printf(" %d ", matriz[1][2] );

	printf("\n");
    system("pause");
    return 0;
}

