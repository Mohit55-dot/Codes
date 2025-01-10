// Program to find the roots of quadratic equation:
#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,dis,root1,root2,temp;
    printf("Enter the value of a,b,c:\n");
    scanf("%f%f%f",&a,&b,&c);
    dis= (b*b - (4*a*c));
    if (dis==0)
    {
        printf("\n Roots are real and equal:");
        root1=root2=(-b+sqrt(dis))/(2*a);
        printf("\nThe roots are %f and %f",root1,root2);
    }
    else if (dis>0)
    {
        printf("\nThe roots are real:");
        root1= (-b+sqrt(dis))/(2*a);
        root2 = (-b-sqrt(dis))/(2*a);
        printf("\nThe roots are %f and %f",root1,root2);
    }
    else
    {

        printf("\nRoots are imaginary");
        temp = sqrt(-dis);
        root1= -b/(2*a);
        printf("\nThe first root is %f + %fi ",root1,temp);
        printf("\nThe second root is %f - %fj",root1,temp);

        
    }
    return 0;
}