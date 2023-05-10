#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    int guess;
    int number;
    int numberattempts = 1;
    srand(time(0));
    number = rand()%1000 +1;

    do
    {
        printf("Enter the number you want to be checked with a guessed number\n");
        scanf("%d", &guess);

        if (guess< number)
        {
            printf("Higher number please\n");
        }
        else if (guess> number)
        {
            printf("Lower number please\n");
        }
        else{
            printf("You have recognised in %d attempts\n",numberattempts);
        }
        numberattempts = numberattempts+1;
        
    } while (guess != number);
    

    
    return 0;
}