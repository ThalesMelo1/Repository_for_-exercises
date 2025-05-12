#include <stdio.h>

int main()
{
    int num;
    float soma = 0, cont = 1;
    scanf("%d", &num);
    if (num == 0)
    {
        soma = 0;
    }
    else if (num < 0)
    {
        return 0;
    }
    else
    {
        for (float i = 1; i <= num; i++)
        {
            if (i == 1)
            {
                soma += i / i;
            }
            else
            {
                soma += (cont + i) / i;
                cont++;
            }
        }
    }
    printf("%.2f", soma);
    return 0;
}