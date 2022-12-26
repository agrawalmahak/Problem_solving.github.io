
#include<stdio.h>
#include<math.h>

int main()
{
    int i,j,n,a,s=0;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     s=s+i*(i+1)*(i+2);
}
printf("%d",s);
}
