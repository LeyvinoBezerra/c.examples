#include <stdlib.h>
#include <stdio.h>

// Prof: Bruno Monteiro
// Objetivo: gerar n�meros aleat�rios. Pode haver repeti��o de n�meros.

int main()
{
    int i, roleta;
    int SIZE = 20;
    int limiteMinimo = 10;
    int limiteMaximo = 19;

	//srand(1);				// serao os mesmos numeros em todas as execucoes
	srand( time(NULL) );	// serao numeros diferentes em cada execucao
 	
	for (i=0; i<SIZE; i++) 
	{
        // gerar n�meros aleat�rios limiteMinimo a limiteMaximo
 		roleta = limiteMinimo + (rand() % (limiteMaximo - limiteMinimo + 1) );
 		printf("[%d] %d  ", i, roleta);
	}

    printf("\n\n");
    system("pause");
    return 0;
}
