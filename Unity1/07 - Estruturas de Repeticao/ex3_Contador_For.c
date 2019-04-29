#include <stdio.h>
#include <stdlib.h>

// Prof: Bruno Monteiro
// Objetivo: contador com a estrutura: for

int main()
{
    int cont, vi, vf; 
 
    printf("Qual o valor inicial: "); 
    scanf("%d", &vi); 
    printf("Qual o valor final: "); 
    scanf("%d", &vf); 
    
    for(cont = vi; cont <= vf; cont++)
    {
        printf("cont = %d (dentro) \n", cont);
        
        // Dica: pausar a execu��o para voc� ter tempo 
		// de entender o que est� acontecendo.
        getchar();  
    }
        
    // Dica: volte para a apostila e estude novamente os fluxogramas
    // que representam o comportamento das estruturas.
    printf("cont = %d (fora) \n", cont);
    
    system("pause");
    return 0;
}
