#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int n = 1, total, i;
float media;

int main(){

setlocale(LC_ALL, "Portuguese");

while(n>0){
    printf("Informe um número positivo: ");
    scanf("%d", &n);
    i++;
    total = total+n;
}

media = total/i;
printf("Média: %.2f", media);

getch();
return 0;
}
