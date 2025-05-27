#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PreencheVetor(int *vetor, int tam)
{
    srand(time(NULL));
    for (int i = 0; i < tam; i++)
    {
        vetor[i] = (rand() % 60) + 1;
    }
}

int main()
{
    int *vetor, n;
    scanf("%d", &n);
    vetor = (int*)malloc(n*sizeof(int));
    PreencheVetor(vetor, n);
    for(int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }
    free(vetor);
    return 0;
}