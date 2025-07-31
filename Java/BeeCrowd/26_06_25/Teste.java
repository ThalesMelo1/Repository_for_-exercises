public class Teste
{

    public static void metodo(int condi)
    {
        if(condi == 1)
        {
            System.out.println("Hello, World!");
        }
        if(condi == 0)
        {
            System.out.println("Bye, World!");
        }
        
    }

    public static void main(String[] args)
    {
        int cond;
        cond = 1;
        Metodo(cond);
        cond = 0;
        Metodo(cond);
    }

}