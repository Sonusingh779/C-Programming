// Call by reference => Sending the address of arguments.

#include<stdio.h>

int sum (int*a , int*b) //now we're making this func. with pointers a and b.
{
    *a = 6; //we need to change the value stored in x with the help of function call.
    return (*a + *b);
}

int main()
{
    int x=1,y=4;
    printf("The sum of 1 and 4 is %d",sum(&x,&y));
    printf("\nValue of x is %d",x);
    
    //therefore value of x can now be changed by the function.
    
    return 0;
}