#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SomaVetorRec(int *vetor, int tam)
{
    if (tam == 0)
    {
        return vetor[tam];
    }
    return SomaVetorRec(vetor, tam - 1) + vetor[tam];
}

int main()
{
    int vetor[50], *vetorImpar;
    int impares = 0, j = 0, soma = 0;

    srand(time(NULL));

    for (int i = 0; i < 50; i++)
    {
        vetor[i] = (rand() % 100) + 1;
    }

    for (int i = 0; i < 50; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            impares++;
        }
    }

    vetorImpar = (int *)malloc(impares * sizeof(int));

    for (int i = 0; i < 50; i++)
    {
        if (vetor[i] % 2 != 0)
        {
            *(vetorImpar + j) = vetor[i];
            j++;
        }
    }

    printf("Aqui esta seu vetor:\n");

    for (int i = 0; i < 50; i++)
    {
        printf("%d ", vetor[i]);
    }
    soma = SomaVetorRec(vetor, 49);
    printf("\nA soma de seu vetor eh: %d\n", soma);
    printf("Os numeros impares de seus vetores sao:\n");
    for (int i = 0; i < impares; i++)
    {
        printf("%d ", vetorImpar[i]);
    }
    free(vetorImpar);
    return 0;
}