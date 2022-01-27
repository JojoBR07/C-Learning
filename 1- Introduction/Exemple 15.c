//15) Construa um algoritmo para pagamento de comissão de vendedores de peças, levando-se em consideração que sua comissão será de 5% do total da venda e que você tem os seguintes dados:
//· Identificação do vendedor
//· Código da peça
//· Preço unitário da peça
//· Quantidade vendida

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

#define comissao 0.05

char peca[15];
float id, valor, quantidade, resultado;

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Por gentilesa, informe seu ID: ");
    scanf("%f", &id);
    printf("Por gentilesa, informe o produto: ");
    scanf("%s", &peca);
    printf("Por gentilesa, informe o valor: ");
    scanf("%f", &valor);
    printf("Por gentilesa, informe a quantidade: ");
    scanf("%f", &quantidade);

    resultado = (valor * quantidade) * comissao;
    printf("Resultado da comissao: %.2f\n", resultado);

    getch();
    return 0;
}
