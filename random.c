#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main (){
    // usar o setlocale
    setlocale(LC_ALL,"");
    // definindo algumas vari�veis
    long a = 40;
    long b = 10;
    long c = 5;
    long d = 20;
    //imprimir as vari�veis e o que deseja fazer com elas
    printf("As vari�veis s�o: %d, %d, %d e %d\n", a, b, c, d);
    printf("A soma de %d e %d � = %d\n", a, b, a + b);
    printf("A subtra��o de %d e %d � = %d\n", d, b, d - b);
    printf("A multplica��o de %d e %d � = %d\n", c, b, c*b);
    printf("A divis�o entre %d e %d � = %d\n", a, d, a / d);
    printf("O resto da divis�o entre %d e %d � = %d\n", a, b, a % b);
    printf("O valor Absoluto de %d � = %d\n", a, abs(a));
    system("pause");

}
