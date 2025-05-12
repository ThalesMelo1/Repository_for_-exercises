#include <stdio.h>
void PreencheVetor(int vet[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &vet[i]);
    }
}
void VerificaCres(int vet[], int tam, int *cre)
{
    int menor = vet[0];
    int i;
    for (i = 1; i < tam; i++)
    {
        if (menor < vet[i])
        {
            vet[i] = menor;
        }
        else
            break;
    }
    if (i == tam)
    {
        (*cre) = 1;
    }
}
void VerificaDec(int vet[], int tam, int *dec)
{
    int maior = vet[tam];
    int i;
    for (i = (tam - 1); i > 0; i--)
    {
        if (maior > vet[i])
        {
            maior = vet[i];
        }
        else
            break;
    }
    if (i == 0)
    {
        (*dec) = 1;
    }
}
int main()
{
    int vetor[5];
    int cre = 0, dec = 0;
    PreencheVetor(vetor, 5);
    VerificaCres(vetor, 5, &cre);
    VerificaDec(vetor, 5, &dec);
    if (cre == 1)
    {
        printf("C");
    }
    else if (dec == 1)
    {
        printf("D");
    }
    else
    {
        printf("N");
    }
    return 0;
}