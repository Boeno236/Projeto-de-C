#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    int i = 10;
//crie um algoritmo que imprima os numeros de 10 até 0 de forma regressiva (usando While, do while ou for)
   while(i >= 0){
        printf("%d\n", i);
        i--;
   }

    i = 10;
    do{
        printf("%d\n", i);
        i--;

    }while(i >= 0);

    for (i = 10;  i >= 0; i--){
        printf("%d\n", i);
    }
}
