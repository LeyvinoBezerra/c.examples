#include <stdio.h> 
#include <stdlib.h> 

// Prof: Bruno Monteiro
// Objetivo: exemplificar estrutura condicional if 
// Observa��o: percebam que o bloco else � opcional

int main() 
{ 
    float media; 
    
    printf("Qual a media? "); 
    scanf("%f", &media); 
 
    if(media >= 7) 
	{
    	printf("Aprovado  \n");
	}
	
    system("pause");
    return 0;    
} 
