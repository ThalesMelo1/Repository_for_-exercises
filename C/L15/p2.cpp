#include <iostream>

class Elevador 
{
    private:    
        int andarAtual;
        int andares;
        int capacidade;
        int pessoas;
    public:
        Elevador()
        {
            andarAtual = 0;
            andares = 3;
            capacidade = 5;
            pessoas = 0;
        }
        void setElevador(int andarAtual, int andares, int capacidade, int pessoas)
        {
            this->andarAtual = andarAtual;
            this-> capacidade = capacidade;
            this-> andares = andares;
            this->pessoas = pessoas;
        }
        void Entra()
        {
            this->pessoas = pessoas + 1;
            if(pessoas > capacidade)
            {
                std::cout << "Limite de pessoas atingido! Por favor saia uma pessoa" << std::endl;
                this->pessoas = pessoas - 1;
            }
        }
        void Sai()
        {
            this->pessoas = pessoas - 1;
            if(pessoas == 0)
            {
                std::cout << "Não existe pessoas no elevador para sair" << std::endl;
                this->pessoas = pessoas + 1;
            }
        }
        void Sobe()
        {
            this->andarAtual = andarAtual + 1;
            if(andarAtual > andares)
            {
                std::cout << "O elevador não consegue subir mais que esse andar";
                this->andarAtual = andarAtual - 1;
            }
        }
        void Desce()
        {
            this->andarAtual = andarAtual - 1;
            if(andarAtual < 0)
            {
                std::cout << "O elevador não consegue descer menos que esse andar";
                this->andarAtual = andarAtual + 1;
            }
        }
        void get(int &aA, int &a, int &c, int &p)
        {
            aA = andarAtual;
            a = andares;
            c = capacidade;
            p = pessoas;
        }
};

int main()
{
    Elevador elevador1;
    int andarAtual, andares, capacidade, pessoas;
    std::cout << "Escreva as seguintes informacoes do elevador:\nAndar Atual: "; std::cin >>  andarAtual;
    std::cout << "Numero de andares: "; std::cin >> andares;
    std::cout << "Capacidade de pessoas: "; std::cin >> capacidade;
    std::cout << "Numero de pessoas: "; std::cin >> pessoas;
    elevador1.setElevador(andarAtual, andares, capacidade, pessoas);
    elevador1.Entra();
    elevador1.Entra();
    elevador1.Entra();
    elevador1.Sai();
    elevador1.Sobe();
    elevador1.Sobe();
    elevador1.Sobe();
    elevador1.Sobe();
    elevador1.Entra();
    elevador1.Entra();
    elevador1.Entra();
    elevador1.Desce();
    elevador1.Sai();
    elevador1.Sai();
    elevador1.Sai();
    elevador1.Sai();
    elevador1.Sai();
    elevador1.Sai();
    elevador1.get(andarAtual, andares, capacidade, pessoas);
    std::cout << "Numero de pessoas atual: " << pessoas << "\nAndar atual: " << andarAtual << std::endl;
    return 0;
}