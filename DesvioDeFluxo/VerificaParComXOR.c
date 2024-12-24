/*Escrever um programa em linguagem C que faz a solicitação do sexo de duas pessoas que pretendem formar um par para participar de uma quadrilha em uma festa
junina. Os administradores da festa determinaram que somente serão aceitos pares heterogêneos (formados por pessoas de sexos diferentes).
Não serão aceitos casais formados por pessoas do mesmo sexo.
Para atender este requisito, o programa deve, após a entrada do sexo dos participantes, verificar se os sexos
informados formam realmente um par, e neste caso apresentar uma mensagem informando sucesso em relação a essa possibilidade;
caso contrário, o programa deve indicar a impossibilidade de formação de par.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s1,s2;
    printf("Digite o sexo 1: 1 para Masculino\\ 2 para Feminino\n");
    scanf("%d",&s1);
    printf("Digite o sexo 2: 1 para Masculino\\ 2 para Feminino\n");
    scanf("%d",&s2);
    if((s1 == 1 &&!(s2==1))||(!(s1==1) && s2==1)) {
        printf("o primeiro pode dancar com o segundo");
    }else{
        printf("impossivel formar par");
    }
    return 0;
}
