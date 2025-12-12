#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int row, int col, vector<vector<int>> &board, int n)
{
    for (int y = 0; y < col; y++)
        if (board[row][y] == 1)
            return false;

    for (int x = row, y = col; x >= 0 && y >= 0; x--, y--)
        if (board[x][y] == 1)
            return false;

    for (int x = row, y = col; x < n && y >= 0; x++, y--)
        if (board[x][y] == 1)
            return false;

    return true;
}

void printBoard(const vector<vector<int>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j] == 1)
                cout << "Q ";
            else
                cout << ". ";
        }
        cout << endl;
    }
    cout << endl;
}

void solve(int col, vector<vector<vector<int>>> &solutions, vector<vector<int>> &board, int n)
{
    if (col == n)
    {
        solutions.push_back(board);
        printBoard(board, n);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            board[row][col] = 1;
            solve(col + 1, solutions, board, n);
            board[row][col] = 0;
        }
    }
}

int main()
{
    int n = 8;

    vector<vector<int>> board(n, vector<int>(n, 0));
    vector<vector<vector<int>>> solutions;

    solve(0, solutions, board, n);

    cout << "solution " << solutions.size() << endl;

    return 0;
}
