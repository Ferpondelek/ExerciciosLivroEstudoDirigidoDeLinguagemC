/*	Apresentar todos os valores numéricos inteiros ímpares situados na faixa de 0 a 20.
 Para verificar se o número é ímpar, na malha verificar a lógica dessa condição com a instrução if, perguntando se o número é ímpar;
 sendo, mostre-o, não sendo, passe para o próximo passo. Sugestão: a variável utilizada para a contagem deve obrigatoriamente ser inicializada com o valor 0
 (zero). Utilize o operador % para obter o resultado do resto de uma divisão de valores inteiros e assim verificar se o número é par ou ímpar
 (lembre-se de que um valor é ímpar quando, dividido por dois, o resto é diferente de zero, ou seja, o resto é um valor).
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=0;i<=20;i++)
    {
        if(i % 2 != 0)
        {
            printf("Impar: %d\n",i);
        }
    }

    return 0;
}
