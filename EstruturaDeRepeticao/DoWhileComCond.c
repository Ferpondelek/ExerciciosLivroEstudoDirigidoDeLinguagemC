#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,cont=1,resp=1;
    do
    {
        printf("Digite dois numeros\n");
        scanf("%d %d",&a,&b);
        printf("%d + %d = %d\n",a,b,a+b);
        printf("Digite 1 para continuar ou 2 para cancelar\n");
        scanf("%d",&resp);
    }
    while(resp==1);

    return 0;
}
