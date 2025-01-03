#include<stdio.h>
int main()
{
    int i,num,a,b,c=0;
    printf("Enter the first Number of series:");
    scanf("%d",&a);
    printf("\nEnter the second Number:");
    scanf("%d",&b);
    printf("\nHow many terms do you want?:");
    scanf("%d",&num);
    if (num ==1){
    printf("\n%d\t",a);
    }
    else if (num==2){
    printf("\n%d\t",a);
    printf("%d\t",b);
    }
    else
    {
    printf("\n%d\t",a);
    printf("%d\t",b);
    for (i=0;i<num-2;i++)
    {
      c=a+b;
      printf("%d\t",c);
      a=b;
      b=c;
    }}
    return 0;

}