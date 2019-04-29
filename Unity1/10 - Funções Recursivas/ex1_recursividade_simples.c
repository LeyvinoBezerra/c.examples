#include <stdio.h>
#include <windows.h>

// Prof: Bruno Monteiro
// Objetivo: exemplo simples de recursividade
// Aten��o: definir com cuidado a condi��o de parada

void regressiva(int n)
{
     if (n == 0) // Condi��o de parada
     {
         printf("PAROU! \n\a");
     }
     else
     {
         Sleep(3000);
         printf("Empilhando... %d \n", n);
         regressiva(n-1);   // chamada recursiva
         Sleep(3000);
         printf("voltei ;) ");
     }

     Sleep(3000);
     printf("Desempilhando... %d \n", n);
}


int main()
{
     regressiva(4);     // chamada da fun��o

     system("pause");
     return 0;
}


