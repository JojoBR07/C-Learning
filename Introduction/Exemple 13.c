//13. Construa um algoritmo que :
//� Leia a cota��o do d�lar
//� Leia um valor em d�lares
//� Converta esse valor para Real
//� Mostre o resultado

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float dolar, valor, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Por gentilesa, informe a cota��o do dolar: ");
    scanf("%f", &dolar);

    printf("Por gentilesa, informe o valor a ser convertido: ");
    scanf("%f", &valor);

    resultado = valor * dolar;
    printf("Resultado: R$ %.2f\n", resultado);

    getch();
    return 0;
}
