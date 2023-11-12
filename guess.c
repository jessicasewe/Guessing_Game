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
    printf("%d\n", answer);



    return 0;

}