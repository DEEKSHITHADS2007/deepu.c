#include<stdio.h>
int main(){
int a=10,b=20;
int temp;
temp=a;
a=b;
b=temp;
printf("before swap:a=%d b=%d\n",a,b);
temp=a;
a=b;
b=temp;
printf("after swap:b=%d a=%d\n",a,b);
}
