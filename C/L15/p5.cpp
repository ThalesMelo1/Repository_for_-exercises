#include <iostream>

class Televisao
{
    private:
        int volume;
        int canal;
    public:
    Televisao()
    {
        volume = 0;
        canal = 1;
    }

    void AumentarVolume()
    {
        this->volume = volume + 1;
        if(volume > 100)
        {
            this->volume = volume - 1;
            std::cout << "Volume maximo";
        }
    }

    void DiminuirVolume()
    {
        this->volume = volume - 1;
        if(volume < 0)
        {
            this->volume = volume + 1;
            std::cout << "Volume minimo";
        }
    }

    void DescerCanal()
    {
        this->canal = canal - 1;
        if(canal < 0)
        {
            this->canal = canal + 1;
            std::cout << "Canal minimo";
        }
    }

    void SubirCanal()
    {
        this->canal = canal + 1;
    }

    void CanalEspecifico(int canal)
    {
        this-> canal = canal;
    }

    void DisplayTelevisao()
    {
        std::cout << "Volume: " << volume << std::endl << "Canal: " << canal << std::endl;
    }


};

int main()
{
    Televisao tv;
    int controle, channel;
    while(controle != 6)
    {
    std::cout << "Menu:\n1)Trocar de canal\n2)Trocar para canal especifico\n3)Aumentar volume\n4)Diminuir volume\n5)Mostrar canal e volume\n6)Desligar\n";
    std::cin >> controle;
    if(controle == 1)
    {
        while(controle != 3)
        {
        controle = 0;
        std::cout << "1)Subir canal\n2)Descer canal\n3)Menu\n";
        std::cin >> controle;
        if(controle == 1)
        {
            tv.SubirCanal();
        }
        if(controle == 2)
        {
            tv.DescerCanal();
        }
        }
    }
    if(controle == 2)
    {
        std::cout << "Escreva o canal desejado: ";
        std::cin >> channel;
        tv.CanalEspecifico(channel);
    }
    if(controle == 3)
    {
        tv.AumentarVolume();
    }
    if(controle == 4)
    {
        tv.DiminuirVolume();
    }
    if(controle == 5)
    {
        tv.DisplayTelevisao();
    }
    }
    return 0;
}