/* Escreva um programa que apresente a série de Fibonacci até o décimo quinto termo.
 A série de Fibonacci é formada pela sequência 1, 1, 2, 3, 5, 8, 13, 21, 34... etc*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a=1,b=1,fibo=0;
    for(i=1;i<=15;i++)
    {
        if(i<=2)
        {
            printf("Elemento %d = 1\n",i);
        }
        else
        {
            fibo = a+b;
            printf("Elemento %d = %d\n",i,fibo);
            a=b;
            b=fibo;
        }
    }

    return 0;
}
