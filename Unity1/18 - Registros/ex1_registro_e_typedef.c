#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Autor: prof. Bruno Monteiro
// Objetivo: criar um tipo baseado em um struct


// DECLARA��O DO REGISTRO E DO NOVO TIPO (jeito complicado)
// Primeiro declara-se uma estrutura (sFicha).
// Depois declara-se um novo tipo (tFicha) derivado da estrutura.
/*

struct sFicha
{
    char nome[100];
    float peso;
    float altura;
    float imc;
};

typedef struct sFicha tFicha;

*/


// DECLARA��O DO REGISTRO E DO NOVO TIPO (jeito simples. Prefiro dessa forma!)
// Declara-se diretamente um tipo (tFicha) derivado da estrutura (sFicha)
typedef struct sFicha
{
    char nome[100];
    float peso;
    float altura;
    float imc;
} tFicha;



int main()
{
    int i;
    tFicha fichaAcademia;	// declara-se uma vari�vel (fichaAcademia) do tipo que voc� acabou de criar (tFicha)

    // ATRIBUI��ES DOS CAMPOS DO REGISTRO
    
    printf("\nInforme o nome da pessoa : ");
    gets(fichaAcademia.nome);
    
    printf("Informe o peso de %s: ", fichaAcademia.nome);
    scanf("%f", &fichaAcademia.peso);
   
    printf("Informe a altura de %s: ", fichaAcademia.nome);
    scanf("%f", &fichaAcademia.altura);

    fichaAcademia.imc = fichaAcademia.peso / (fichaAcademia.altura * fichaAcademia.altura);


    // ACESSANDO CONTE�DOS DOS CAMPOS DO REGISTRO
    printf("\n\n------ EXIBINDO REGISTRO DE %s ------", fichaAcademia.nome);
    printf("\nPeso: %.1f ", fichaAcademia.peso);
    printf("\nAltura: %.2f ", fichaAcademia.altura);
    printf("\nIMC: %.2f ", fichaAcademia.imc);


    printf("\n\n");
    system("pause");
    return 0;
}

