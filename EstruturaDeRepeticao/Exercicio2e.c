/* Apresentar os quadrados dos números inteiros de 15 a 180. Sugestão: lembre-se de que a função "pow()" somente pode ser utilizada para valores reais,
 não sendo aplicada para esta situação.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=15;i<=180;i++)
    {
        printf("Quadro de %d = %d\n",i,i*i);
    }

    return 0;
}
