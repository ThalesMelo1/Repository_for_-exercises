#include <stdio.h>

int main()
{
    float valor;
    int copias;
    do
    {
        scanf("%d", &copias);
        if(copias < 0)
        {
            printf("");
        }
        else if((copias>=0)&&(copias<=100))
        {
            valor = (float)copias*1/4;
            printf("%.2f\n", valor);
        }
        else if(copias>100)
        {
            valor = (float)copias*1/5;
            printf("%.2f\n", valor);
        }
    }while(copias >= 0);
    return 0;
}