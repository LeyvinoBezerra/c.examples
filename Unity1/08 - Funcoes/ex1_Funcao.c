#include <stdio.h> 
#include <stdlib.h>

// Prof: Bruno Monteiro
// Objetivo: exemplo simples de cria��o e uso de fun��es

int somaComRetorno(int n1, int n2) 
{ 
    int valor; 
 	
    valor = n1 + n2; 

    return valor; 
}

void somaSemRetorno(int n1, int n2) 
{ 
    int valor; 
 	
    valor = n1 + n2; 
	printf("Resultado Dentro = %d \n\n", valor); 
}

int main() 
{ 
    int r; 
 
    somaSemRetorno(3 , 5); 
    
    r = somaComRetorno(3 , 5); 
    printf("Resultado Fora = %d \n\n", r); 
 	 	 	
 	system("pause");
    return 0;    
} 


