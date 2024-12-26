#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,fat=1,cont=1;
    printf("Digite um numero\n");
    scanf("%d",&n);
    do
    {

        fat*=cont;
        cont++;
    }
    while(cont<=n);
    printf("Fatorial de %d = %d",n,fat);

    return 0;
}
