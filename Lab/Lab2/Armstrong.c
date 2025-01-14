// Program to find Armstrong Number:
#include<stdio.h>
#include<math.h>
int main ()
{
    int n,sum=0,rem,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp = n;
    if (n<10)
    {
        printf("Not a Armstrong:");
    }
    else
    {
      while(n!=0)
      {
         rem = n%10;
         sum = ((rem*rem*rem) + sum );
         n=n/10;
      }
      if(temp == sum)
      {
        printf("\nIt is a Armstrong:");
      }
      else
      {
        printf("\n It is not a Armstrong:");
        printf("\nThe sum is %d",sum);
      }
    
    }
}