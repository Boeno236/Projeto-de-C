#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    //Crie um algoritmo que leia duas notas e dê a média entre elas
    int a = 0;
    int b = 0;
    printf("Vamos tirar a média entre dois números.\n");
    printf("Digite o primeiro número.\n");
    scanf("%d", &a);
    printf("O primeiro número então é = %d\n", a);
    printf("Agora digite o segundo número.\n");
    scanf("%d", &b);
    printf("O segundo número então é = %d\n", b);
    float c = (a + b)/2;
    printf("A média entre os números é %f\n", c);
}
