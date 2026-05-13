#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,k,f=0,ul;
    printf("enter number  ");
    scanf("%d",&n);
    
    for(k=n;k>1;k--)
    {
        f=0;
        for(i=2;i<k;i++)
        {
            if(k%i==0)
            f++;
        }          
        
        if(f==0)
        //printf("\n %d is composite",k);
        //else
        printf("\n %d is prime ",k);

         //printf("\nfactors = %d",f);
        
    }


    return 0;
}