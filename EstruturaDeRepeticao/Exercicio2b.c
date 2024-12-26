/*Apresentar o somatório obtido dos cem primeiros números inteiros (1+2+3+4+5+6+7+...+97+98+99+100).*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,b,soma=0;
    for(i=1, b=i+1;i<=100,b<=100;i++,b++)
    {
        soma = i+b;

    }
    printf("soma = %d\n",soma);
    return 0;
}
