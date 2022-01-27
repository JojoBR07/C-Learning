//9. Entre com a base e a altura de um retângulo e mostre os resultados:

//Perímetro (Perímetro é igual à soma dos 4 lados)
//Área (Área é igual à base vezes altura)

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float base, altura, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe a base do retângulo: ");
    scanf("%f", &base);
    printf("Informe a altura do retângulo: ");
    scanf("%f", &altura);

    resultado = base * 2 + altura * 2;
    printf("Perimetro: %.2f\n", resultado);

    resultado = base * altura;
    printf("Area: %.2f\n", resultado);

    getch();
    return 0;
}
