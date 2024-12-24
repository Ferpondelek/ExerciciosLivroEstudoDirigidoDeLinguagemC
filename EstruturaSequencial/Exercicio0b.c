/* Efetuar o cálculo da quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel que faz 12 Km por litro.
Para obter o cálculo, o usuário deve fornecer o tempo gasto na viagem e a velocidade média.
Dessa forma, será possível obter a distância percorrida com a fórmula DISTANCIA = TEMPO * VELOCIDADE.
Tendo o valor da distância, basta calcular a quantidade de litros de combustível utilizada na viagem com a fórmula LITROS_USADOS = DISTANCIA / 12.
O programa deve apresentar os valores da velocidade média, tempo gasto, a distância percorrida e a quantidade de litros utilizada na viagem.
Sugestão: trabalhe com valores reais.*/
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
