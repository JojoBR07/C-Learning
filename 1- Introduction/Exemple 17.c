//17. Escreva um algoritmo para trocar entre si os valores de duas variáveis A e B.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>


float A, B, troca;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Por gentilesa, informe o valor A: ");
    scanf("%f", &A);
    printf("Por gentilesa, informe o valor B: ");
    scanf("%f", &B);

    troca = A;
    A = B;
    B = troca;

    printf("Valor de A: %.2f\n", A);
    printf("Valor de B: %.2f\n", B);

    getch();
    return 0;
}
