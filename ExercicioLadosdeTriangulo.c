#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    //Crie um algoritmo que leia tr�s valores e informe se
    //eles s�o iguais entre si para formares os lados de um tri�ngulo equil�tero
    int lado1, lado2, lado3;
    printf("Digite os tr�s valores do tri�ngulo:\n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);
    if((lado1 == lado2)&&(lado2 == lado3)){
       printf("O tri�ngulo � equil�tero.\n");
    }else{
    printf("O tri�ngulo n�o � equil�tero.\n");
    }
    system("pause");
}
