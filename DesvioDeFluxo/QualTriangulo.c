/*Escrever um programa em linguagem C que leia três valores referentes às medidas dos lados de um triângulo, considerando lados como A, B e C.
Verificar se os lados fornecidos formam realmente um triângulo.
Se for esta condição verdadeira, deve ser indicado qual tipo de triângulo foi formado: isósceles, escaleno ou equilátero.
Triângulo é uma forma geométrica (polígono) composta por três lados, sendo cada lado menor que a soma dos outros dois lados.
Perceba que é uma regra (uma condição) e deve ser considerada. É um triângulo quando A<B+C, quando B<A+C e quando C<A+B.
Tendo certeza de que os valores informados para os três lados formam um triângulo,
 são analisados os valores para estabelecer qual tipo de triângulo será formado: isósceles, escaleno ou equilátero.
Um triângulo é isósceles quando possui dois lados iguais e um diferente, sendo A==B ou A==C ou B==C;
é escaleno quando possui todos os lados diferentes, sendo A!=B e B!=C;
é equilátero quando possui todos os lados iguais, sendo A==B e B==C.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Digite as medidas dos 3 lados \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b+c&&b<a+c&&c<b+c) {
        printf("E um triangulo ");
        if(a==b&&b==c) {
            printf("equilatero");
        }else {
              if(a==b||a==c||b==c) {
            printf("isosceles");
                }
            if(a!=b&&b!=c) {
                printf("escaleno");
            }
        }


    }else {
        printf("nao formam um triangulo");
    }
    return 0;
}
