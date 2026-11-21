#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    int max = 500;
    int min = 1;
    int tries = 0;
    int input;
    srand(time(0));

    printf("Welcome to the Guessing game : \n");
    printf("pls enter your guess : \n");
    scanf("%d", &input);
    int random1 = (rand() % (max - min +1))+ min;
    while (input != random1)
    {
        printf("the guess was incorecct :)\n");
        printf("pls enter another guess : ");
        scanf("%d", &input);
        tries++;
        printf("\n");
        if(input<random1){
            printf("the number is higher than your guess \n");
        }
        else if (input>random1)
        {
         printf("The number is lower than your guess\n");
        }
        }
    printf("Congratulation You have guessed the number correctly !!!!!!!!\n");
    printf("it took you %d tries", tries);
    


    


    return 0;

}