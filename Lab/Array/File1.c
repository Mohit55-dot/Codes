#include<stdio.h>
#include<stdlib.h>
int main ()
{
    FILE *fptr;
    fptr = fopen("Test.txt","w");
    if (fptr == NULL)
    {
        printf("\n File not created:");
        exit(1);
    }
    else{
        printf("\nFile Created Successfully:");
    }
    fputs("Welcome to file",fptr);
    fclose(fptr);
    return 0;
}