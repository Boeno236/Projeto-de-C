#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main (){
    // usar o setlocale
    setlocale(LC_ALL,"");
    // definindo algumas variáveis
    long a = 40;
    long b = 10;
    long c = 5;
    long d = 20;
    //imprimir as variáveis e o que deseja fazer com elas
    printf("As variáveis são: %d, %d, %d e %d\n", a, b, c, d);
    printf("A soma de %d e %d é = %d\n", a, b, a + b);
    printf("A subtração de %d e %d é = %d\n", d, b, d - b);
    printf("A multplicação de %d e %d é = %d\n", c, b, c*b);
    printf("A divisão entre %d e %d é = %d\n", a, d, a / d);
    printf("O resto da divisão entre %d e %d é = %d\n", a, b, a % b);
    printf("O valor Absoluto de %d é = %d\n", a, abs(a));
    system("pause");

}
