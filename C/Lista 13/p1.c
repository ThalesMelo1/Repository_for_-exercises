#include <stdio.h>

int main()
{
    FILE *arquivo = fopen("Party.txt", "r");
    char linha[100];
    if(arquivo == NULL)
    {
        printf("Seu arquivo deu problema\n");
        return 1;
    }
    
    while (fgets(linha, 100, arquivo) != NULL)
    {
        printf("%s", linha);
    }
    fclose(arquivo);
    return 0;
}