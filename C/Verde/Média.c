#include <stdio.h>

int main()
{
    int Testes;
    scanf("%d", &Testes);
    for (int i = 0; i < Testes; i++)
    {
        int NumPessoas = 0, AcimaMedia = 0;
        float SomaNotas = 0, media = 0;
        scanf("%d", &NumPessoas);
        int Notas[NumPessoas];
        for (int i = 0; i < NumPessoas; i++)
        {
            scanf("%d", &Notas[i]);
            SomaNotas += Notas[i];
        }
        media = SomaNotas / NumPessoas;
        for (int i = 0; i < NumPessoas; i++)
        {
            if (Notas[i] > media)
            {
                AcimaMedia++;
            }
        }
        printf("%.3f%%\n", (float)AcimaMedia / NumPessoas * 100);
    }
    return 0;
}