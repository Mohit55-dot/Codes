#include<stdio.h>
#include<stdlib.h>
int main ()
{
    FILE *fptr;
    char s[100];
    fptr = fopen("test.txt","r");
    if (fptr == NULL)
    {
        printf("\n File cannot be open:");
        exit(1);
    }
    else{
        printf("\nFile opened Successfully:");
        
    }
    fgets(s,100,fptr);
    printf("\n The content of the file %s \n",s);
    fclose(fptr);
    return 0;

}