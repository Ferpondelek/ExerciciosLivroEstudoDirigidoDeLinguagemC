/*Desenvolva em linguagem C um programa que leia dois valores numéricos inteiros.
 Faça a operação de adição dos dois valores e apresente o resultado obtido.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Digite dois numeros inteiros!\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d + %d = %d",a,b,a+b);
    return 0;
}
