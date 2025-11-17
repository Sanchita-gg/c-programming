#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void menu();
void rules();
void Game();
void Developer();
void History();

int main() 
{
    menu();
    return 0;
}

// Displays the main menu
void menu()
{
    int choice;
    do 
    {
        printf("\n-----------------------------------------\n");
        printf("         ROCK - PAPER - SCISSORS GAME\n");
        printf("-----------------------------------------\n");
        printf("1. View Rules\n");
        printf("2. Play Game\n");
        printf("3. View History\n");
        printf("4. About Developer\n");
        printf("5. Exit\n");
        printf("-----------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                rules(); 
                break;
            case 2:
                Game();
                break;
            case 3:
                History();
                break;
            case 4:
                Developer();
                break;
            case 5:
                printf("\nThank you for playing!\n");
                break;
            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    } while (choice != 5);
}

// Displays game rules
void rules() 
{
    printf("\n========== GAME RULES ==========\n");
    printf("1. The game is played between you and the computer.\n");
    printf("2. You must choose one of the following: Rock, Paper, or Scissors.\n");
    printf("3. The computer will also make its choice randomly.\n");
    printf("4. The winner of each round is decided as follows:\n");
    printf("     - Rock beats Scissors (Rock crushes Scissors)\n");
    printf("     - Scissors beats Paper (Scissors cuts Paper)\n");
    printf("     - Paper beats Rock (Paper wraps Rock)\n");
    printf("5. If both you and the computer choose the same option, it's a draw.\n");
    printf("6. You can play multiple rounds; your total score will be displayed.\n");
    printf("7. You can exit anytime by choosing the Exit option from the main menu.\n");
    printf("8. Play smart, have fun, and try to beat the computer!\n");
    printf("=================================\n\n");
}

// Handles the main game logic
void Game()
{
    int rounds, i;
    char playerChoice, compChoice;
    int playerScore = 0, compScore = 0;

    srand(time(0)); // Seed for random number generation

    printf("\nEnter number of rounds: ");
    scanf("%d", &rounds);

    for (i = 1; i <= rounds; i++)
    {
        int random = rand() % 3; // 0 = Rock, 1 = Paper, 2 = Scissors
        if (random == 0)
        {
            compChoice = 'r';
        }
        else if (random == 1) 
        {
            compChoice = 'p';
        }
        else
        {
            compChoice = 's';
        }

        printf("\nRound %d\n", i);
        printf("Enter your choice (r/p/s): ");
        scanf(" %c", &playerChoice);

        printf("You chose: %c, Computer chose: %c\n", playerChoice, compChoice);

        // Determine winner
        if (playerChoice == compChoice) 
            printf("It's a draw!\n");
        else if 
                 ((playerChoice == 'r' && compChoice == 's') ||
                 (playerChoice == 'p' && compChoice == 'r') ||
                 (playerChoice == 's' && compChoice == 'p')) 
        {
            printf("You win this round!\n");
            playerScore++;
        }
        else
        {
            printf("Computer wins this round!\n");
            compScore++;
        }
    }

    // Final result
    printf("\n-----------------------------------------\n");
    printf("Final Scores:\n");
    printf("You: %d\nComputer: %d\n", playerScore, compScore);

    if (playerScore > compScore)
        printf("\nCongratulations! You are the overall winner!\n");
    else if (playerScore < compScore)
        printf("\nComputer wins the game! Better luck next time!\n");
    else
        printf("\nGame ended in a draw!\n");
    printf("-----------------------------------------\n");

    // File handling part – save result
    FILE *fp;
    fp = fopen("game_history.txt", "a");
    if (fp != NULL)
    {
        fprintf(fp, "Total Rounds: %d | You: %d | Computer: %d | ", rounds, playerScore, compScore);
        if (playerScore > compScore)
            fprintf(fp, "Result: You Won\n");
        else if (playerScore < compScore)
            fprintf(fp, "Result: Computer Won\n");
        else
            fprintf(fp, "Result: Draw\n");
        fclose(fp);
    }

    // Replay option
    char playAgain;
    printf("\nDo you want to play again? (y/n): ");
    scanf(" %c", &playAgain);
    if (playAgain == 'y' || playAgain == 'Y')
        Game();
}

// View History function
void History()
{
    FILE *fp;
    char line[200];

    fp = fopen("game_history.txt", "r");
    if (fp == NULL)
    {
        printf("\nNo game history found yet.\n");
        return;
    }

    printf("\n=========== GAME HISTORY ===========\n");
    while (fgets(line, sizeof(line), fp))
    {
        printf("%s", line);
    }
    fclose(fp);
    printf("====================================\n");
}

// About developer section
void Developer() 
{
    printf("\n---------------------------------------\n");
    printf("             ABOUT DEVELOPER\n");
    printf("---------------------------------------\n");
    printf("Name          : Sanchita Luthra\n");
    printf("Course        : B.Tech\n");
    printf("Semester      : 1st Semester\n");
    printf("University    : UPES\n");
    printf("Project Title : Rock-Paper-Scissors Game\n");
    printf("Language Used : C\n");
    printf("Date          : November 2025\n");
    printf("---------------------------------------\n");
    printf("Thank you for viewing my project!\n");
    printf("---------------------------------------\n");
}
