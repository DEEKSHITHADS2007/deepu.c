#include<stdio.h>
int main(){
int a=10,b=20;
int *ptr1=&a;
int *ptr2=&b;
printf("before swap:a=%d b=%d\n",a,b);
int temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
printf("after swap:b=%d a=%d\n",a,b);
}
