#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if((i==1)|| (i==n)|| (j+i==n+1))
            printf("*");

            else
                printf(" ");
        }
        printf("\n");
    }
}
