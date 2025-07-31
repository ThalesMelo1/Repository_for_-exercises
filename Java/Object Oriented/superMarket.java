import java.util.Scanner;

public class superMarket
{
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        int quantidade;
        double preço;
        String nome;

        nome = scanf.nextLine();
        quantidade = scanf.nextInt();
        preço = scanf.nextDouble();


        Product p1 = new Product(nome, quantidade, preço);
        p1.printProduct();
    }
}