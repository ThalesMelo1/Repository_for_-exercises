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

        void somaSegundo()
        {
            this->segundos = segundos + 1;
            if(this->segundos >= 60)
            {
                this->segundos = 0;
                this->minutos = minutos + 1;
                if(this-> minutos >= 60)
                {
                    this->minutos = 0;
                    this->horas = horas + 1;
                    if(this->horas >= 24)
                    {
                        this->horas = 0;
                        this->segundos = 0;
                        this->minutos = 0;
                    }
                }
            }
        }

        void getHoras(int &h, int &m, int &s)
        {
            h = horas;
            m = minutos;
            s = segundos;
        }

        void HorarioAtual()
        {
            std::cout << "Agora sao " << horas << " horas, " << minutos << " minutos e " << segundos << " segundos." << std::endl; 
        }
};

int main()
{
    Relogio start;
    int hr, min, sec;
    std::cin >> hr >> min >> sec;
    start.setHora(hr, min, sec);
    start.somaSegundo();
    start.somaSegundo();
    start.somaSegundo();
    start.getHoras(hr, min, sec);
    std::cout << "Agora sao " << hr << " horas, " << min << " minutos e " << sec << " segundos." << std::endl; 
    return 0;
}