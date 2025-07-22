import java.util.Scanner;

public class difProdutos
{
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        int A, B, C, D;
        A = scanf.nextInt();
        B = scanf.nextInt();
        C = scanf.nextInt();
        D = scanf.nextInt();
        System.out.println("DIFERENCA = " + (A*B - C*D));
    }
}