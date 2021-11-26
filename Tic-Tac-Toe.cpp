#include <iostream>
using namespace std;

char placeholder = '*';
char board[3][3] = { {placeholder, placeholder, placeholder}, {placeholder, placeholder, placeholder}, {placeholder, placeholder, placeholder} };

void displayboard()
{
    cout << "     R     O     w" << endl;
    cout << "    ----- ----- -----" << endl;
    cout << " C |" << "  " << board[0][0] << "  " << "|" << "  " << board[0][1]
        << "  " << "|" << "  " << board[0][2] << "  |" << endl;
    cout << "    ----- ----- -----" << endl;
    cout << " O |" << "  " << board[1][0] << "  " << "|" << "  " << board[1][1]
        << "  " << "|" << "  " << board[1][2] << "  |" << endl;
    cout << "    ----- ----- -----" << endl;
    cout << " L |" << "  " << board[2][0] << "  " << "|" << "  " << board[2][1]
        << "  " << "|" << "  " << board[2][2] << "  |" << endl;
    cout << "    ----- ----- -----" << endl;
}

bool winner(char x)
{
    if ((board[0][0] == x) && (board[0][1] == x) && (board[0][2] == x) ||
        (board[1][0] == x) && (board[1][1] == x) && (board[1][2] == x) ||
        (board[2][0] == x) && (board[2][1] == x) && (board[2][2] == x) ||
        (board[0][0] == x) && (board[1][0] == x) && (board[2][0] == x) ||
        (board[0][1] == x) && (board[1][1] == x) && (board[2][1] == x) ||
        (board[0][2] == x) && (board[1][2] == x) && (board[2][2] == x) ||
        (board[0][0] == x) && (board[1][1] == x) && (board[2][2] == x) ||
        (board[0][2] == x) && (board[1][1] == x) && (board[2][0] == x))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int pick_row;
    int pick_column;
    int turn = 0;

    for (int i = 0; i <= 10; i++)
    {
        displayboard();
        int player = 1;
        char c = 'x';
        if (i % 2 == 1)
        {
            player = 2;
            c = 'o';
        }
        if (winner('x'))
        {
            cout << "Player 1 has Won!" << endl;
            break;
        }
        if (winner('o'))
        {
            cout << "Player 2 has Won!" << endl;
            break;
        }
        if (i == 9)
        {
            cout << "Draw.";
            break;
        }
        cout << "Player " << player << "'s Turn." << "\n" << "Pick a Row: ";
        cin >> pick_row;
        while ((pick_row != 1) && (pick_row != 2) && (pick_row != 3))
        {
            cout << "Enter a valid Row: ";
            cin >> pick_row;
        }
        cout << "Pick a Column: ";
        cin >> pick_column;
        while ((pick_row != 1) && (pick_row != 2) && (pick_row != 3))
        {
            cout << "Enter a valid Column: ";
            cin >> pick_column;
        }

        while ((*(board[pick_column - 1] + (pick_row - 1)) == 'o') || (*board[pick_column - 1] + (pick_row - 1)) == 'x')
        {
            cout << "Invalid, column and row combination. Try again." << endl;
            cout << "Enter a valid row: ";
            cin >> pick_row;
            while ((pick_row != 1) && (pick_row != 2) && (pick_row != 3))
            {
                cout << "Enter a valid row: ";
                cin >> pick_row;
            }
            cout << "Enter a valid Column: ";
            cin >> pick_column;
            while ((pick_row != 1) && (pick_row != 2) && (pick_row != 3))
            {
                cout << "Enter a valid Column: ";
                cin >> pick_column;
            }
        }
        *(board[pick_column - 1] + (pick_row - 1)) = c;
    }
    return 0;
}