#include<stdio.h>
int main()
{
 int a=3,b=5,n;
 printf("enter the value of n\n ");
 scanf("%d",&n);
 if(n%3==0 && n%5==0)
 {
 printf("the number is divisible by both 3 and 5\n");
}
else
{
printf("the number is not divisible by both 3 and 5\n");
}
}
