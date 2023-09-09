#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}

int greater (char c1, char c2)
{
    if (c1 == c2)
    {
        return -1;
    }
    if (c1 == 'r' && c2 == 's')
    {
        return 1;
    }
    else if (c1 == 'r' && c2 == 's')
    {
        return 0;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 1;
    }
    else if (c1 == 'p' && c2 == 'r')
    {
        return 0;
    }
    else if (c1 == 's' && c2 == 'p')
    {
        return 1;
    }
    else if (c1 == 's' && c2 == 'p')
    {
        return 0;
    }
}
int main()
{
    int playerScore = 0, compScore =0, temp;
    char playerChar,compChar;
    char dict[] = {'r','p','s'};
    printf("Welcome to ROCK PAPER SCISSOR GAME\n");
    printf("\t----------------------------------\n\n");
    

    for (size_t i = 0; i < 10; i++)
    {
        // take input from player
        printf("Your Turn:\n");
    printf("Choose 1 for Rock , 2 for Paper & 3 for Scissor\n");
    scanf("%d",&temp);
    getchar();
    playerChar = dict[temp-1];
    printf(" -----------------\n");
    printf("You Choose : %c\n\n", playerChar);
    printf(" -----------------\n\n");

        // computer input
       printf("Computers Turn:\n");
    temp = generateRandomNumber(3) +1;
    compChar = dict[temp-1];
    printf(" -----------------\n");
    printf("Computer Choose : %c\n\n", compChar);
    printf(" -----------------\n\n");

        if (greater(compChar, playerChar) == 1)
        {
            compScore += 1;
            printf("\t\tComputer Got It!\n");
        }    
        else if (greater(compChar, playerChar) == -1)
        {
            compScore += 1;
            playerScore += 1;
            printf("\t\tIts a Draw!\n");
        }
        else 
        {
            playerScore += 1;
            printf("\t\tYou Got It!\n");
        }
         printf(" -------------\n");
        printf("| You: %d      |\n", playerScore);
        printf("| Computer: %d |\n", compScore);
        printf(" -------------\n\n");

        printf("===========================================================\n\n");
    }
     printf(" -----------------\n");
    printf("|   Final Score   |\n");
    printf(" -----------------\n");
    printf("|  You | Computer |\n");
    printf("|------|----------|\n");
    printf("|  %d  |    %d    |\n", playerScore, compScore);
    printf(" -----------------\n\n");
    
    if (playerScore > compScore){
        printf("You Win The Game\n");
    }
    else if(playerScore < compScore){
        printf("Computer Win The Game\n");
    }
    else{
        printf("It's a Draw");
    }
    return 0;
}
