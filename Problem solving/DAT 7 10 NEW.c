#include<stdio.h>
main()
{
    char a[20],i,s;
    int c,j;
    printf("enter string");
    gets(a);
    s=strlen(a);
    for(i='a';i<='z';i++)
    {
        c=0;
        for(j=0;j<s;j++)
        {
            if(i==a[j])
            {
                c++;
            }
        }
    }
    printf("%d",c);
}
