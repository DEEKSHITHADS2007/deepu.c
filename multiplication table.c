#include<stdio.h>
int main()
{
int i, num;
printf("enter a num");
scanf("%d",&num);
for(i=1; i<=5;i++)
{
printf("%d*%d=%d\n",num,i,num*i);
}
}
