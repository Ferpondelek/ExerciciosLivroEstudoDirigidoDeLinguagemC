/*Escrever um programa em linguagem C que faça a leitura de dois valores numéricos,
efetuar a adição e apresentar o seu resultado caso o valor soma- do seja maior que 10.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Digite dois numeros, se o resultado for maior que 10, sera exibido\n");
    scanf("%d %d",&a,&b);
    if(a+b>10) {
        printf("%d",a+b);
    }
    return 0;
}
