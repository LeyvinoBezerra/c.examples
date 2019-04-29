#include <stdio.h>
#include <stdlib.h>

// Prof: Bruno Monteiro
// Objetivo: tamanho de um vetor.


int main()
{
	int i;
	int tam = 0;

	// INCIALIZA��O DE VETOR
	// O tamanho � definido pela quantidade de elementos
    int vetor[] = {1, 3, 5, 7, 9};

	// Como saber o tamanho de um vetor (de tipo primitivo) ?
	// ATEN��O! Isso s� pode ser feito na fun��o onde o vetor foi declarado!
	// ATEN��O! Se este vetor for passado como par�metro em uma fun��o, 
	// pois a fun��o que o recebe, vai receber apenas um ponteiro para o in�cio do vetor.
	tam = sizeof(vetor) / sizeof(int);
	printf("tam = %d \n", tam );

	// EXIBIR VETOR (cuidado com as fronteiras):
    for(i=0; i < tam; i++) {
        printf(" %d ", vetor[i]);
    }

    printf("\n\n");
    system("pause");

    return 0;
}
