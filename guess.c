#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;


    //using curent time as the seed
    srand(time(0));

    //generate a random number between MIN and Max
    answer = (rand() % MAX) + MIN;
    
    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if(guess < answer)
        {
            printf("Too low\n");
        }
        else if(guess > answer)
        {
            printf("Too high\n");
        }
        else{
            printf("you are correct!\n");
        }
        guesses++;
    } while (guess != answer);

    printf("**************************\n");
    printf("Answer: %d\n", answer);
    printf("Guesses: %d\n", guesses);
    printf("**************************\n");
    



    return 0;

}