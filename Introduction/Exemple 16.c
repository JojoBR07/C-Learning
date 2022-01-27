//16. Desenvolva um algoritmo que lê o peso da carne que será vendida e  preço por quilo.
//O algoritmo deve calcular e imprimir na tela o total a pagar, o valor pago ao ICMS (17%) e o lucro líquido do açougue.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

#define ICMS  0.17

float peso, preco, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Por gentilesa, informe o peso da carne: ");
    scanf("%f", &peso);
    printf("Por gentilesa, informe o preço da carne: ");
    scanf("%f", &preco);

    resultado = (peso * preco);
    printf("Valor total: %.2f\n", resultado);

    resultado = (peso * preco) * ICMS;
    printf("Valor ICMS: %.2f\n", resultado);

    resultado = (peso * preco) - (peso * preco) * ICMS;
    printf("Valor liquido: %.2f\n", resultado);

    getch();
    return 0;
}
