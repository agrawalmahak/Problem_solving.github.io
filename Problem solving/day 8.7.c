/*
#include <stdio.h>

int main()
{
    int i, j, num, p,n;
    printf("Enter any number to print Prime factors: ");
    scanf("%d", &num);
    printf("All Prime Factors of %d are: \n", num);
    for(i=2; i<=num; i++)
    {
        if(num%i==0)
        {
           p = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                   p= 0;
                    break;
                }
            }


            if(p==1)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;
}
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to find prime:");
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            printf("%d ",i);

        }
    }
}
