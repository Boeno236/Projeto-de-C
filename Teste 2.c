#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
void main (){
    //setlocale(LC_ALL,"") faz com que o terminal enxergue acentos em portugu�s
    setlocale(LC_ALL,"");
    //int a = 50 -> O computador agora enxerga a vari�vel inteira (int) "a" (s� o nome para a v�riavel) como 50
    long a = 50;
    long b = 20;
    //printf("sexo") Digita na tela a mensagem entre as aspas dentro dos par�nteses, e \n apenas diz para o terminal pular uma linha. motivos de est�tica
    printf("Atualmente, o primeiro n�mero � %d, para qual n�mero deseja mudar? \n", a);
    //scanf l� o n�mero digitado na tela, e substitui o valor anterior de a (50) pelo valor digitado, por causa do sinal "&", que significa endere�o digital
    scanf("%d", &a);
    //imprime novamente a mensagem entre par�nteses
    printf("Agora, o primeiro n�mero � %d.\n", a);
    //%d � como o sitema faz para ler os n�meros
    printf("O segundo n�mero � %d, para qual n�mero deseja mudar?\n", b);
    scanf("%d", &b);
    printf("O valor do segundo n�mero agora � %d.\n", b);
    long c = a + b;
    printf("A soma dos dois n�meros � %d", c);
}
