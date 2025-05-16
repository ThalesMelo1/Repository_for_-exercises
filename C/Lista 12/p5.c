#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *pnt, tam, num, repeticoes;
    printf("Escreva o tamanho de seu vetor\n");
    scanf("%d", &tam);
    pnt = (int*)malloc(tam*sizeof(int));
    printf("Agora escreva os elementos de seu vetor\n");
    for(int i = 0; i < tam; i++)
    {
        scanf("%d", &*(pnt+i));
    }
    printf("Escreva um número para ser encontrado em seu vetor");
    scanf("%d", &num);
    for(int i = 0; i < tam; i++)
    {
        if(*(pnt+i)==num)
        {
            repeticoes++;
        }
    }
    printf("O seu numero aparece %d vezes", repeticoes);
    free(pnt);
    return 0;
}