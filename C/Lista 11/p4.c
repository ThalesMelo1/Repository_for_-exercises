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
        return vetor[tam];
    }
    int soma;
    soma = vetor[tam] + soma;
    return SomaRecInd(vetor, tam - 1) + soma;
}

int main()
{
    int vetor[10];
    VetorUsuario(vetor, 10);
    printf("%d", SomaRecInd(vetor, 10));
    return 0;
}