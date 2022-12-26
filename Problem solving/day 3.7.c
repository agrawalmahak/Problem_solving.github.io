
#include<stdio.h>
#include<math.h>
fact(int);
int main()
{
    int i,j,n,a,s=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n-1;i++)
    {
      a=(i/fact(2*i-1))*(pow(-1,i+1));
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

