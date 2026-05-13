#include<stdio.h>
int main()
{
    int n;
    printf("Enter your choice : ");
    scanf("%d",&n); // this variable will be assigned for switch choice values.

    switch(n)
    {
        case 1:
            printf("You are in first");
            break;
        case 2:
            printf("You are in second");
            break;
        case 3:
            printf("You are in third");
            break;
        case 4:
            printf("You are in fourth");
            break;
        default:
            printf("Invalid choice");

        // agar break nahi likhoge toh niche ki sari conditions run hone lagegi.
       // char values are also allowed in switch.
    }
    return 0;
}
