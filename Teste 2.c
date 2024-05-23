#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
void main (){
    //setlocale(LC_ALL,"") faz com que o terminal enxergue acentos em português
    setlocale(LC_ALL,"");
    //int a = 50 -> O computador agora enxerga a variável inteira (int) "a" (só o nome para a váriavel) como 50
    long a = 50;
    long b = 20;
    //printf("sexo") Digita na tela a mensagem entre as aspas dentro dos parênteses, e \n apenas diz para o terminal pular uma linha. motivos de estética
    printf("Atualmente, o primeiro número é %d, para qual número deseja mudar? \n", a);
    //scanf lê o número digitado na tela, e substitui o valor anterior de a (50) pelo valor digitado, por causa do sinal "&", que significa endereço digital
    scanf("%d", &a);
    //imprime novamente a mensagem entre parênteses
    printf("Agora, o primeiro número é %d.\n", a);
    //%d é como o sitema faz para ler os números
    printf("O segundo número é %d, para qual número deseja mudar?\n", b);
    scanf("%d", &b);
    printf("O valor do segundo número agora é %d.\n", b);
    long c = a + b;
    printf("A soma dos dois números é %d", c);
}
