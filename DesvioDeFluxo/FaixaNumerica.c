/*Escrever um programa em linguagem C que faça a leitura de dois valores numéricos e efetuar a adição.
 Caso o valor somado seja maior ou igual a 10, deve ser apresentado somando a ele mais 5.
Caso o valor somado não seja maior ou igual a 10, deve ser apresentado subtraindo dele 7*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Digite dois numeros\n");
    scanf("%d %d",&a,&b);
    if(a+b>=10) {
        printf("%d",a+b+5);
    }else {
        printf("%d",a+b-7);
    }
    return 0;
}
