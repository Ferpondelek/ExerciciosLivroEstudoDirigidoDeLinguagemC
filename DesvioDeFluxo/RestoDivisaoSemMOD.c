/*desenvolver um programa de computador que leia um valor numérico inteiro e faça a apresentação desse valor caso seja divisível por 4 e 5.
 Não sendo divisível por 4 e 5, o programa deve apresentar a mensagem "Valor não é divisível por 4 e 5 ".Sem operar MOD.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r4,r5;
    printf("Digite um numero\n");
    scanf("%d",&n);
    r4 = n - 4*(n/4);
    r5 = n - 5*(n/5);
    if(r4==0&&r5==0) {
        printf("%d",n);
    }else {
        printf("Valor nao divisivel por 4 e 5");
    }
    return 0;
}
