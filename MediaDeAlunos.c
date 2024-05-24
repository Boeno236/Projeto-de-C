#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");
    float nota1, nota2, nota3, media;
     //Crie um algoritmo que leia 3 notas e informe a média entre elas
     //Se o valor for maior que 7, informe que o aluno foi aprovado
     //se não, foi reprovado.
     printf("Informe as três notas que o aluno teve esse ano\n");
     scanf("%f %f %f", &nota1, &nota2, &nota3);
     media = (nota1 + nota2 + nota3)/3;
     printf("A média do aluno é %.2f\n", media);
     if(media >= 7){
        printf("O aluno foi aprovado\n");
     }else{
     printf("O aluno foi reprovado.\n");
     }
     system("pause");}
