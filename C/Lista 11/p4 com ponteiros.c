#include <stdio.h>

void VetorUsuario(int *vetor, int tam)
{
    for(int i = 0; i < tam; i++)
    {
        scanf("%d", &vetor[i]);
    }
}

int SomaRecInd(int *vetor, int tam)
{
    if (tam == 0)
    {
        return *(vetor + tam);
    }
    return SomaRecInd(vetor, tam - 1) + *(vetor + tam);
}

int main()
{
    int vetor[10];
    int soma = 0;
    VetorUsuario(vetor, 10);
    soma = SomaRecInd(vetor, 10);
    printf("%d", soma);
    return 0;
}