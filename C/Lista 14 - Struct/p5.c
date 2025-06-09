#include <stdio.h>

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
    for(int i = 0; i < 2; i++)
    {
        printf("Write the name of the band\n");
        scanf("%[^\n]", vetor[i].nome);
        fflush(stdin);
        printf("Now the type of music they play\n");
        scanf("%[^\n]", vetor[i].estiloMusical);
        fflush(stdin);
        printf("The number of people in the band\n");
        scanf("%d", &vetor[i].numeroIntegrantes);
        printf("And finally their rank in world\n");
        scanf("%d", &vetor[i].ranking);
        fflush(stdin);
    }
        for(int i = 0; i < 2; i++)
    {
        printf("The name of your band is: %s\n", vetor[i].nome);
        printf("The style of music they play is: %s\n", vetor[i].estiloMusical);
        printf("The number of musicians is: %d\n", vetor[i].numeroIntegrantes);
        printf("Their rank is: %d\n\n", vetor[i].ranking);
    }
    return 0;
}