//6. Lê dois números e mostre os seguintes resultados: divisão do primeiro pelo segundo.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float n1, n2, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe um numero: ");
    scanf("%f", &n1);
    printf("Informe outro numero: ");
    scanf("%f", &n2);

    resultado = n1 / n2;
    printf("Resultado: %.2f\n", resultado);

    getch();
    return 0;
}
