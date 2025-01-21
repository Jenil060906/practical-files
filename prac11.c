#include <stdio.h>
int main()
{
    int matchstick = 21, userpick, computerpick;
    printf("WELCOME TO THE MATCHSTICK GAME!\n");
    printf("RULES:YOU CAN PICK 1,2,3 OR 4 MATCHSTICKS. THE PLAYER FORCED TO PICK THE LAST MATCHSTICK LOSES THE GAME.\n");
    // GAMELOOP CONTINUES UNTIL THERE IS ONLY 1 MATCHSTICK LEFT.
    while (matchstick > 1)
    {
        printf("\nMATCHSTICKS REMAINING:%d\n", matchstick);
        printf("YOUR TURN! PICK 1,2,3 OR 4 MATCHSTICKS:");
        scanf("%d", &userpick);
        // CHECK IF USER'S INPUT IS VALID OR NOT.
        if (userpick < 1 || userpick > 4)
        {
            printf("INVALID INPUT! YOU CAN ONLY PICK BETWEEN 1 AND 4 MATCHSTICKS.\n");
            continue;
        }
        // UPDATE MATCHSTICKS AFTER USER'S PICK.
        matchstick -= userpick;
        // CHECKING IF USER LOST BY PICKING THE LAST MATCHSTICK.
        if (matchstick == 1)
        {
            printf("\nONLY 1 MATCHSTICK LEFT. YOU ARE FORCED TO PICK IT!\n");
            printf("YOU LOSE! COMPUTER WINS!\n");
            break;
        }
        // COMPUTER'S TURN TO PICK MATCHSTICKS STRATEGICALLY.
        // COMPUTER ALWAYS PICKS IN SUCH A WAY TO LEAVE A MULTIPLE OF 5 MATCHSTICKS.
        computerpick = 5 - userpick;
        matchstick -= computerpick;
        printf("COMPUTER PICKS %d MATCHSTICK(S).\n", computerpick);
        // CHECKING IF COMPUTER LOST BY PICKING THE LAST MATCHSTICK.
        if (matchstick == 1)
        {
            printf("\nONLY 1 MATCHSTICK LEFT. COMPUTER IS FORCED TO PICK IT!\n");
            printf("COMPUTER LOSES. YOU WON!\n");
            break;
        }
    }
    printf("THIS PROGRAM IS CREATED BY 24CE141_JENIL VIRADIA.");
    return 0;
}