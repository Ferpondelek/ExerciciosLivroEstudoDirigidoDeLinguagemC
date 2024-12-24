/*Escrever um programa em linguagem C que leia dois valores inteiros e inde- pendentemente da ordem em que foram entrados,
eles devem ser impressos na ordem crescente
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Escreva dois numeros e eles serao ordenados em ordem crescente\n");
    scanf("%d %d",&a,&b);
    if(a>b) {
        c = a;
        a = b;
        b = c;
    }
    printf("Numeros ordenados\n %d %d",a,b);
    return 0;
}
