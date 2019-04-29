#include <stdio.h> 	 
#include <stdlib.h>	 

// Prof: Bruno Monteiro
// Objetivo: exemplificar escopo de vari�veis
// Observa��o: o uso de vari�veis globais pode deixar o c�digo confuso.

int varGlobal = 5;

void minhaFuncao(int varArgum) 
{ 
	printf("iniciando minhaFuncao \n"); 
	
    int varLocal = 20; 
    
    printf("varGlobal = %d \n", varGlobal); 
    printf("varLocal  = %d \n", varLocal); 
    printf("varArgum  = %d \n", varArgum);
	
	printf("encerrando minhaFuncao \n");  
} 

int main()	// Fun��o principal chamada quando o programa � executado
{
    printf("iniciando main \n");  
	
	minhaFuncao(40); // chama a fun��o "minhaFuncao"
    
    printf("encerrando main \n"); 
    
	system("pause");	
    
    return 0;
}
