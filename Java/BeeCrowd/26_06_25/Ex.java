import java.util.Scanner;

public class Ex
{
    public static void untilNumber(int num)
    {
        for(int i = 1; i <= num; i++)
        {
            System.out.println(i);
        }

    }
    
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        int numero;
        numero = scanf.nextInt();
        untilNumber(numero);
        scanf.close();
    }
}