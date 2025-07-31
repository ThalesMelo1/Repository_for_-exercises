import java.util.Scanner;
import java.util.ArrayList;

public class SumList
{
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        ArrayList<Integer> numeros = new ArrayList<>();
        
        int number = 0, sum = 0;

        while(number != -1)
        {
            number = scanf.nextInt();
            numeros.add(number);
        }
        for(int i = 0; i < (numeros.size() - 1); i++)
        {
            sum = sum + numeros.get(i);
        }
        System.out.println("A soma de seus numeros é: " + sum);
        scanf.close();
    }
}