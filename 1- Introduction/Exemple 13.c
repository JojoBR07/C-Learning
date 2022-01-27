//13. Construa um algoritmo que :
//· Leia a cotação do dólar
//· Leia um valor em dólares
//· Converta esse valor para Real
//· Mostre o resultado

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

float dolar, valor, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Por gentilesa, informe a cotação do dolar: ");
    scanf("%f", &dolar);

    printf("Por gentilesa, informe o valor a ser convertido: ");
    scanf("%f", &valor);

    resultado = valor * dolar;
    printf("Resultado: R$ %.2f\n", resultado);

    getch();
    return 0;
}
