#include <stdio.h>

int main()
{
     int *pnt, n;
    printf("Escreva o tamanho de seu vetor\n");
    scanf("%d", &n);
    pnt = (int*)malloc(n*sizeof(int));
    srand(time(NULL));
    printf("Agora escreva seu vetor");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &*(pnt+i));
    }
      for(int i = 0; i < n; i++)
    {
        printf("%d ", *(pnt+i));
    }
    free(pnt);
    return 0;
}