/*Desenvolver em linguagem C um programa que calcule o salário líquido de um profissional que trabalhe por hora.
Para fazer esse programa, é necessário possuir alguns dados básicos, tais como valor da hora de trabalho,
 número de horas trabalhadas no mês e o percentual de desconto do INSS.
 O programa em questão deve apresentar o valor do salário bruto, o valor descontado e o valor do salário líquido. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float VH,HT,TD,SB,SL;
    printf("Digite o valor da hora de trabalho\n");
    scanf("%f",&VH);
    printf("Digite o total de horas trabalhadas no mes\n");
    scanf("%f",&HT);
    printf("Digite o percentual de desconto\n");
    scanf("%f",&TD);
    SB = VH * HT;
    TD = (TD/100)*SB;
    SL = SB - TD;
    printf("Salario Bruto.......: %7.2fR$\n",SB);
    printf("Valor Descontado....: %7.2fR$\n",TD);
    printf("Salario Liquido.....: %7.2fR$\n",SL);




    return 0;
}
