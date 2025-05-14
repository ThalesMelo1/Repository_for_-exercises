#include <stdio.h>

int main()
{
    char string[50];
    printf("Escreva alguma palavra\n");
    scanf("%[^\n]", string);
    printf("Sua palavra era: %s?", string);
    return 0;   
}