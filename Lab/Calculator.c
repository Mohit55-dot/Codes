#include<stdio.h>
#include<math.h>
int main()
{
    int choice, num1,num2,sum,diff, multiply;
    float div;
    printf("\n Welcome:");
    printf("\n 1.Sum \n 2.Difference \n 3.Multiply \n 4.Divide \n 5.Exit: ");
    
    
    do {
        printf("\n----------------------------------------------------------\n");
        printf("\nPlease make a choice\n");
        scanf("%d",&choice);
        printf("\nEnter two numbers:\n");
        scanf("%d%d",&num1,&num2);
    switch (choice)
    {
    case 1:
        sum=num1+num2;
        printf("The sum is %d",sum);
        break;
     case 2:
     if (num1>num2)
     {
        diff = num1 - num2;
        printf("\nThe difference of number is %d",diff);
     }
     else
     {
        diff= num2-num1;
        printf("\nThe difference of number is %d",diff);
     }
     break;
    case 3:
    multiply = num1 * num2;
    printf("\nThe Product is %d",multiply);
    break;
    case 4:
    div = num1/num2;
    printf("\nthe value is %f",div);
    break;
    case 5:  
    printf("\nThanks For Using!!\n")  ;
    default:
    printf("\nPlease make a Valid Choice");
        break;
    }
    } while (choice!=5);
    return 0;
}