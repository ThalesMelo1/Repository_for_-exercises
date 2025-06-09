#include <stdio.h>

typedef struct
{
    char NomeEmpresa[50];
    char AreaAtuacao[30];
    float ValorAtual;
    float ValorAnterior;
    double VariacaoPorcentagem;

} Acao;

int main()
{
    Acao emp1;
    printf("Escreva o nome da empresa\n");
    scanf("%[^\n]", emp1.NomeEmpresa);
    fflush(stdin);
    printf("Escreva a area de atuacao dela\n");
    scanf("%[^\n]", emp1.AreaAtuacao);
    fflush(stdin);
    printf("Qual eh o valor atual dela?\n");
    scanf("%f", &emp1.ValorAtual);
    printf("E o anterior?\n");
    scanf("%f", &emp1.ValorAnterior);
    emp1.VariacaoPorcentagem = ((emp1.ValorAtual - emp1.ValorAnterior)/emp1.ValorAnterior * 100);
    printf("A variacao percentual da sua empresa eh de: %.2f%%", emp1.VariacaoPorcentagem);
    return 0;
}