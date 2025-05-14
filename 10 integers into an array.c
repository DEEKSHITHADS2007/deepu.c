#include <stdio.h>
int main(){
int i,sum=0;
int numbers[10];
printf("enter 10 integers:\n");
for(i=0;i<10;i++){
   printf("number %d:",i+1);
   scanf("%d",&numbers[i]);
   sum +=numbers[i];
}
printf("sum of the numbers=%d\n",sum);
return 0;
}
