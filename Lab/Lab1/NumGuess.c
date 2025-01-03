//Number Guessing game
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main()
{
    int num=0, input, score=4;
     //Generates Random number between 1 to 20:
     srand(time(NULL)); 
    num = rand() % 20; 
    do
    {
        printf("\nGuess and enter the Number between 1 to 20 ");
        scanf("%d",&input);
        printf("Score: %d\n", score);
            if (num == input)
    {
        printf("\nCorrect Guess:");
        break;
    }
    else if (num<input)
    {
        printf("\nNumber is smaller:");
        score--;
    }
    else
    {
        printf("\nThe Number is greater:");
         score--;
    }
    if (score <= 0) {
            printf("\nGame Over! You ran out of points.\n");
            break; 
    }  
        
    } while (num!=input);
    
    
       

return 0; 
}