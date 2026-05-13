#include<stdio.h>

void swap( int*x , int*y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 3, b = 4;
    swap(&a, &b);
    printf("a = %d \t b = %d",a,b);   
    return 0;
}