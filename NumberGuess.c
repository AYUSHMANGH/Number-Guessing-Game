#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// Guess the number game
int main()
{
    int g = 1;
    char name[25];
    srand(time(0));
    int num = (rand() % 100) + 1;
    printf("What's your name buddy?\n");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
    printf("Welcome %s to our number guessing game ;)\n", name);
    while (1)
    {
        int user;
        printf("Enter a number between 1 & 100= ");
        scanf("%i", &user);
        if (user == num)
        {
            printf("\n*****************************\n");
            printf("Congrats!!Correct guess %s", name);
            printf("\nNumber of Guesses = %i\n", g);
            break;
        }
        else if (user > num)
        {
            printf("Guessed number is very big try again !!\n");
            g++;
            printf("\nNumber of Guesses = %i\n", g);
        }
        else if (user < num)
        {
            printf("Guessed number is very small try again !!\n");
            g++;
            printf("\nNumber of Guesses = %i\n", g);
        }
    }
}