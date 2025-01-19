#include<stdio.h>
int main ()
{
    
    int n,max,min,temp;
    float average,sum=0;
    // For size of array
    printf("\nData of how many person:");
    scanf("%d",&n);
    int a[n];
    // for input:
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the age of person%d\t",i+1);
        scanf("%d",&a[i]); 
    }
 // Sorting!!
    for(int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
        if (a[i]<a[j])
        {
            temp = a[i];
            a[i]=a[j];
            a[j]=temp;
        }}
}
// sum
 for(int i=0;i<n;i++)
    {
      sum = sum + a[i];
    }
    
     int l = n-1;
    max = a[0];
    min = a[l];
    average = (sum / n);
    printf("\nThe maximum age = %d, minimum age = %d, average age = %d",max,min,average);

}

