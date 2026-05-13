#include <stdio.h>
#include <math.h>

int main()
{
    int n, r, count = 0, sum = 0, k, l,u;
    printf("Enter lower limit and upper limit respectively\n");
    scanf("%d%d",&l,&u);

    for (n = l; n <= u; n++)
    {
        count = 0;
        k = n;

        while (k > 0)
        {
            k = k / 10;
            count = count + 1;
        }
        // printf("\nNo. of digits = %d",count);

        sum = 0;
        k = n;
        while (k > 0)
        {
            r = k % 10;
            sum = sum + pow(r, count);
            k = k / 10;
        }
        // printf("\nTotal = %d",sum);

        if (n == sum)
            printf("\n %d", n);
        // else
        //  printf("\nNot armstrong");
    }

    return 0;
}