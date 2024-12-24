/*Escrever um programa em linguagem C que faça a leitura de quatro valores numéricos referentes a quatro notas bimestrais de um aluno,
efetuar o cálculo da média e apresentá-la junto com uma das seguintes mensagens: caso o valor da média seja maior ou igual a 5,
apresentar "aluno aprovado"; caso contrário, apresentar "aluno reprovado".
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
