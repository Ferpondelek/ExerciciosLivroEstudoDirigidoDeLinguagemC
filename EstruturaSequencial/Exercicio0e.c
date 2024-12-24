/*Calcular e apresentar o valor do volume de uma lata de óleo, utilizando a fórmula V = 3.14159 * R * R * A,
em que as variáveis V, R e A representam, respectivamente, o volume, o raio e a altura*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float V,R,A;
    printf("Digite o raio\n");
    scanf("%f",&R);
    printf("Digite a altura\n");
    scanf("%f",&A);
    V = 3.14159 * R * R * A;
    printf("O volume eh %.2f",R);
    return 0;
}
