//recursion means a function calling itself.
//example = factorial program
// since factorial of a number n is, n!=n*(n-1)! therefore it is recursive function.

#include<stdio.h>

int factorial(int);

int factorial(int n)
{
    if(n==1){
        return 1; // Base condition (ie termination of recursion) is important in all recursive functions.
    }
    return n*factorial(n-1);
}


int main()
{   
    int a=5;
    printf("\n The factorial of %d is %d",a,factorial(a));

    return 0;
}