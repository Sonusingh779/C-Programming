#include<stdio.h>
int main()
{
    int n,first=0,second=1,current,i;
    printf("Enter upper limit");
    scanf("%d",&n);

    printf("\nFibonacci Series :"); //a sequence where each number is the sum of the two preceding ones.
                                    //Starting with 0 and 1, (0,1,1,2,3,5,8,13,21,34,...) and continues infinitely.

    for (i=0;i<n;i++)
    {
        if(i<=1)
            current=i;
        else    
        {
            current = first + second;
            first = second;
            second = current;
        }
        printf("\t%d",current);
    }
    return 0;
}