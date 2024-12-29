#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,root1,root2,determinent,temp;
    printf("\nEnter the value of a, b, c of quadratic equation");
    scanf("%f%f%f",&a,&b,&c);
    temp = (b*b - 4*a*c);
    determinent = sqrt(temp);
    if (determinent<0)
    {
        printf("Roots are imaginery");
    }
    else if (determinent==0)
    {
        printf("\nRoots are real and equal");
        root1 = (- b)/ (2*a);
        printf("\n root1=root2=%f",root1);
    }
    else
    {
        printf("\nRoots are real and unequal"); 
        root1 = (-b - determinent)/ (2*a);
        root2 = (-b + determinent)/ (2*a);
        printf("\n root1=%f",root1);
        printf("\n root2=%f",root2);
    }
return 0;

}