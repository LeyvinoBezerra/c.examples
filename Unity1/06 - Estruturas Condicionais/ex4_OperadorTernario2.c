#include <stdio.h> 
#include <stdlib.h> 
#define MAIORIDADE 18

// Prof: Bruno Monteiro
// Objetivo: exemplificar operador condicional tern�rio

int main() 
{ 
    int idade; 
    int mesada;
    
    printf("Qual sua idade? "); 
    scanf("%d", &idade); 
 
 	// Condi��o ? BlocoVerdadeiro : BlocoFalso
 
 	mesada = (idade >= MAIORIDADE) ? 0 : 20;
    
    printf("Com %d anos, sua mesada eh: %d \n", idade, mesada);
    
    system("pause");
    return 0;    
} 
