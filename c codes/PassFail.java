import java.util.Scanner;
public class passfail
{
    public static void main(String [] args)
    {
        Scanner reader=new Scanner(System.in);
        System.out.println("enter a number");
        int a=reader.nextInt();
        if(a>=35)
        {
            System.out.println("pass");
        }
        else
        {
            System.out.println("fail");
        }
    }
}
