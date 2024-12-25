/*Ler três valores inteiros (representados pelas variáveis A, B e C).
O programa deve apresentar os valores dispostos em ordem crescente.
Sugestão: utilize a propriedade distributiva e a troca de valores para ordenar os valores,
pois a saída somente pode ser formada pela sequên- cia de variáveis A, B e C, nesta ordem (em hipótese alguma utilize outra combinação de saída)
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,aux;
    printf("Digite tres numeros\n");
    scanf("%d %d %d",&A,&B,&C);
    if(A>B)
    {
        aux = A;
        A = B;
        B = aux;
    }
    if(A>C)
    {
        aux = A;
        A = C;
        C = aux;
    }
    if (B>C)
    {
        aux = B;
        B = C;
        C = aux;
    }
    printf("%d %d %d",A,B,C);
    return 0;

}
