#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main (){
    //imprime a palavra "Oi na tela"
    setlocale(LC_ALL,"");
    int a = 50;
    printf("Olá, o valor de a no momento é %d\n", a);
    printf("Digite um novo valor para a:\n");
    scanf("%d", &a);
    printf("O valor de a agora é %d, obrigado.", a);

}
