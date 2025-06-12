#include <iostream>
#include <string>
using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;
    float altura;

public:
    Pessoa(string nome, int idade, float altura)
    {
        this->nome = nome;
        this->idade = idade;
        this->altura = altura;
    }

    Pessoa()
    {
        nome = "";
        idade = 0;
        altura = 0.0;
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }

    void setIdade(int idade)
    {
        this->idade = idade;
    }

    void setAltura(float altura)
    {
        this->altura = altura;
    }

    string getNome()
    {
        return nome;
    }

    int getIdade()
    {
        return idade;
    }

    float getAltura()
    {
        return altura;
    }

    void imprimirDados()
    {
        cout << "Nome da pessoa: " << nome << endl;
        cout << "Idade da pessoa: " << idade << endl;
        cout << "Altura da pessoa: " << altura << endl;
    }
};

int main()
{
    Pessoa pessoa1("Jota", 23, 1.74);

    Pessoa pessoa2;
    string name;
    int idade;
    float altura;

    cout << "Digite o nome da pessoa" << endl; 
    getline(cin, name);
    pessoa2.setNome(name);

    cout << "Digite a idade da pessoa" << endl;
    cin >> idade;
    pessoa2.setIdade(idade);

    cout << "Digite a altura da pessoa" << endl;
    cin >> altura;
    pessoa2.setAltura(altura);

    pessoa2.imprimirDados();

    return 0;
}