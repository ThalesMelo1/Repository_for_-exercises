import java.util.Scanner;

public class Sum
{
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        int A, B, X;
        System.out.println("Escreva um numero");
        A = scanf.nextInt();
        System.out.println("Agora escreva outro");
        B = scanf.nextInt();
        X = A + B;
        System.out.println("A soma de seus numeros eh: " + X);
    }
}