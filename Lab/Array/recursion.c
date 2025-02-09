// Program to reverse a number Using recursion!!

#include<stdio.h>
int rev (int n);
int main()
{
  int num;
  printf("Enter a number to be reversed:");
  scanf("%d",&num);
  int x = rev(num);
  printf("The reversed Number is %d",x);
}

int rev (int n)
{
    static int sum =0;
    int rem;
    if (n==0)
    {
        return sum;
    }
    else
    {
        rem = n % 10;
        sum = sum*10 + rem;
        return rev (n/10);
    }

}

