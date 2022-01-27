//14. Desenvolva algoritmo que:
//· Leia 4 (quatro) números
//· Calcule o quadrado para cada um
//· Somem todos e
//· Mostre o resultado

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float n1, n2, n3, n4, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Por gentilesa, informe um número: ");
    scanf("%f", &n1);
    printf("Por gentilesa, informe outro número: ");
    scanf("%f", &n2);
    printf("Por gentilesa, informe outro número: ");
    scanf("%f", &n3);
    printf("Por gentilesa, informe putro número: ");
    scanf("%f", &n4);

    resultado = (n1*n1) + (n2*n2) + (n3*n3) + (n4*n4);
    printf("Resultado: %.2f\n", resultado);

    getch();
    return 0;
}
