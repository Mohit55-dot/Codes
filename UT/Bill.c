/*An electricity board charges
for first 120 units Rs. 2.5 per unit
for the next 130 units Rs. 4 per unit
for next 150 units rs 8.5 per unit
for beyonf 400 units Rs 15 per unit */

#include<stdio.h>
int main ()
{
    float unit,temp,bill;
    printf("Enter the amount of unit:\n");
    scanf("%f",&unit);
    if (unit<121)
    {
        bill = unit * 2.5;
        printf("The total amount to be paid is %f",bill);
    }
    else if (unit<251)
    {
        temp = unit - 120;
        bill = 120*2.5 + (temp*4);
         printf("The total amount to be paid is %f",bill);
    }
    else if(unit<301)
    {
         temp = unit - 120;
         bill = 120*2.5 + 130*4 + (temp*8.5);
         printf("The total amount to be paid is %f",bill);
    }
    else
    {
       temp = unit - 120;
       bill = 120*2.5 + 130*4 + 150*8.5 + (temp*15);
       printf("The total amount to be paid is %f",bill);

    }
    return 0;
}