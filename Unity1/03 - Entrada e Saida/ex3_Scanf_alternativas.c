#include <stdio.h>
#include <stdlib.h>

// Prof: Bruno Monteiro
// Objetivo: alertar para problema na leitura de strings.

// Motivo do gets nao ser mais suportado em alguns compiladores de C:
// http://www.cplusplus.com/reference/cstdio/gets/

int main()
{
	char nome[100];
	
	printf("Nome completo: ");
	scanf("%s", &nome);                    // %s pois � string. scanf s� l� caracteres at� o espa�o. 
	printf("nome = %s \n\n", nome);
    fflush(stdin);     
	
	printf("Nome completo: ");
	gets(nome);								// n�o � port�vel.
	printf("nome = %s \n\n", nome);
		
	// Alternativa
	printf("Nome completo: ");
	fgets(nome, 99, stdin);					// o segundo artgumento se refere a quantidade m�xima de caracteres que podem ser lidos.
	printf("nome = %s \n\n", nome);
	
	system("pause");
	return 0;
}
