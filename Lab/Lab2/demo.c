#include<stdio.h>
int main()
{
    int num[50],i,n,j,temp;
    printf("How many numbers:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for (i=0;i<n;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (num[i]>num[j])
            {
                temp = num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
     for (i=0;i<n;i++)
    {
        printf("\n Array in acending order is:");
        printf("%d\t",num[i]);
    }
}