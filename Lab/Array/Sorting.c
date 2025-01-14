 //For shorting  of array!!
#include<stdio.h>
int main ()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
   
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of a[%d]",i+1);
        scanf("%d",&a[i]);
    }
   
    int temp=0,j;
    for (int i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i]= a[j];
                a[j]=temp;
            }
        }
    }
    for (j=0;j<n;j++)
    {
        printf("\n%d",a[j]); 
    }
return 0;
}