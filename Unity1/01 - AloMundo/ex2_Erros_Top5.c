#include <stdio.h> 	 
#include <stdlib.h>	 
#include <math.h>	 // 5: digitar errado nomes de bibliotecas ou fun��es ou vari�veis

// Prof: Bruno Monteiro
// Objetivo: destacar os erros mais comuns

int main()	
{
	int n;
	float raiz;	 // 2: esquecer de declarar vari�vel ou errar seu tipo ou marcador em scanf e printf
	
    printf("Digite um nuero: ");  
	scanf("%d", &n);	// 3: esquecer & no scanf

	raiz = sqrt( n );
	printf("Raiz quadrada de %d = %f \n\n", n, raiz);

    system("pause");	// 1: esquecer o ponto e virgula no final de cada instru��o	
    return 0;	
}	// 4: n�o fechar ( ) ou { } ou ' ' ou " " 

