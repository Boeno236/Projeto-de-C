#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    //Crie um algoritmo que leia 2 notas e diga o valor absoluto da diferen�a entre elas
    int a = 0;
    int b = 0;
    printf("Vamos tirar o valor asbsoluto da diferen�a de dois n�meros\n");
    printf("Diga o primeiro n�mero:\n");
    scanf("%d", &a);
    printf("O primeiro n�mero � %d\n", a);
    printf("Agora, diga o segundo n�mero:\n");
    scanf("%d", &b);
    printf("O segundo n�mero � %d\n", b);
    int c = (a - b);
    printf("A diferen�a entre os n�meors � %d e seu valor absoluto � %d\n", c, abs(c));
    system("pause");
}
