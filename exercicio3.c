#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");
    //crie um algoritmo que leia três valores de uma só vez
    //depois, coloque o resultado da multiplicação entre os três
    //em uma variável, depois exiba essa variável
    int nota1,nota2,nota3, resultado;
    printf("Digite três valores que serão multiplicados\n");
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    resultado = (nota1 * nota2 * nota3);
    printf("\nE a multiplicação entre eles é %d\n", resultado);
    system("pause");

}
