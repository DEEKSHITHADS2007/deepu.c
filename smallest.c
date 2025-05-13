#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of three diffrent numbers");
scanf("%d%d%d",&a,&b,&c);
if(a<=b && a<=c)
{
printf("%d is smallest\n",a);
}
else if(b<=a && b<=c)
{
printf("%d is smallest\n",b);
}
else
{
printf("%d is smallest\n",c);
}
}
