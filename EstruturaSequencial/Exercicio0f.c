/*Ler dois valores inteiros para as variáveis A e B, efetuar a troca dos valores de modo que a variável A passe a possuir o valor da variável B,
e a variável B passe a possuir o valor da variável A. Apresentar os valores trocados.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C;
    printf("Digite o valor de A\n");
    scanf("%d",&A);
    printf("Digite o valor de B\n");
    scanf("%d",&B);
    C = A;
    A = B;
    B = C;
    printf("Valores trocados\nA = %d\nB = %d",A,B);
    return 0;
}
