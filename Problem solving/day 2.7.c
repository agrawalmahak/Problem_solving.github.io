#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(j=i;j<=3-i;j++)
        {
            printf("%d",j);
        }
        for(j=2;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

