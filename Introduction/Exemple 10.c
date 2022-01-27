//10. Lê o raio de um círculo e mostre como saída o perímetro (2*π*Raio) e a área (π*Raio2).

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

#define PI 3.14159265358979323846

float raio, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe a raio do círculo: ");
    scanf("%f", &raio);

    resultado = 2*PI*raio;
    printf("Perímetro: %.2f\n", resultado);

    resultado = PI*(raio*raio);
    printf("Area: %.2f\n", resultado);

    getch();
    return 0;
}
