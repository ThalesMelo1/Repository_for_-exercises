#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int soma_elementos(int *vetor, int tam)
{
    int soma = 0;
    for(int i = 0; i < tam; i++)
    {
        soma += *(vetor+i);
    }
    return soma;
}

int main()
{
    int *pnt, n, soma;
    printf("Escreva o tamanho de seu vetor\n");
    scanf("%d", &n);
    pnt = (int*)malloc(n*sizeof(int));
    srand(time(NULL));
    for(int i = 0; i < n; i++)
    {
        *(pnt+i) = (rand() % 10) + 1;
    }
    printf("%d", soma_elementos(pnt, n));
    free(pnt);
    return 0;
}