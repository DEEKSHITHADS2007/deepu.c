#include <stdio.h>
int main(){
int i,j;
int marks[3][3]={
   {89,56,87},
   {45,87,54},
   {63,98,76}   
};
for(i=0;i<3;i++){
    printf("student %d:",i+1);
   for(j=0;j<3;j++){
       printf("%d ",marks[i][j]);
   }
   printf("\n");
}
return 0;
}
