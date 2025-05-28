#include <stdio.h>

void VetorUsuario(int *vetor, int tam)
{
    for(int i = 0; i < tam; i++)
    {
        scanf("%d", &*(vetor+i));
    }
}

int SomaVetorIndice (int *vetor, int tam)
{
    int soma = 0;
    for(int i = 0; i < tam; i++)
    {
        soma = soma + *(vetor + i);
    }
    return soma;
}

int main()
{
    int vetor[10];
    printf("Escreva 10 numeros\n");
    VetorUsuario(vetor, 10);
    printf("%d" , SomaVetorIndice(vetor, 10));
    return 0;
}