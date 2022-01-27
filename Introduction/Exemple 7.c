//7. Leia 4 números e mostre a média ponderada, sabendo-se que os pesos são respectivamente: 1, 2, 3 e 4.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float n1, n2, n3, n4, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);
    printf("Informe a quarta nota: ");
    scanf("%f", &n4);

    resultado = ((n1*1) + (n2*2) + (n3*3) + (n4*4)) / (1 + 2 + 3 + 4);

    printf("Resultado: %.2f\n", resultado);

    getch();
    return 0;
}
