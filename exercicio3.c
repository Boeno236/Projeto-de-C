#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL,"");
    //crie um algoritmo que leia tr�s valores de uma s� vez
    //depois, coloque o resultado da multiplica��o entre os tr�s
    //em uma vari�vel, depois exiba essa vari�vel
    int nota1,nota2,nota3, resultado;
    printf("Digite tr�s valores que ser�o multiplicados\n");
    scanf("%d %d %d", &nota1, &nota2, &nota3);
    resultado = (nota1 * nota2 * nota3);
    printf("\nE a multiplica��o entre eles � %d\n", resultado);
    system("pause");

}
