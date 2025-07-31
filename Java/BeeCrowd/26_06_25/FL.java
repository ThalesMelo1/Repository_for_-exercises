import java.util.Scanner;
import java.util.ArrayList;

public class FL
{
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        ArrayList<String> listaNomes = new ArrayList<>();
        
        String nomes;
        
        while(true)
        {
            nomes = scanf.nextLine();
            if(nomes.isEmpty())
            {
                break;
            }
            listaNomes.add(nomes);
        }
        System.out.println("A quantidade de nomes colocados foi: " + listaNomes.size());
        scanf.close();
    }
}