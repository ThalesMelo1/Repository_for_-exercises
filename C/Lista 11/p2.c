#include <stdio.h>

void VetorUsuario(int *vetor, int tam)
{
    for(int i = 0; i < tam; i++)
    {
        scanf("%d", &vetor[i]);
    }
}

int SomaVetorIterativo(int *vetor, int tam)
{
    int soma = 0;
    for(int i = 0; i < tam; i++)
    {
        soma = vetor[i] + soma;
    }
    return soma;
}

int main()
{
    int vetor[10];
    int soma = 0;
    printf("Escreva um vetor de tamanho 10\n");
    VetorUsuario(vetor, 10);
    soma = SomaVetorIterativo(vetor, 10);
    printf("%d", soma);
    return 0;
}