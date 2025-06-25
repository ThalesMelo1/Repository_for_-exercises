#include <iostream>
#include <cmath>

class CirculoSimples
{
    private:
        float x;
        float y;
        float radius;
        float area;
        float circ;
        void CalculateArea()
        {
            area = M_PI * pow(radius, 2);
        }
        void CalculateCircunferencia()
        {
            circ = M_PI * radius * 2;
        }
        void CalculateDistancia(CirculoSimples& c)
        {

        };

    public:

        void SetCirculo(float x, float y, float radius)
        {
            this->x = x;
            this->y = y;
            this->radius = radius;
            CalculateArea();
            CalculateCircunferencia();
          
        }

  float calcularDistancia(CirculoSimples& outro)
{
      return sqrt(pow(x-outro.x,2)+pow(y-outro.y,2));
}

        void ChangeRaio(float c)
        {
            this->radius = radius * (1 + c/100);
            std::cout << "Novo raio: " << radius;
        }

        void DisplayCirculo()
        {
            std::cout << "Centro do ponto: (" << x << "," << y << ")" << std::endl << "Raio: " << radius << std::endl << "Area: " << area << std::endl;
        }
};

int main()
{
    CirculoSimples circ1;
    float raio, x, y, cresc;
    std::cout << "Digite o x do seu circulo" << std::endl;
    std::cin >> x;
    std::cout << "Digite o y do seu circulo" << std::endl;
    std::cin >> y;
    std::cout << "Digite o tamanho de seu raio" << std::endl;
    std::cin >> raio;
    circ1.SetCirculo(x, y, raio);
    circ1.DisplayCirculo();
    std::cout << "Quantos por cento voce quer aumentar o seu raio?" << std::endl;
    std::cin >> cresc;
    circ1.ChangeRaio(cresc);
    return 0;
}