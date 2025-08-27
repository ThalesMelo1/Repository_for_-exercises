import java.util.Scanner;
import java.util.ArrayList;

public class MainCode
{   
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        ArrayList<Student> students = new ArrayList<>();

        String name; int idade, i = 0;

        while(true)
        {
            name = scanf.nextLine();
            if(name.isEmpty())
            {
                break;
            }
            idade = scanf.nextInt();
            if(idade.isEmpty())
            {
                break;
            }
        }


        
    }

}