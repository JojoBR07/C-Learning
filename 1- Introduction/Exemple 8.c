//8. Lê o saldo de uma aplicação e imprima o novo saldo, considerado o reajuste de 1%.

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

#define reajuste 0.01

float saldoAtual, novoSaldo, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Informe o saldo atual: ");
    scanf("%f", &saldoAtual);
    printf("Informe novo saldo: ");
    scanf("%f", &novoSaldo);

    resultado = novoSaldo + (novoSaldo * reajuste);

    printf("Resultado: %.2f\n", resultado);

    getch();
    return 0;
}
