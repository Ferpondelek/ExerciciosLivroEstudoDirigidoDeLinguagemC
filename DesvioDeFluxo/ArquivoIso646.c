#include <stdio.h>
#include <stdlib.h>
#include <iso646.h>
int main()
{
    int a;
    printf("digite um numero\n");
    scanf("%d",&a);
    if(a>=0 and a<=9) {
        printf("codigo  valido");
    }else {
        printf("Codigo invalido");
    }
    return 0;
}
