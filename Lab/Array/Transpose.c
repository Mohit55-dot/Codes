//Transpose of Matrix:
#include<stdio.h>
int main ()
{
    int r,c,i,j;
    printf("Enter the row of array:");
    scanf("%d",&r);
    printf("Enter the column of array:");
    scanf("%d",&c);
    int a[r][c],b[c][r];

    //Input
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
         {
        printf("\na[%d][%d]=",i,j);
        scanf("%d",&a[i][j]);
    }}

    // for transpose:
    for (i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        b[j][i]=a[i][j];
    }}

    // Output
    printf("\nThe matrix after Transpose:\n");
    for (i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
        printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;



}