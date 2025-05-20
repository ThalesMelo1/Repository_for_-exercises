#include <stdio.h>

int main()
{
    int A, B, primo;
    scanf("%d%d", &A, &B);
    for (int i = A; i < B; i++)
    {
        if (i < 2)
        {
            continue;
        }
        else
        {
            primo = 1;
            for (int j = 2; j*j <= i; j++)
            {
                if (i % j == 0)
                {
                    primo = 0;
                    break;
                }
            }
            if (primo == 1)
            {
                printf("%d ", i);
            }
        }
    }
    return 0;
}