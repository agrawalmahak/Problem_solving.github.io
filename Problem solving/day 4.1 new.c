#include<stdio.h>
int main()
{
  printf("No. is palindrome %d",rev);
}
pd(int n,int rev,int m)
{
    if(m==0)
    {
        if(n==rev)
        return 1;
        else return 0;

    }
 pd(n,rev*10+m%10,m/10);
}
