#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palavras[1000];
    char letra, UpperCase;
    int tam, NumUpper = 0;
    scanf("%[^\n]", palavras);
    while(strcmp(palavras, "FIM") != 0)
    { 
        tam = strlen(palavras);
        for (int i = 0; i < tam; i++)
        {
            letra = palavras[i];
            UpperCase = toupper(letra);
            if ((letra == UpperCase) && (letra != 32))
            {
                NumUpper++;
            }
        }
        printf("%d\n", NumUpper);
        fgets(palavras, sizeof(palavras), stdin);
        scanf("%[^\n]", palavras);
        NumUpper = 0;
    }    
    return 0;
}