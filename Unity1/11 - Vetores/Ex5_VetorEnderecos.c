#include <stdio.h>
#include <stdlib.h>
#define TAM 5

// Prof: Bruno Monteiro
// Objetivo: endere�o do vetor e dos seus elementos.

int main()
{
	int i;

	// DECLARA��O DE VETOR
    int vetor1[TAM];	// OBS: pode ser uma vari�vel, mas, seu valor deve ser definido em tempo de compila��o!

    // OBS: Para definir o tamanho de um vetor em tempo de execu��o (pelo usu�rio), voc� precisa usar Aloca��o din�mica de Mem�ria.

	// LER VETOR (cuidado com as fronteiras):
	printf("Lendo vetor... \n");
    for(i=0; i < TAM; i++)
    {
    	printf("Elemento %d : ", i);
        scanf("%d", &vetor1[i] );  // CUIDADO: n�o coloque espa�os em "%d"
    }

	// EXIBIR CONTE�DOS DOS ELEMENTOS DO VETOR (cuidado com as fronteiras):
	printf("\n Exibindo conteudos do vetor... \n");
    for(i=0; i < TAM; i++) {
        printf(" %d ", vetor1[i]);
    }

	system("pause");

	// EXIBIR ENDERE�OS DOS ELEMENTOS DO VETOR :
	printf("\n Exibindo enderecos do vetor... \n");
    for(i=0; i < TAM; i++) {
        printf(" %d ", &vetor1[i]);
    }

    system("pause");

    // EXIBIR ENDERE�OS DOS ELEMENTOS DO VETOR (do jeito avan�ado):
	printf("\n Exibindo enderecos do vetor (avan�ado))... \n");
    for(i=0; i < TAM; i++) {
        printf(" %d ", vetor1+i);
    }

    system("pause");

    // EXIBIR CONTEUDOS DOS ELEMENTOS DO VETOR (do jeito avan�ado):
	printf("\n Exibindo conteudos do vetor (avancado)... \n");
    for(i=0; i < TAM; i++)
    {
        printf(" %d ", *(vetor1+i) ); // vetor1[i]
    }

    printf("\n\n");
    system("pause");
    return 0;
}
