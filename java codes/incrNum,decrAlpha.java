import java.io.*;
class rst{
    public static void main(String[] args) {
        int row=10,i,j;
        char startChar='A';
        for(i=1;i<=row;i++)
        {
        for(j=1;j<=row-i;j++)
        {
            System.out.print(" ");
        }
            for(j=1;j<=i;j++)
            {
                System.out.print(j+" ");
            }
                for(j=i-1;j>=1;j--)
                  {
                      char ch=(char) (startChar +j-1);
                      System.out.print(ch+" ");
                  }
        System.out.println();
    }
}
}
