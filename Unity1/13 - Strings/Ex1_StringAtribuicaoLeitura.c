#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prof: Bruno Monteiro
// Objetivo: inicializa��o e atribuicao de strings

int main()
{
	//char str1[40] = {'B', 'r', 'u', 'n', 'o'};  	// Inicializa��o
    char str1[40] = "Bruno";  						// Inicializa��o
    char str2[40];
    char str3[40];
    char str4[40];

    strcpy(str2, "Maria eh str2"); 		// Atribui��o

    printf("Digite str3: ");
    scanf("%s", &str3); 				// Atribui��o por teclado. OBS: scanf n�o deve ser usado para ler strings que tenham espa�os.

	fflush(stdin); 						// Limpa o buffer de entrada (teclado)
	printf("Digite str4: ");
	//gets(str4);     				// Atribui��o por teclado. OBS: gets � usado quando a string possui espa�os.
	fgets(str4, 40, stdin); 
    
	printf("str1: %s \n", str1);
    printf("str2: %s \n", str2);
    printf("str3: %s \n", str3);
    printf("str4: %s \n", str4);

    system("pause");
    return 0;
}
