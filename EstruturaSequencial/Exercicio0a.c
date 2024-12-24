/*Ler quatro valores numéricos inteiros e apresentar o resultado dois a dois da adição e multiplicação entre os valores lidos,
baseado-se na utilização do conceito de propriedade distributiva.
Sugestão: se forem lidas as variá- veis A, B, C e D, devem ser somados e multiplicados os valores de A com B, A com C e A com D;
depois B com C, B com D e por último C com D. Note que para cada operação são utilizadas seis combinações.
Assim sendo, devem ser realizadas doze operações de processamento, sendo seis para as adições e seis para as multiplicações.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    printf("Digite 4 numeros!\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("%d + %d = %d\n",a,b,a+b);
    printf("%d + %d = %d\n",a,c,a+c);
    printf("%d + %d = %d\n",a,d,a+d);
    printf("%d + %d = %d\n",b,c,b+c);
    printf("%d + %d = %d\n",b,d,b+d);
    printf("%d + %d = %d\n",c,d,c+d);
    printf("%d * %d = %d\n",a,b,a*b);
    printf("%d * %d = %d\n",a,c,a*c);
    printf("%d * %d = %d\n",a,d,a*d);
    printf("%d * %d = %d\n",b,c,b*c);
    printf("%d * %d = %d\n",b,d,b*d);
    printf("%d * %d = %d\n",c,d,c*d);
    return 0;
}
