#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *pnt, n;
    printf("Escreva o tamanho de seu vetor\n");
    scanf("%d", &n);
    pnt = (int*)malloc(n*sizeof(int));
    srand(time(NULL));
    for(int i = 0; i < n; i++)
    {
        *(pnt+i) = (rand() % 10) + 1;
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ", *(pnt+i));
    }
    free(pnt);
    return 0;
}