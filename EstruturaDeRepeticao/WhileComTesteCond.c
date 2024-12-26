#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,resp=1;
    while(resp==1)
    {
        printf("Digite dois numeros\n");
        scanf("%d %d",&a,&b);
        printf("%d + %d = %d\n",a,b,a+b);
        printf("Digite 1 para continuar ou 2 para cancelar\n");
        scanf("%d",&resp);
    }

    return 0;
}
