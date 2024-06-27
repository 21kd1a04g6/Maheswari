print 10 rows left angled left justified 
import java.io.*;
class rst{
    public static void main(String[] args) {
        int row,num,space;
        for(row=1;row<=10;row++)
        {
        for(space=1;space<=10-row;space++)
        {
            System.out.print(" ");
        }
            for(num=1;num<=row;num++)
            {
                System.out.print(num);
            }
        System.out.println();
    }
}
}
