print 10 rows righr angled left justified stars
import java.io.*;
class rst{
    public static void main(String[] args) {
        int row,num,space,star;
        for(row=1;row<=10;row++)
        {
        for(space=1;space<=10-row;space++)
        {
            System.out.print(" ");
        }
            for(star=1;star<=row;star++)
            {
                System.out.print("*");
            }
        System.out.println();
    }
}
}
