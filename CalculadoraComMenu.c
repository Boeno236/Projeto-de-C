#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //crie um algoritmo que leia dois valores, depois crie um menu (usando switch case) de 4 opções;
    //somar, subtrair, multiplicar e dividir, mostre o resultado da operação com os dois valores lidos

    float number1, number2;
    int answer;
    printf("Digite dois números:\n");
    scanf("%f %f", &number1, &number2);
    printf("Digite o número da operação que deseja fazer:\n");
    printf("1- Soma, 2- Subtração, 3-Multiplicação, 4- Divisão.\n");
    scanf("%d", &answer);
    switch(answer){
        case 1:
            printf("Você escolheu a soma, e o resultado é %.2f\n", number1 + number2);
            break;
        case 2:
            printf("Você escolheu a subtração, e o resultado é %.2f\n", number1 - number2);
            break;
        case 3:
            printf("Você escolheu a multiplicação, e o resultado é %.2f\n", number1 * number2);
            break;
        case 4:
            printf("Você escolheu a divisão, e o resultado é %.2f\n", number1 / number2);
            break;
        default:
        printf("Opção inválida!");
    }system("pause");

}
