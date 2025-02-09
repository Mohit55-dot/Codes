// Armstrong Using Recursion!!
#include<stdio.h>
int arm(int n);
int main()
{
    int num,temp,x;
    printf("Enter a number to be checked");
    scanf("%d",&num);
     temp = num;
    x = arm(num);
    if (x== temp){
        printf("\n%d is a Armstrong",temp);
    }
    else{
       printf("\n%d is not a Armstrong",temp); 
    }
    return 0;
}

int arm (int n)
{
    int rem;
    static int sum=0;
    if (n==0){
        return sum;
    }
    else{
        rem = n%10;
        sum = sum + (rem*rem*rem); 
        return arm(n/10);
    }
}