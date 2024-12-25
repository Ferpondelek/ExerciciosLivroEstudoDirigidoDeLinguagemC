/*	Efetuar a leitura de três valores (variáveis A, B e C) para calcular a equação de segundo grau.
Lembre-se de que somente será uma equação de segundo grau se o valor da variável A for diferente de zero.
Outro detalhe é que somente existirá o cálculo das raízes se o valor de delta for diferente de zero.
É necessário considerar também o fato de o valor de delta ser igual a zero.
Se isso ocorrer, existirá apenas o cálculo de uma raiz. Sugestão: utilize a biblioteca math.h (#include <math.h>) antes da função "main()".

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,delta;
    float x1,x2;
    printf("Digite tres valores\n");
    scanf("%d %d %d",&a,&b,&c);
    delta = pow(b,2)-4*a*c;
    if(delta<0)
    {
        printf("Nao existe raizes");
    }
    else
    {
        if(delta==0)
        {
            printf("Existe uma raiz:\n");
            x1 = ((-b + sqrt(delta))/(2 * a));
            printf("%.2f",x1);

        }
        if(delta>0) {
            printf("Existem duas raizes\n");
            x1 = ((-b + sqrt(delta))/(2 * a));
            printf("Raiz 1: %.2f\n",x1);
            x2 = ((-b - sqrt(delta))/(2 * a));
            printf("Raiz 2: %.2f",x2);
        }
    }
    return 0;
}
