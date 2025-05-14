#include<stdio.h>
int row,col;
int a[2][3]={
     {1,2,3},
     {4,5,6}
};
int main(){
    for(row=0;row<2;row++)
       for(col=0;col<3;col++){
          printf("%d\n",a[row][col]);
       }
}
