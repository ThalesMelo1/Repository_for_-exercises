import java.util.Scanner;

public class areaCirculo
{
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        float raio, pi;
        pi = 3.14159f;
        raio = scanf.nextFloat();
        System.out.println("Área do círculo: " + (raio*raio*pi));
    }
}