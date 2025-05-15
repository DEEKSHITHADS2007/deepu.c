#include<stdio.h>
int main(){
int num,reversed=0,remainder,original;
printf("enter the num:\n");
scanf("%d",&num);
original=num;
while(num!=0){
    remainder=num%10;
    reversed=reversed*10+remainder;
    num/=10;
}
if(original=reversed){
    printf("palindrome %d\n",original);
}
else {
    printf(" not a palindrome %d\n",original);
}
}
