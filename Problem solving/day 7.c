void main()
{
    int l,i;
    char str[100];
    printf("Enter string");
    scanf("%s",str);
    l=string_length(str);
    printf("%d",l);
}
int string_length(char str[])
{
   int i=0;
   while(str[i]!='\0')
    i++;
    return i;
}

