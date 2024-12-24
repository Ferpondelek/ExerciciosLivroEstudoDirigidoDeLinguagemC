/*Desenvolver em linguagem C um programa que aceite valores numéricos inteiros entre 0 (zero) e 9 (nove).
Se o valor estiver dentro da faixa, o programa deve apresentar a mensagem "valor válido". Caso o valor esteja fora da faixa,
 o programa deve apresentar a mensagem "valor inválido".
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Digite um numero \n");
    scanf("%d",&a);
    if(a>=0&&a<=9) {
        printf("valor valido");
    }else {
        printf("valor invalido");
    }
    return 0;
}
