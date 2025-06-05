#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{

    int dia;
    int mes;
    int ano;

} Data;

typedef struct
{
    char nome[50];
    float altura;
    Data nascimento;

} Pessoa;

Data PreencheData()
{
    Data d;
    d.dia = (rand() % 30) + 1;
    d.mes = (rand() % 12) + 1;
    d.ano = (rand() % 24) + 2000;

    return d;
}

int main()
{
    Pessoa vetorPessoa[10];

    srand(time(NULL));

    for(int i = 0; i < 10; i++)
    {
        printf("Escreva o nome: ");
        scanf("%[^\n]", vetorPessoa[i].nome);
        printf("Agora escreva a altura: ");
        scanf("%f", &vetorPessoa[i].altura);
        vetorPessoa[i].nascimento = PreencheData();
        fflush(stdin);
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%s %.2fm %d/%d/%d\n", vetorPessoa[i].nome, vetorPessoa[i].altura, vetorPessoa[i].nascimento);
    }
    return 0;
}