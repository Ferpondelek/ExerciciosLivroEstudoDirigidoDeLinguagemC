/*Escrever um programa em linguagem C que leia um valor numérico inteiro referente aos códigos 1, 2 ou 3.
Qualquer outro valor deve apresentar a mensagem "código inválido".
Se o valor estiver correto, apresentar o valor do código escrito por extenso".
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod;
    printf("Escreva o codigo\n");
    scanf("%d",&cod);
    if(cod==1||cod==2||cod==3) {
        if(cod==1) {
            printf("um");
        }
        if(cod==2) {
            printf("dois");
        }
        if(cod==3) {
            printf("tres");
        }
    }else {
        printf("codigo invalido");
    }
    return 0;
}
