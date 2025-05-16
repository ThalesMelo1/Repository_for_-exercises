#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int *inteiro;
    float *real;
    char *caractere;

    inteiro = (int*)malloc(sizeof(int));
    real = (float*)malloc(sizeof(float));
    caractere = (char*)malloc(sizeof(char));

    printf("Digite um inteiro\n");
    scanf("%d", &*inteiro);
    printf("Digite um real\n");
    scanf("%f", &*real);
    printf("Digite um caractere\n");
    scanf(" %c", &*caractere);
    printf("Inteiro: %d\nReal: %.2f\nCaractere: %c\n", *inteiro, *real, *caractere);
    printf("O inteiro esta alocado no espaco de memoria: %d\nO real esta alocado no espaco de memoria: %d\nO caractere esta alocado no espaco de memoria: %d\n", inteiro, real, caractere);
    return 0;
}