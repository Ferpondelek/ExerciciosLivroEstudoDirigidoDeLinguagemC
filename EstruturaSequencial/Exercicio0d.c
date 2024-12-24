/* Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius.
A fórmula de conversão de temperatura a ser utilizada é C = ((F - 32) * 5) / 9,
 em que a variável F é a temperatura em graus Fahrenheit e a variável C é a temperatura em graus Celsius.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F,C;
    printf("Digite uma temperatura em graus Fahrenheit\n");
    scanf("%f",&F);
    C = ((F - 32) * 5) / 9;
    printf("A temperatura %.2f graus Fahrenheit eh %.2f graus Celsius",F,C);
    return 0;
}
