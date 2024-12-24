/*Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit.
 A fórmula de conversão de temperatura a ser utilizada é F = (9 * C + 160) / 5,
  em que a variável F representa a temperatura em graus Fahrenheit e a variável C representa a temperatura em graus Celsius.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C,F;
    printf("Digite uma temperatura em graus Celsius\n");
    scanf("%f",&C);
    F = ( 9 * C + 160) / 5;
    printf("A temperatura de %.2f graus Celsius eh igual a %.2f graus Fahrenheit",C,F);
    return 0;
}
