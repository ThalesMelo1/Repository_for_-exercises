#include <stdio.h>

typedef struct
{
    float x, y;

} Ponto2d;

int main()
{
    Ponto2d Ponto_inicial, Ponto_final;
    Ponto_inicial.x, Ponto_inicial.y = -9999, -9999;
    Ponto_final.x, Ponto_final.y = -9999, -9999;
    float Distancia;
    int option; 
    do
    {
        printf("Digite um numero para escolher a opcao\n(1) Digitar o valor do primeiro ponto\n(2) Digitar o valor do segundo ponto\n(3) Calcular e exibir a distância entre os dois pontos\n(4) Saida\n");
        scanf("%d", &option);
        if(option == 1)
        {
            scanf("%f", &Ponto_inicial.x);
            scanf("%f", &Ponto_inicial.y);
        }
        if(option == 2)
        {
            scanf("%f", &Ponto_final.x);
            scanf("%f", &Ponto_final.y);
        }
        if(option == 3)
        {
            if((Ponto_inicial.x = 9999)||(Ponto_inicial.y = 9999))
            {

            }


        }

    } while(option != 4);
    return 0;

}