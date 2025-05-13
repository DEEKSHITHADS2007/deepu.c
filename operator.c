#include<stdio.h>
int main()
{
 int a=5,b=4;
 if(a>0 && b>0)
 {
 printf("both the numbers are positive\n");
 }
 if("a>0 || b>0")
 {
 printf("at least one number is zero\n");
 }
 if(!(a==b))
 {
 printf("the numbers are not equal\n");
 }
 else
 {
 printf("the numbers are  equal\n");
 }
}
