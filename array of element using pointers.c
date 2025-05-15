#include<stdio.h>
int main(){
    int i;
int arr[5]={10,20,30,40,50};
int *ptr=arr;
printf("array elements using pointers\n");
for(i=0;i<5;i++){
    printf("element %d: %d\n",i,*(ptr+i));
}
}
