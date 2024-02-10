#include <iostream>
#include <ctime>
using namespace std;
int a, b, i, j;
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
    a = (rand() % 9) + 1;

    return a;
}

void box(char spaces[3][3], char me, char computer)
{
    do
    {
        cout << "enter your position" << endl;
        cin >> b;
        switch (b)
        {
        case 1:
            i = 0;
            j = 0;
            break;

        case 2:
            i = 0;
            j = 1;
            break;
        case 3:
            i = 0;
            j = 2;
            break;
        case 4:
            i = 1;
            j = 0;
            break;
        case 5:
            i = 1;
            j = 1;
            break;
        case 6:
            i = 1;
            j = 2;
            break;
        case 7:
            i = 2;
            j = 0;
            break;
        case 8:
            i = 2;
            j = 1;
            break;
        case 9:
            i = 2;
            j = 2;
            break;
        default:
            cout << "error fix krle bhai " << endl;
            break;
        }

        if (spaces[i][j] == ' ')
        {
            spaces[i][j] = me;
        }
        else
        {
            continue;
        }

        while (true)
        {
            a = pos();

            switch (a)
            {
            case 1:
                i = 0;
                j = 0;
                break;

            case 2:
                i = 0;
                j = 1;
                break;
            case 3:
                i = 0;
                j = 2;
                break;
            case 4:
                i = 1;
                j = 0;
                break;
            case 5:
                i = 1;
                j = 1;
                break;
            case 6:
                i = 1;
                j = 2;
                break;
            case 7:
                i = 2;
                j = 0;
                break;
            case 8:
                i = 2;
                j = 1;
                break;
            case 9:
                i = 2;
                j = 2;
                break;

            default:
                cout << "error fix krle bhai " << endl;
                break;
            }

            if (i == 0 && j == 0)
            {
                if (spaces[i][j] == ' ')
                {
                    spaces[i][j] = computer;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else if (i == 0 && j == 1)
            {
                if (spaces[i][j] == ' ')
                {
                    spaces[i][j] = computer;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else if (i == 0 && j == 2)
            {
                if (spaces[i][j] == ' ')
                {
                    spaces[i][j] = computer;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else if (i == 1 && j == 0)
            {
                if (spaces[i][j] == ' ')
                {
                    spaces[i][j] = computer;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else if (i == 1 && j == 1)
            {
                if (spaces[i][j] == ' ')
                {
                    spaces[i][j] = computer;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else if (i == 1 && j == 2)
            {
                if (spaces[i][j] == ' ')
                {
                    spaces[i][j] = computer;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else if (i == 2 && j == 0)
            {
                if (spaces[i][j] == ' ')
                {
                    spaces[i][j] = computer;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else if (i == 2 && j == 1)
            {
                if (spaces[i][j] == ' ')
                {
                    spaces[i][j] = computer;
                    break;
                }
                else
                {
                    continue;
                }
            }
            else if (i == 2 && j == 2)
            {
                if (spaces[i][j] == ' ')
                {
                    spaces[i][j] = computer;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        for (i = 0; i < 3; i++)

        {
            cout << "---------------------------------------------\n";
            for (j = 0; j < 3; j++)
            {
                cout << spaces[i][j] << '\t';
            }
            cout << '\n';
        }
    } while (!(b > 0) || !(b < 8));
}
