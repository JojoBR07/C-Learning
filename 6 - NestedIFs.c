#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

int n1,n2;
main(){
    setlocale(LC_ALL, "Portuguese");

	printf("Informe um valor inteiro: ");
	scanf("%d",&n1);
	printf("Informe outro valor inteiro: ");
	scanf("%d",&n2);
	if(n1>n2){
		printf("%d valor maior\n",n1);
	}
	if(n2>n1){
		printf("%d valor maior\n",n2);
	}
	if(n1==n2){
		printf("valores iguais\n");
	}
}
