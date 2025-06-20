#include <iostream>

class Relogio
{
private:
    int segundos;
    int minutos;
    int horas;

public:
    Relogio()
    {
        segundos = 0;
        minutos = 0;
        horas = 0;
    }

    void setHora(int horas, int minutos, int segundos)
    {
        this->horas = horas;
        this->minutos = minutos;
        this->segundos = segundos;
    }

    int getHoras()
    {
        return horas;
    }

    int getMinutos()
    {
        return minutos;
    }

    int getSegundos()
    {
        return segundos;
    }

    void HorarioAtual()
    {
        std::cout << "Agora são " << horas << " horas, " << minutos << " minutos e " << segundos << " segundos." << std::endl; 
    }
};

int main()
{
    Relogio start;
    int hr, min, sec;
    std::cin >> hr >> min >> sec;
    start.setHora(hr, min, sec);
    start.HorarioAtual();
    return 0;
}