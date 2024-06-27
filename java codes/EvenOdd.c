Java program for the number is even or odd
import java.util.Scanner;
class EvenOdd {
    public static void main(String[] args) {
        Scanner reader=new Scanner(System.in);
        System.out.println("enter the number");
        int num=reader.nextInt();
        if(num%2==0)
        System.out.println("given number is even");
        else
        System.out.println("given number is odd");
    }
}
