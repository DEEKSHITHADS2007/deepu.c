#include <stdio.h>
int i;
int even_number(int arr[],int size){
printf("even number in the array:\n");
for(i=0;i<size;i++){
    if(arr[i]%2==0){
        printf("%d ",arr[i]);
    }
}
   printf("\n");
}
int main(){
 int numbers[]={20,64,89,5,4,2};
 int size=sizeof(numbers)/sizeof(numbers[0]);
 even_number(numbers,size);
return 0;
}
