/*
 Ler quatro valores referentes a quatro notas escolares de um aluno e apresentar uma mensagem informando que o aluno foi aprovado se o valor da média
 escolar for maior ou igual a 7. Se o valor da média for menor que 7, solicitar a nota de exame, somar com o valor da média e obter nova média.
 Se a nova média for maior ou igual a 5, apresentar uma mensagem informando que o aluno foi aprovado em exame.
 Se o aluno não foi aprovado, mostrar uma mensagem informando esta condição. Mostrar junto com as mensagens o valor da média do aluno.

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,n4,media,exame;
    printf("insira as 4 notas de um aluno\n");
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    media = (n1+n2+n3+n4)/4;
    if(media>=7) {
        printf("Aluno aprovado, media = %.2f",media);
    }else {
        printf("Media menor que 7\n");
        printf("Digite a nota do exame\n");
        scanf("%f",&exame);
        media = (media + exame)/2;
        if(media>=5)
        {
            printf("Aluno aprovado em exame media:%.2f",media);
        }else
        {
            printf("Aluno repovado media: %.2f",media);
        }
    }
    return 0;
}
