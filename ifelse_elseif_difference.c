/*#include<stdio.h>
int main()
{
    int a;
    printf("Enter your age ");
    scanf("%d",&a);

    if(a>=60)
        printf("Senior citizen\n");
    if(a>=40)
        printf("Adult\n");
    if(a>=20)
        printf("Youth\n");
    if(a>=13)
        printf("Teenager\n");
    else    
        printf("Child\n");
    return 0;
    //here even if the first condition is true then also furthur conditions will be checked.
}*/



#include<stdio.h>
int main()
{
    int a;
    printf("Enter your age ");
    scanf("%d",&a);

    if(a>=60)
        printf("Senior citizen\n");
    else if(a>=40)
        printf("Adult\n");
    else if(a>=20)
        printf("Youth\n");
    else if(a>=13)
        printf("Teenager\n");
    else    
        printf("Child\n");
        return 0;
        //here as soon as any of the conditions is found true, loop is ended and no fiurthur conditions are checked.
}


// last wala else is always optional. it is executed only whwn all other conditions are failed.