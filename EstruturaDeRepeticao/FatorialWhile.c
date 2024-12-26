#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,fat=1,cont=1;
    printf("Digite um numero\n");
    scanf("%d",&n);
    while(cont<=n)
    {
        fat *= cont ;
        cont++;
    }
    printf("Fatorial de %d = %d",n,fat);
    return 0;
}
