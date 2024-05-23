#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    //Crie um algoritmo que leia 2 notas e diga o valor absoluto da diferença entre elas
    int a = 0;
    int b = 0;
    printf("Vamos tirar o valor asbsoluto da diferença de dois números\n");
    printf("Diga o primeiro número:\n");
    scanf("%d", &a);
    printf("O primeiro número é %d\n", a);
    printf("Agora, diga o segundo número:\n");
    scanf("%d", &b);
    printf("O segundo número é %d\n", b);
    int c = (a - b);
    printf("A diferença entre os númeors é %d e seu valor absoluto é %d\n", c, abs(c));
    system("pause");
}
