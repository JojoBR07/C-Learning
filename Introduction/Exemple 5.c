//5. Lê um número e mostra a terça parte deste número.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float numero, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe um numero: ");
    scanf("%f", &numero);

    resultado = numero / 3;
    printf("Resultado: %.2f\n", resultado);

    getch();
    return 0;
}
