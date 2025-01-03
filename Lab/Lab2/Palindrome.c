#include<stdio.h>
int main()
{
    int rem, num, sum=0, temp;
    printf("ENter a number:");
    scanf("%d",&num);
    temp = num;
    if (num<10)
    {
        printf("\nNot a palindrome:");
    }
    else{
        while(num!=0)
        {
            rem = num%10;
            sum = sum*10 + rem;
            num= num/10;
        }
    }
    if (temp == sum)
    {
        printf("\n Palindrome:");
    }
    else
    {
        printf("\n Not a palindrome:");
        printf("\n %d ",sum);
    }
    return 0;

}