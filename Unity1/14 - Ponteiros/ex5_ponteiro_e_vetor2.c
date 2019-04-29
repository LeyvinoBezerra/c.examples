#include <stdio.h>
#include <stdlib.h>
#define SIZE 3

// Prof: Bruno Monteiro
// Objetivo: exemplo de uso de: vetor, ponteiro e aloca��o din�mica

// OBS: o "pacote" que transita � sempre uma posi��o de mem�ria, por isso, precisamos usar ponteiro para armazenar esse endere�o.
int* dobrar(int* pEntrada, int tam)
{
	int i;
    int* pCopia = (int*) calloc(tam, sizeof(int) );
	
	//CUIDADO! A fun��o que recebe um vetor n�o sabe seu tamanho, pois, recebe apenas o endere�o do primeiro elemento!!!
	printf("Tamanho = %d \n ", sizeof(pEntrada) );
	
	for(i=0; i < tam; i++) {
        pEntrada[i] = pEntrada[i] * 2;
        pCopia[i] = pEntrada[i];
    }

    return pCopia;
}

int main()
{
	int i;
	int vetor1[] = {1, 3, 5};
    int* vetor2 = NULL;
		
	vetor2 = dobrar(vetor1, SIZE);
	
	// EXIBIR VETOR:
    printf("Exibindo o bloco (vetor1): %d\n", vetor1);
    for(i=0; i < SIZE; i++) {
        printf(" %d ", vetor1[i]);
    }

    printf("\n");
    printf("Exibindo o bloco (vetor2): %d\n", vetor2);
    for(i=0; i < SIZE; i++) {
        printf(" %d ", vetor2[i]);
    }

    // DESALOCANDO (pode?)
    //free(vetor1); //NAO PODE!
    free(vetor2);

    printf("\n");

    // EXIBIR VETOR:
    printf("Exibindo o bloco (vetor1): %d\n", vetor1);
    for(i=0; i < SIZE; i++) {
        printf(" %d ", vetor1[i]);
    }

    printf("\n");
    printf("Exibindo o bloco (vetor2): %d\n", vetor2);
    for(i=0; i < SIZE; i++) {
        printf(" %d ", vetor2[i]);
    }

    printf("\n");
	system("pause");

	return 0;
}
