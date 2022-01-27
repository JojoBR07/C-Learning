//18. Escreva um algoritmo que leia os dados para o parafuso A e para o parafuso B, isto é,
//o código, a quantidade de peças e o valor unitário de cada parafuso e a porcentagem de IPI
//(única) a ser acrescentada. Calcule e escreva o valor total a ser pago para cada peça e o valor total geral.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

float codA, qtnA, vlrA, IPIA, codB, qtnB, vlrB, IPIB, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Por gentilesa, informe o codigo para o parafuso A: ");
    scanf("%f", &codA);
    printf("Por gentilesa, informe a quantidade para o parafuso A: ");
    scanf("%f", &qtnA);
    printf("Por gentilesa, informe o valor para o parafuso A: ");
    scanf("%f", &vlrA);
    printf("Por gentilesa, informe o IPI  para o parafuso A: ");
    scanf("%f", &IPIA);

    resultado = (qtnA * vlrA) - (qtnA * vlrA) * IPIA;
    printf("Valor total: %.2f\n", resultado);

    printf("Por gentilesa, informe o codigo para o parafuso : ");
    scanf("%f", &codB);
    printf("Por gentilesa, informe a quantidade para o parafuso B: ");
    scanf("%f", &qtnB);
    printf("Por gentilesa, informe o valor para o parafuso B: ");
    scanf("%f", &vlrB);
    printf("Por gentilesa, informe o IPI para o parafuso B: ");
    scanf("%f", &IPIB);

    resultado = (qtnB * vlrB) - (qtnB * vlrB) * IPIB;
    printf("Valor total: %.2f\n", resultado);


    getch();
    return 0;
}
