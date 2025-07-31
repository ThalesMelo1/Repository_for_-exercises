import java.util.Scanner;
import java.util.ArrayList;

public class Last
{
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        ArrayList<String> nomes = new ArrayList<>();
        int ultimo;
        String nome;
        while(true)
        {
            nome = scanf.nextLine();
            if(nome.isEmpty())
            {
                break;
            }
            nomes.add(nome);
        }
        ultimo = nomes.size() - 1;
        System.out.println("O último nome da lista é: " + nomes.get(ultimo));
        scanf.close();
    }
}