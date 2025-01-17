#include<stdio.h>
int main ()
{
    int n,p;
    printf("Enter the row of array:");
    scanf("%d",&n);
    printf("Enter the column of array:");
    scanf("%d",&p);
    int a[n][p],i,j;
    printf("\n Enter array elements:");
    for (i=0;i<n;i++)
    {
        for (j=0;j<p;j++)
        {
            printf("\na[%d]a[%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    for (i=0;i<n;i++)
    {
        for (j=0;j<p;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}