#include <stdio.h> 
#include <stdlib.h> 

// Prof: Bruno Monteiro
// Objetivo: exemplificar operador condicional tern�rio
// Observa��o: compare este exemplo com o exemplo ex2_if_simples2.c

int main() 
{ 
    float media; 
    
    printf("Qual a media? "); 
    scanf("%f", &media); 
 
 	// Condi��o ? BlocoVerdadeiro : BlocoFalso
 
 	(media >= 7) ? printf("Aprovado \n") : printf("Recuperacao ou Reprovado \n"); 
    
    system("pause");
    
    return 0;    
} 
