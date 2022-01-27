#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int n1,n2;

int main(){
    setlocale(LC_ALL, "Portuguese");

	printf("Informe um valor inteiro: ");
	scanf("%d",&n1);
	printf("Informe outro valor inteiro: ");
	scanf("%d",&n2);
	printf("Soma: %d\n",n1+n2);
	printf("Produto: %d\n",n1*n2);
	printf("Diferenca: %d\n",n1-n2);
	if (n2!=0){
        printf("Divisao: %f\n",n1/(n2*1.0));
	}else printf("Erro: divisao por zero!\n");

	getch();
	return 0;
}
