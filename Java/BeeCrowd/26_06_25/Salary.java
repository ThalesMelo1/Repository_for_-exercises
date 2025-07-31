import java.util.Scanner;
import java.text.DecimalFormat;

public class Salary
{
    public static void main(String[] args)
    {
        Scanner scanf = new Scanner(System.in);
        int EmployeeId;
        float PPH, hours, salary;

        EmployeeId = scanf.nextInt();
        hours = scanf.nextFloat();
        PPH = scanf.nextFloat();

        salary = (hours * PPH);
        DecimalFormat formatter = new DecimalFormat("#0.00");    

        System.out.println("NUMBER = " + EmployeeId);
        System.out.println("SALARY = U$ " + formatter.format(salary));
        close(scanf);
    }
}