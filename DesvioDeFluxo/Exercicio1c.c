/*
 Ler quatro valores referentes a quatro notas escolares de um aluno e mostrar uma mensagem
 informando que o aluno foi aprovado se o valor da média for maior ou igual a 5.
 Se o aluno não foi aprovado, apresentar uma mensagem informando esta condição.
 Junto com as mensagens apresentar o valor da média do aluno
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,media;
    printf("insira as 4 notas de um aluno\n");
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    media = (n1+n2+n3+n4)/4;
    if(media>5) {
        printf("Aluno aprovado, media = %.2f",media);
    }else {
        printf("Aluno reprovado, media = %.2f",media);
    }
    return 0;
}
