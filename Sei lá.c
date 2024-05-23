#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL,"");
    char c = 'Faust';
    printf("Olá, se seu sinner favorito é %c apenas saia, se não, qual seria?", c);


}
