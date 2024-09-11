// Rock Paper Scissoes is a game most of us have played during school time.
// The following c program is capable of playing this game with you
// This program also shows the result after you choose rock, paper or scissors

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer, choice;
    char *myarr[] = {"Rock", "Paper", "Scissors"};
    do
    {
        printf("Enter 0 for rock, 1 for paper and 2 for scissor:");
        scanf("%d", &player);
        computer = (rand() % 3);
        if (player == 0 && computer == 0)
        {
            printf("U chose %s and computer chose %s\n", myarr[0], myarr[0]);
            printf("No one won! Its a tie!\n\n");
        }
        else if (player == 0 && computer == 1)
        {
            printf("U chose %s and computer chose %s\n", myarr[0], myarr[1]);
            printf("Ohh hell naww! Blud lost to a computer!\n\n");
        }
        else if (player == 0 && computer == 2)
        {
            printf("U chose %s and computer chose %s\n", myarr[0], myarr[2]);
            printf("Less go you beat the computer's ass!\n\n");
        }
        else if (player == 1 && computer == 0)
        {
            printf("U chose %s and computer chose %s\n", myarr[1], myarr[0]);
            printf("Less go you beat the computer's ass!\n\n");
        }
        else if (player == 1 && computer == 1)
        {
            printf("U chose %s and computer chose %s\n", myarr[1], myarr[1]);
            printf("No one won! Its a tie!\n\n");
        }
        else if (player == 1 && computer == 2)
        {
            printf("U chose %s and computer chose %s\n", myarr[1], myarr[2]);
            printf("Ohh hell naww! Blud lost to a computer!\n\n");
        }
        else if (player == 2 && computer == 0)
        {
            printf("U chose %s and computer chose %s\n", myarr[2], myarr[0]);
            printf("Ohh hell naww! Blud lost to a computer!\n\n");
        }
        else if (player == 2 && computer == 1)
        {
            printf("U chose %s and computer chose %s\n", myarr[2], myarr[1]);
            printf("Less go you beat the computer's ass!\n\n");
        }
        else if (player == 2 && computer == 2)
        {
            printf("U chose %s and computer chose %s\n", myarr[2], myarr[2]);
            printf("No one won! Its a tie!\n\n");
        }
        else
        {
            printf("Bro atleast enter a correct choice :)\n");
        }
        printf("If u want to play again enter 1 or to exit enter 0: ");
        scanf("%d", &choice);
        printf("\n");
    } while (choice == 1);
    return 0;
}
