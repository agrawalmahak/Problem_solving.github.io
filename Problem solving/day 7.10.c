#include<stdio.h>
 int main()
{
    char string[]="Today is very very nice day";
    int i,j,length=strlen(string);
    int frq[length];
    for(i=0;i<strlen(string);i++)
    {
        frq[i]=1;
        for(j=i+1;j<strlen(string);j++)
        {
            if(string[i]==string[j])
            {
                frq[i]++;
                string[j]='0';
            }
        }
    }
        printf("Character and their corresponding frequencies\n ");
        for(i=0;i<strlen(string);i++)
        {
            if(string[i]!=' ' && string[i]!='0')
        printf("%c-%d\n",string[i],frq[i]);
        }
}
