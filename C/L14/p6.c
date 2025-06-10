#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[50];
    char estiloMusical[30];
    int numeroIntegrantes;
    int ranking;
} Bandas;

int main()
{
    Bandas vetor[2];
    char BandaFavorita[50];
    int igual = 0;

    for (int i = 0; i < 2; i++)
    {
        printf("Write the name of the band:\n");
        scanf(" %[^\n]", vetor[i].nome);

        printf("Now the type of music they play:\n");
        scanf(" %[^\n]", vetor[i].estiloMusical);

        printf("The number of people in the band:\n");
        scanf("%d", &vetor[i].numeroIntegrantes);

        printf("And finally their rank in world:\n");
        scanf("%d", &vetor[i].ranking);
    }

    printf("Write the name of your favorite band:\n");
    scanf(" %[^\n]", BandaFavorita);

    for (int i = 0; i < 2; i++)
    {
        int j = 0;
        igual = 1; 

        while (vetor[i].nome[j] != '\0' || BandaFavorita[j] != '\0')
        {
            if (vetor[i].nome[j] != BandaFavorita[j])
            {
                igual = 0;
                break;
            }
            j++;
        }

        if (igual == 1)
        {
            printf("Your band is one of my favorite bands\n");
            break;
        }
    }

    if (igual == 0)
    {
        printf("Your band is not in my favorite list\n");
    }

    return 0;
}