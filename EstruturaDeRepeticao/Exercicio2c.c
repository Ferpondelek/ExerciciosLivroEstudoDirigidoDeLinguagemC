/*Apresentar os resultados de uma tabuada para um número qualquer a ser fornecido pelo usuário.
Sugestão: procure apresentar o resultado da tabuada em seu formato-padrão matemático.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=1;
    printf("Digite um numero\n");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d x %d = %d\n",n,i,n*i);
        i++;
    }
    return 0;
}
