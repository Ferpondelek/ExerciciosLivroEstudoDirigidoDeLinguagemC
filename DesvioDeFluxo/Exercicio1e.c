/*Ler dois valores numéricos inteiros ou reais e exibir a diferença do maior para o menor*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,d;
    printf("digite dois numeros\n");
    scanf("%f %f",&a,&b);
    if(a>b) {
        printf("diferenca: %.1f",a-b);
    }else{
        printf("Diferenca: %.1f",b-a);
    }
    return 0;
}
