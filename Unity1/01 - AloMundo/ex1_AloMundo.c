#include <stdio.h> 	 // Biblioteca que cont�m a fun��o printf()
#include <stdlib.h>	 // Biblioteca que cont�m a fun��o system()

// Prof: Bruno Monteiro
// Objetivo: explicar cada linha do programa mais simples na linguagem C

int main()	// Fun��o principal e primeira a ser chamada pelo sistema operacional quando o programa � executado
{	// Inicia bloco da fun��o main
    printf("Alow Mundo! \n");  // Fun��o de sa�da que exibe dados na tela.

    system("pause");	// Congela a tela do programa.
    return 0;			// Retorna 0 (para o sistema operacional), o que significa que tudo ocorreu bem.
    					// Voce pode usar return 1 em situa��es de erro.
}	// Encerra bloco da fun��o main
