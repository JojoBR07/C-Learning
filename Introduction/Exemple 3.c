//3. Lê um número e mostra seu sucessor e seu antecessor na tela.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float numero, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe a número 1: ");
    scanf("%f",&numero);

    printf("Numero informado: %.2f\n", numero);
    printf("Numero antecessor: %.3f\n", numero-1);
    printf("Numero sucessor: %.1f\n", numero+1);

    getch();
    return 0;
}
