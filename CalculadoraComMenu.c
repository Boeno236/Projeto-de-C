#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //crie um algoritmo que leia dois valores, depois crie um menu (usando switch case) de 4 op��es;
    //somar, subtrair, multiplicar e dividir, mostre o resultado da opera��o com os dois valores lidos

    float number1, number2;
    int answer;
    printf("Digite dois n�meros:\n");
    scanf("%f %f", &number1, &number2);
    printf("Digite o n�mero da opera��o que deseja fazer:\n");
    printf("1- Soma, 2- Subtra��o, 3-Multiplica��o, 4- Divis�o.\n");
    scanf("%d", &answer);
    switch(answer){
        case 1:
            printf("Voc� escolheu a soma, e o resultado � %.2f\n", number1 + number2);
            break;
        case 2:
            printf("Voc� escolheu a subtra��o, e o resultado � %.2f\n", number1 - number2);
            break;
        case 3:
            printf("Voc� escolheu a multiplica��o, e o resultado � %.2f\n", number1 * number2);
            break;
        case 4:
            printf("Voc� escolheu a divis�o, e o resultado � %.2f\n", number1 / number2);
            break;
        default:
        printf("Op��o inv�lida!");
    }system("pause");

}
