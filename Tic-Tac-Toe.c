#include <stdio.h>
#include <stdlib.h>

// Global variable
char a[3][3];

// Function Prototypes
int winner(char a[3][3]);

int main()
{

    int person1, person2, i, j, k, row, col, num;

    char a[3][3];

    printf("WELCOME TO TIK TAK TOE\n");

    printf("Player 1: your choice as'O'\nPlayer 2: your choice as 'X'\n");
    printf("enter your choice as  row and column shown below\n");

    printf(" ____ _____ ____\n");
    printf(" 00  | 01  |02\n");
    printf(" ___||\n");

    printf(" 10  | 11  | 12 \n");
    printf(" ___||\n");

    printf(" 20  | 21  | 22 \n");
    printf(" ___||\n");

    for (i = 1; i <= 9; i++)

    {
        winner(a);

        if (i % 2 != 0)
        {

            printf("Player 1 it's your turn\n");

            printf("Enter the row and coloumn you want to place your choice: ");

            scanf("%d%d", &row, &col);

            if (a[row][col] == 'O' || a[row][col] == 'X')

            {

                printf("SORRY!! Already element exits please try again\n");

                i = i - 1;
            }

            else

                a[row][col] = 'O';
        }

        else

        {
            printf("Player 2 it's your turn\n");

            printf("Enter the row and coloumn you want to place your choice: ");

            scanf("%d%d", &row, &col);

            if (a[row][col] != 'O' || a[row][col] != 'X')

            {

                a[row][col] = 'X';
            }

            else

            {
                printf("SORRY!! already element exits please try again\n");

                i = i - 1;
            }
        }

        for (k = 0; k < 3; k++)

        {

            for (j = 0; j < 3; j++)

            {
                if (a[k][j] == 'O' || a[k][j] == 'X')

                    printf("%c\t", a[k][j]);

                else

                    printf("~\t");
            }

            printf("\n");
        }
    }

    winner(a);
}

// Function for finding the winner

int winner(char a[][3])

{
    int i;

    for (i = 0; i < 3; i++)

    {

        if (a[i][0] == a[i][1] && a[i][0] == a[i][2])

        {

            if (a[i][0] == 'X')

            {

                printf("CONGRATULATION!! PALYER 2 YOU ARE THE WINNER");

                exit(0);
            }

            else if (a[i][0] == 'O')

            {

                printf("CONGRATULATIONS!!PALYER 1 YOU ARE THE WINNER");

                exit(0);
            }
        }

        for (i = 0; i < 3; i++)

        {

            if (a[0][i] == a[1][i] && a[0][i] == a[2][i])

            {

                if (a[0][i] == 'X')

                {

                    printf("CONGRATULATIONS!! PLAYER 2 YOU ARE THE WINNER");

                    exit(0);
                }

                else if (a[0][i] == 'O')

                {

                    printf("CONGRATULATIONS!!!PALYER 1 YOU ARE THE WINNER");

                    exit(0);
                }
            }

            if (a[0][0] == a[1][1] && a[1][1] == a[2][2])

            {

                if (a[0][0] == 'X')

                {

                    printf("CONGRATULATIONS!! PLAYER 2 YOU ARE THE WINNER");

                    exit(0);
                }

                else if (a[0][0] == 'O')

                {

                    printf("CONGRATULATIONS!! PLAYER 1 YOU ARE THE WINNER");

                    exit(0);
                }
            }

            if (a[0][2] == a[1][1] && a[1][1] == a[2][0])

            {

                if (a[0][2] == 'X')

                {

                    printf("CONGRATULATIONS!! PLAYER 2 YOU ARE THE WINNER");

                    exit(0);
                }

                else if (a[0][2] == 'O')

                {

                    printf("CONGRATULATIONS!! PLAYER 1 YOU ARE THE WINNER");

                    exit(0);
                }
            }
        }
    }
}