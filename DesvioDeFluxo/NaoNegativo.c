/*Escrever um programa em linguagem C que leia um valor numérico inteiro que não seja negativo.
 Qualquer outro valor deve apresentar a mensagem "valor inválido".
Se o valor estiver correto, apresentar a mensagem "valor válido, você informou" e colocar junto com a mensagem o valor fornecido.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite um numero\n");
    scanf("%d",&n);
    if(!(n >= 0)) {
        printf("valor invalido");
    }else {
        printf("valor valido: %d",n);
    }
    return 0;
}
