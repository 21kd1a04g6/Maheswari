import java.util.Scanner;
class sumoftwonumsevenodd
{
    public static void main(String[] args){
    int a,b,sum;
    Scanner sc=new Scanner(System.in);
    System.out.println("enter the a value");
    a=sc.nextInt();
    System.out.println("enter the b value");
    b=sc.nextInt();
    sum=a+b;
    System.out.println(sum);
    if(sum%2==0){
        System.out.println("given number is even");
    }
    else{
       System.out.println("given number is odd"); 
    }
}
}
