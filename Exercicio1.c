#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    //Crie um algoritmo que leia duas notas e d� a m�dia entre elas
    int a = 0;
    int b = 0;
    printf("Vamos tirar a m�dia entre dois n�meros.\n");
    printf("Digite o primeiro n�mero.\n");
    scanf("%d", &a);
    printf("O primeiro n�mero ent�o � = %d\n", a);
    printf("Agora digite o segundo n�mero.\n");
    scanf("%d", &b);
    printf("O segundo n�mero ent�o � = %d\n", b);
    float c = (a + b)/2;
    printf("A m�dia entre os n�meros � %f\n", c);
}
