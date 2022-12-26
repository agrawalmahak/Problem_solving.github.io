
#include<stdio.h>
#include<math.h>
fact(int);
int main()
{
    int i,j,n,a,s=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    a=fact(i)/i;
     s=s+a;
    }


     printf("%d",s);

}
fact(int x)
{
    if(x==0)
        return 1;
    else
        return x*fact(x-1);
}

