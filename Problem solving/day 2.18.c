#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char s[100]="geeks",*j;
    j=s;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        printf("%s\n",(j));
        *(j+i)='.';
    }

}
