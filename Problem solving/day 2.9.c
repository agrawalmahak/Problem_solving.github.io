#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        for(j=1;j<=i-1;j++)
        {
            printf("*");
        }
          printf("\n");

}
        for(i=1;i<=2;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf(" ");
            }
            for(j=1;j<=5-2*i;j++)
            {
                printf("*");
            }
              printf("\n");
        }
    }


