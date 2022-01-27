//12. Calcule o valor de uma prestação em atraso, utilizando a fórmula: PRESTAÇÃO = VALOR + (VALOR * (TAXA/100) * TEMPO).

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float VALOR, TAXA, TEMPO, RESULTADO;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe o valor da prestacao: ");
    scanf("%f", &VALOR);
    printf("Informe a taxa da prestacao: ");
    scanf("%f", &TAXA);
    printf("Informe o tempo que esta atrasada: ");
    scanf("%f", &TEMPO);

    RESULTADO = VALOR + (VALOR * (TAXA/100) * TEMPO);
    printf("Valor da prestacao em atraso: %.2f\n", RESULTADO);

    getch();
    return 0;
}
