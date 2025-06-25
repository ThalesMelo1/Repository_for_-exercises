#include <iostream>

class ArCondicionado
{
    private:
        float temp;
        float external; 

    public:
        ArCondicionado()
        {
            temp = 18;
            external = 24;
        }

        void SetExternal(float external)
        {
            this->external = external;
        }

        void ChangeTemp(int potencia)
        {
            this->temp = (potencia * 1.8);

        }

        void DisplayAr()
        {
            std::cout << "Temperatura externa: " << external << std::endl << "Temperatura ar condicionado: " << temp << std::endl;
        }

};

int main()
{
    ArCondicionado air;
    int potencia;
    float externa;
    std::cout << "Qual a temperatura externa?" << std::endl;
    std::cin >> externa;
    air.SetExternal(externa);
    std::cout << "Escolha a potencia de seu ar condicionado entre 0 e 10" << std::endl;
    std:: cin >> potencia;
    air.ChangeTemp(potencia);
    air.DisplayAr();
    return 0;
}