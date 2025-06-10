#include <stdio.h>

typedef struct 
{
    char titulo[100];
    char nome[50];
    int ano;

} Livro;

int main()
{
    Livro lv1;
    printf("Escreva os dados de seu livro\nComecando pelo titulo: ");
    scanf("%[^\n]", lv1.titulo);
    fflush(stdin);
    printf("Agora o nome de seu autor: ");
    scanf("%[^\n]", lv1.nome);
    fflush(stdin);
    printf("Por ultimo o ano que foi lancado: ");
    scanf("%d", &lv1.ano);
    printf("Titulo do livro: %s\nNome do autor: %s\nAno lancado: %d", lv1.titulo, lv1.nome, lv1.ano);
    return 0;
}
