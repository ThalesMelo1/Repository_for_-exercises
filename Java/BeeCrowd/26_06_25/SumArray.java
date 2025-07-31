import java.util.Scanner;
import java.util.ArrayList;

public class SumArray
{
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        ArrayList<Integer> numeros = new ArrayList<>();
        int num = 1, soma = 0;
        while(num != 0)
        {
            num = scanf.nextInt();
            numeros.add(num);
        }
        soma = numeros.get(2) + numeros.get(1);
        System.out.println("A soma do segundo e terceiro número é: " + soma);
    }
}