#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    for(int i = 1; i <= 10; i++){
        printf("9 X %d: %d\n", i, 9*i);
    }

getch();
return 0;
}
