#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution
{
    // Helper function to check if placing a queen at (row, col) doesn't attack from the left side
    bool notAttacking(int row, int col, vector<string> &board, int n)
    {
        int tmpRow = row;
        int tmpCol = col;

        // Checking the left upper diagonal for any queen attack
        while (row >= 0 && col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }

        // Checking the left side of columns for attack from any queen
        row = tmpRow;
        col = tmpCol;
        while (col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            col--;
        }

        // Checking the left downward diagonal for any queen attack
        row = tmpRow;
        col = tmpCol;
        while (row < n && col >= 0)
        {
            if (board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }
        // If not under attack from the left
        return true;
    }

    // Backtracking function to solve N-Queens
    void solve(int col, vector<string> &board, vector<vector<string>> &res, int n)
    {
        // Base Case: If col reaches the end, we've placed all queens successfully
        if (col == n)
        {
            res.push_back(board);
            return;
        }

        for (int row = 0; row < n; row++)
        {
            if (notAttacking(row, col, board, n))
            {
                board[row][col] = 'Q';         // Place a queen
                solve(col + 1, board, res, n); // Recursively try placing the next queen in the next column
                board[row][col] = '.';         // Backtrack by removing the queen
            }
        }
    }

public:
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> res;
        vector<string> board(n, string(n, '.')); // Initialize the chessboard
        solve(0, board, res, n);                 // Start solving from the first column
        return res;
    }
};

int main()
{
    Solution solution;
    int n = 8; // Change 'n' to the desired board size
    vector<vector<string>> solutions = solution.solveNQueens(n);

    // Print the solutions
    for (const vector<string> &solution : solutions)
    {
        for (const string &row : solution)
        {
            cout << row << endl;
        }
        cout << "----------" << endl; // Separator between solutions
    }

    return 0;
}
