#include <stdio.h>
#include <math.h>

typedef struct
{
    float x, y;

} Ponto2d;

int main()
{
    Ponto2d Ponto_inicial, Ponto_final;
    Ponto_inicial.x = -9999; Ponto_inicial.y = -9999;
    Ponto_final.x = -9999; Ponto_final.y = -9999;  
    float Distancia;
    int option; 
    do
    {
        printf("Digite um numero para escolher a opcao\n(1) Digitar o valor do primeiro ponto\n(2) Digitar o valor do segundo ponto\n(3) Calcular e exibir a distância entre os dois pontos\n(4) Saida\n");
        scanf("%d", &option);
        if(option == 1)
        {
            printf("Escreva o x de seu numero ");
            scanf("%f", &Ponto_inicial.x);
            printf("Agora escreva o y de seu numero ");
            scanf("%f", &Ponto_inicial.y);
        }
        if(option == 2)
        {
            printf("Escreva o x de seu numero ");
            scanf("%f", &Ponto_final.x);
            printf("Agora escreva o y de seu numero ");
            scanf("%f", &Ponto_final.y);
        }
        if(option == 3)
        {
            if((Ponto_inicial.x == -9999)||(Ponto_inicial.y == -9999)||(Ponto_final.x == -9999)||(Ponto_final.y == -9999))
            {
                printf("Ponto não inserido. Tente novamente");
            }
            else
            {
            Distancia = sqrt(pow(Ponto_final.x - Ponto_inicial.x, 2)+ pow(Ponto_final.y - Ponto_inicial.y, 2));
            printf("A distancia eh: %.2f\n", Distancia);
            }
        }
    } while(option != 4);
    printf("FIM");
    return 0;
}