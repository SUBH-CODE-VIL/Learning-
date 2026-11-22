
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(0));

    int min = 1, max = 3;
    int playerchoice = 0;
    int computerchoice;

    do
    {
        printf("\n1 for rock\n");
        printf("2 for paper\n");
        printf("3 for scissors\n");

        printf("Please enter your choice: ");
        scanf("%d", &playerchoice);

        if(playerchoice < 1 || playerchoice > 3)
        {
            printf("Invalid choice! Try again.\n");
            continue;
        }

        computerchoice = (rand() % (max-min+1)) + min;

        printf("Computer chose: %d\n", computerchoice);

        if(playerchoice == computerchoice)
        {
            printf("The match was a draw!\n");
        }
        else if(playerchoice == 1 && computerchoice == 3)
        {
            printf("Player wins!\n");
        }
        else if(playerchoice == 1 && computerchoice == 2)
        {
            printf("Computer wins!\n");
        }
        else if(playerchoice == 2 && computerchoice == 1)
        {
            printf("Player wins!\n");
        }
        else if(playerchoice == 2 && computerchoice == 3)
        {
            printf("Computer wins!\n");
        }
        else if(playerchoice == 3 && computerchoice == 1)
        {
            printf("Computer wins!\n");
        }
        else if(playerchoice == 3 && computerchoice == 2)
        {
            printf("Player wins!\n");
        }

    } while(playerchoice == computerchoice);

    return 0;
}
