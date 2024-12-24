/* Efetuar o c�lculo da quantidade de litros de combust�vel gasta em uma viagem, utilizando um autom�vel que faz 12 Km por litro.
Para obter o c�lculo, o usu�rio deve fornecer o tempo gasto na viagem e a velocidade m�dia.
Dessa forma, ser� poss�vel obter a dist�ncia percorrida com a f�rmula DISTANCIA = TEMPO * VELOCIDADE.
Tendo o valor da dist�ncia, basta calcular a quantidade de litros de combust�vel utilizada na viagem com a f�rmula LITROS_USADOS = DISTANCIA / 12.
O programa deve apresentar os valores da velocidade m�dia, tempo gasto, a dist�ncia percorrida e a quantidade de litros utilizada na viagem.
Sugest�o: trabalhe com valores reais.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tempo, velocidade,distancia,quantidadeLitros;
    printf("Escreva o tempo gasto na viagem: \n");
    scanf("%f",&tempo);
    printf("Escreva a velocidade media: \n");
    scanf("%f",&velocidade);
    distancia = tempo * velocidade;
    quantidadeLitros = distancia / 12;
    printf("velocidade media: %5.2f \n",velocidade);
    printf("tempo gasto: %5.2f \n",tempo);
    printf("distancia: %5.2f \n",distancia);
    printf("quantidade de litros utilizada na viagem: %5.2f",quantidadeLitros);

    return 0;
}
