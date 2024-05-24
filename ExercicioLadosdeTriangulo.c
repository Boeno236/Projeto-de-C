#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    //Crie um algoritmo que leia três valores e informe se
    //eles são iguais entre si para formares os lados de um triângulo equilátero
    int lado1, lado2, lado3;
    printf("Digite os três valores do triângulo:\n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    if((lado1 == lado2)&&(lado2 == lado3)){
       printf("O triângulo é equilátero.\n");
    }else{
    printf("O triângulo não é equilátero.\n");
    }
    system("pause");
}
