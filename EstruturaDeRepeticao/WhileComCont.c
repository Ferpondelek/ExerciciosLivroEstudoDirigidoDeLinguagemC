#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,cont=1;
    while(cont<=5)
    {
        printf("Digite dois numeros\n");
        scanf("%d %d",&a,&b);
        printf("%d + %d = %d\n",a,b,a+b);
        cont++;
    }

    return 0;
}
