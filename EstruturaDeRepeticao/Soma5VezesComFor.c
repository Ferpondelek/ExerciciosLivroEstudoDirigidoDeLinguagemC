#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i;
    for(i = 1; i<=5;i++)
    {
        printf("Digite dois numeros\n");
        scanf("%d %d",&a,&b);
        printf("%d + %d = %d\n",a,b,a+b);
    }

    return 0;
}
