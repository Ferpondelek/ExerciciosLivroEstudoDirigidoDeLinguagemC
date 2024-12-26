#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,fat=1,n;
    printf("Digite um numero\n");
    scanf("%d",&n);
    for(i = 1; i <= n;i++)
    {
       fat *= i;

    }
    printf("Fatorial de %d = %d",n,fat);

    return 0;
}
