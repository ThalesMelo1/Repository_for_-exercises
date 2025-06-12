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
};