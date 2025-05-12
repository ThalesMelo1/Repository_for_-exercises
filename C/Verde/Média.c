#include <stdio.h>

int main()
{
    int NumPessoas, AcimaMedia = 0;
    scanf("%d", &NumPessoas);
    int Notas[NumPessoas];
    float SomaNotas = 0, media;
    while (NumPessoas > 0)
    {
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
        printf("%.3f%%", (float)AcimaMedia / NumPessoas * 100);
    }
    return 0;
}