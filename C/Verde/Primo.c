#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    int NumPrimos[num2-num1];
    for(int j = num1; j < num2; j++)
    {
        int copia = num1;
        for(int i = (copia-1); i > 1; i--)
        {
            if(num1%i==0)
            {

            }
            else
            {
                NumPrimos[j] = copia;
            }
        }
        copia++;
    }
    for(int k = num1; k < num2; k++)
    {
        printf("%d ", NumPrimos[k]);
    }
    return 0;
}