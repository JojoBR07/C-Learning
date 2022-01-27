//11. Calcule e mostre a área de um triângulo (área é igual a (base x altura) dividido por 2)

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float base, altura, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe a base do triangulo: ");
    scanf("%f", &base);
    printf("Informe a altura do triangulo: ");
    scanf("%f", &altura);

    resultado = (base * altura)/2;
    printf("Area: %.2f\n", resultado);

    getch();
    return 0;
}
