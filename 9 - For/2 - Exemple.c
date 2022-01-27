#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int n;

int main(){
    setlocale(LC_ALL, "Portuguese");

    for(int i = 1; i <= 10; i++){
        printf("Informe o número %d: \n", i);
        scanf("%d", &n);

        if((n%2)==0){
            printf("%d é par\n", n);
        }else if((n%1)==0){
            printf("%d é ímpar\n", n);
        }
    }

getch();
return 0;
}

