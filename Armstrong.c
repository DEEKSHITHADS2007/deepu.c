#include<stdio.h>
#include<math.h>
int main(){
int num,result=0,remainder,original;
printf("enter the num:\n");
scanf("%d",&num);
original=num;
while(num!=0){
    remainder=num%10;
    result += remainder*remainder*remainder;
    num/=10;
}
if(original=result){
    printf("armstrong number %d\n",original);
}
else {
    printf(" not a armstrong %d\n",original);
}
}
