#include<stdio.h>
int main() {
int n,arr[n],sum=0,i;
printf("enter the array elements n");
scanf("%d",&n);   
printf("enter the elements\n");
for(i=0;i<5;i++){
    scanf("%d",&arr[n]);
    sum +=arr[n];
}
printf("%d\n",sum);
}
