#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int dice()
{
    return (rand() % 6) + 1;
}

void game(char answer, int balance, int bet, int num)
{
    while (answer == 'y')
    {
        if (balance == 0)
        {
            printf("You have no balance left. Game over,\n");
            break;
        }

        printf("How much would you like to bet? Bet 0 if you would like to quit ");
        scanf("%d", &bet);

        if (bet <= 0 || bet > balance)
        {
            printf("Invalid bet amount. Exiting game.\n");
            break;
        }

        balance -= bet;

        printf("Your balance is %d\n", balance);

        printf("Choose a number between 1 and 6: ");
        scanf("%d", &num);

        if (num < 1 || num > 6)
        {
            printf("Invalid number. Exiting game.\n");
            break;
        }

        sleep(2);
        int dice_num = dice();

        if (num == dice_num)
        {
            printf("The number on dice is %d\n", dice_num);
            printf("You win %d\n", bet * 3);
            balance = balance + (bet * 3);
        }

        else
        {
            printf("The number on dice is %d\n", dice_num);
            printf("You lose %d\n", bet);
        }

        printf("Your balance is %d\n", balance);

        if (balance <= 0)
        {
            printf("You have no balance left. Game over.\n");
            break;
        }

        printf("Would you like to bet again? (y/n): ");
        scanf(" %c", &answer);
    }
}

int main(int argc, char const *argv[])
{
    int balance = 1000, bet = 0, num;
    char answer;

    printf("Would you like to bet? (y/n) ");
    scanf(" %c", &answer);

    if (answer == 'y')
    {
        srand(time(NULL));
        game(answer, balance, bet, num);
    }

    return 0;
}