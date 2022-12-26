#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,x1,x2;
    printf("Enter the value of a,b and c:");
    scanf("%d%d%d",&a,&b,&c);
     d=b*b-4*a*c;
   if (d>0)
   {
       printf("Roots are real\n");
       printf("Roots are :");
       x1=b/(2*a)+(sqrt(d))/(2*a);
        x2=b/(2*a)-(sqrt(d))/(2*a);
         printf("%d,%d",x1,x2);
   }
   else if(d<0)
   {
       printf("Roots are imaginary\n");
       printf("Roots are :");
         x1=(b+sqrt(d))/(2*a);
        x2=(b-sqrt(d))/(2*a);
         printf("%d,%d",x1,x2);
   }
   else
   {
    printf("Roots are equal\n");
    printf("Roots are :");
    x1=(b+sqrt(d))/(2*a);
        x2=(b-sqrt(d))/(2*a);
    printf("%d,%d",x1,x2);
   }
}
