/*Apresentar as potências de 3, variando de 0 a 9. Deve ser considerado que qualquer número elevado a zero é 1, e elevado a 1 é ele próprio.
Sugestão: resolva este problema sem utilizar a função "pow()";
 trabalhe apenas com o conceito de laço para apresentar os valores calculados*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,resultado=1;
    for(i=0;i<=9;i++)
    {

            printf("3 ^ %d = %d \n",i,resultado);
            resultado*=3;
    }
    return 0;
}
