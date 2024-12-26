/*	Apresentar todos os números divisíveis por 4 que sejam menores que 200.
Sugestão: a variável utilizada para a contagem deve obrigatoriamente ser inicializada com o valor 1 (um).
Utilize o operador % (resto de divisão) para verificar se o número é divisível por quatro
(lembre-se de que um valor é divisível por outro valor quando o resto da divisão for igual a zero).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1;i<=200;i++)
    {
        if(i % 4 == 0)
        {
            printf("Divisivel por 4 = %d\n",i);
        }
    }

    return 0;
}
