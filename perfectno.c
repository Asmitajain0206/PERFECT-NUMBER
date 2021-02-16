#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,sum=0,i;
    printf("ENTER number :");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
           {
            sum+=i;
           }
    }
    if(n==sum)
    {
        printf("\nPERFECT NUMBER!");
    }
    else
        printf("\nNOT A PERFECT NO!");
    return 0;
}
