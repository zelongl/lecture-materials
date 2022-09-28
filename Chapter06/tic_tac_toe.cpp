#include <iostream>
#include <vector>

using namespace std;

void printBoard(const vector<vector<char>> &board);
char getWinner(const vector<vector<char>> &board);

int main()
{
    vector<vector<char>> board = {{'-', '-', '-'}, {'-', '-', '-'}, {'-', '-', '-'}};

    int turn{0};

    do
    {
        int row, col;
        printBoard(board);

        if (turn % 2 == 0)
        {
            cout << "Player 1 Enter Location: ";
            cin >> row >> col;

            board.at(row).at(col) = 'X';
        }
        else
        {
            cout << "Player 2 Enter Location: ";
            cin >> row >> col;

            board.at(row).at(col) = 'O';
        }
        turn++;
    } while (getWinner(board) == ' ');

    char winner = getWinner(board);
    if (winner == 'X')
    {
        cout << "Congrats Player 1!!" << endl;
    }
    else
    {
        cout << "Congrats Player 2!!" << endl;
    }

    printBoard(board);

    return 0;
}

void printBoard(const vector<vector<char>> &board)
{
    for (auto &row : board)
    {
        for (auto &space : row)
        {
            cout << space << " ";
        }
        cout << endl;
    }
}

char getWinner(const vector<vector<char>> &board)
{
    // determine if winner in each row
    for (int i = 0; i < 3; i++)
    {
        auto &row = board.at(i);
        if (row.at(0) != '-' && row.at(0) == row.at(1) && row.at(1) == row.at(2))
        {
            return row.at(0);
        }
    }

    // determine if winner in each column
    for (int i = 0; i < 3; i++)
    {
        if (board.at(0).at(i) != '-' && board.at(0).at(i) == board.at(1).at(i) && board.at(2).at(i) == board.at(1).at(i))
        {
            return board.at(0).at(i);
        }
    }

    // determine if winner in each diagonal

    return ' ';
}