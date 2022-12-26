#include<stdio.h>
int main()
{
    int a[25],i,b[25],l=0,u=10;
    printf("Enter the numbers in array");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            a[u]=i;
            u--;
        }
        else
        {
            a[l]=i;
            l++;
        }
    }
    for(l=0;l<5;l++)
    printf("%d",&a[l]);
        for(u=5;u<10;u++)
    printf("%d",&a[u]);
}
