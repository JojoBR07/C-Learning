//15) Construa um algoritmo para pagamento de comiss�o de vendedores de pe�as, levando-se em considera��o que sua comiss�o ser� de 5% do total da venda e que voc� tem os seguintes dados:
//� Identifica��o do vendedor
//� C�digo da pe�a
//� Pre�o unit�rio da pe�a
//� Quantidade vendida

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
