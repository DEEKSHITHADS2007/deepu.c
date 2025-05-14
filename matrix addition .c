#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],sum[5][5],m,n,i,j;
    printf("Enter the order of matrix:");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix A:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements of matrix B:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=0;
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("matrix a is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%6d",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix b is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%6d",b[i][j]);
        }
        printf("\n");
    }
    printf("sum Matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%6d",sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
