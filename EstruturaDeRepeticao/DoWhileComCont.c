#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,cont=1;
    do
    {
        printf("Digite dois numeros\n");
        scanf("%d %d",&a,&b);
        printf("%d + %d = %d\n",a,b,a+b);
        cont++;
    }
    while(cont<=5);

    return 0;
}
