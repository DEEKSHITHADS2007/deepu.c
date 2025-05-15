#include<stdio.h>
int main(){
int x=10;
int *ptr=&x;
printf("value of x: %d\n",x);
printf("value of ptr: %d\n",*ptr);
*ptr=20;
printf("enter the new value %d\n",*ptr);
}
