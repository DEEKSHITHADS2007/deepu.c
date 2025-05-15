#include<stdio.h>
#include<math.h>
int main(){
int num,result=0,remainder,original;
double digits=0;
printf("enter the num:\n");
scanf("%d",&num);
original=num;
int temp=num;
while(num!=0){
    remainder=num%10;
    result += pow(remainder,digits);
    num/=10;
}
if(original=result){
    printf("armstrong number %d\n",original);
}
else {
    printf(" not a armstrong %d\n",original);
}
}
