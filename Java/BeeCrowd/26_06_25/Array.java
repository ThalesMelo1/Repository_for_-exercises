import java.util.ArrayList;
import java.util.Scanner;

public class Array
{
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        ArrayList<String> nomes = new ArrayList<>();
        String nome;
        for(int i = 0; i < 5; i++)
        {
            System.out.println("Escreva um nome");
            nome = scanf.nextLine();
            nomes.add(nome);
        }
        System.out.println("O terceiro nome é: " + nomes.get(2));
        scanf.close();
    }
}