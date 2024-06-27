sum of two numbers that is even or odd
#include <stdio.h>
int main()
{
    int n,n1,n2;
    printf("enter the n1 value");
    scanf("%d",&n1);
    printf("enter the n2 value");
    scanf("%d",&n2);
    n=n1+n2;
    printf("%d ",n);
    if(n%2==0)
    {
        printf("the n is even");
    }
    else
    {
        printf("the n is odd");
    }
    return 0;
}
