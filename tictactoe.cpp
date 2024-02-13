#include <iostream>
#include <ctime>
using namespace std;

void box(char spaces[3][3], char me, char computer);
int pos();

int main()
{
    char spaces[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}};
    char me = 'X';
    char computer = 'O';
    box(spaces, me, computer);

    return 0;
}

int pos()
{
    srand(time(0));
    return (rand() % 9) + 1;
}

void box(char spaces[3][3], char me, char computer)
{
    int b, i, j, count = 0, break1 = 0;
    do
    {
        cout << "Enter your position (1-9): ";
        cin >> b;

        if (b < 1 || b > 9)
        {
            cout << "Invalid position. Please enter a number between 1 and 9." << endl;
            continue;
        }

        i = (b - 1) / 3;
        j = (b - 1) % 3;

        if (spaces[i][j] == ' ')
        {
            spaces[i][j] = me;
            count++;
        }
        else
        {
            cout << "Position already occupied. Try again." << endl;
            continue;
        }
        for (int m = 0; m < 3; m++)
        {
            if ((spaces[0][m] =='X')&&( spaces[1][m] =='X')&&( spaces[2][m] == 'X' ))
            {
                cout << "you win" << endl;
                break1++;

                break;
            }

            if ((spaces[m][0] =='X')&&( spaces[m][1] =='X')&&( spaces[m][2] == 'X'))
            {
                cout << "you win" << endl;

                break1++;
                break;
            }
        }

        if (break1 >= 1)
        {
            break;
        }

        // for tie situation
        if (count == 5)
        {
            cout << "Its a tie " << endl;
            break;
        }

        // Computer's turn
        while (true)
        {
            int a = pos();
            i = (a - 1) / 3;
            j = (a - 1) % 3;

            if (spaces[i][j] == ' ')
            {
                spaces[i][j] = computer;
                break;
            }
        }
        for (int u = 0; u < 3; u++)
        {
            if ((spaces[0][u] =='O')&&( spaces[1][u] =='O')&&( spaces[2][u] == 'O'))
            {
                cout << "you lose" << endl;
                break1++;
                break;

            }

            if ((spaces[u][0] =='O')&&( spaces[u][1] =='O')&&( spaces[u][2] == 'O') )
            {
                cout << "you lose" << endl;
                break1++;
                break;
            }
        }
        if (break1 >= 1)
        {
            break;
        }

        // Display the board
        for (i = 0; i < 3; i++)
        {
            cout << "-------------\n";
            for (j = 0; j < 3; j++)
            {

                cout << "| " << spaces[i][j] << " ";
            }

            cout << "|\n";
        }
        cout << "-------------\n";

        // Check for game end conditions (to be implemented)
        // For now, the loop breaks after each turn.

    } while (true); // Change the condition based on game logic
}
