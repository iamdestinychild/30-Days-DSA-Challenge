class Solution {
    public void solveSudoku(char[][] board) {

        boolean[][] rows = new boolean[9][10];
        boolean[][] cols = new boolean[9][10];
        boolean[][] grids = new boolean[9][10];
        for (int row = 0; row < board.length; row++) {
            for (int col = 0; col < board[row].length; col++) {
                if (board[row][col] == '.') {
                    continue;
                }
                int num = board[row][col] - '0';
                rows[row][num] = true;
                cols[col][num] = true;
                grids[row / 3 * 3 + col / 3][num] = true;
            }
        }
        dfs(board, 0, 0, rows, cols, grids);
    }

    private static boolean dfs(char[][] board, int row, int col, boolean[][] rows, boolean[][] cols,
            boolean[][] grids) {
        if (row == 9) {
            return true;
        }
        if (col == 9) {
            return dfs(board, row + 1, 0, rows, cols, grids);
        }
        if (board[row][col] != '.') {
            return dfs(board, row, col + 1, rows, cols, grids);
        }
        for (int num = 1; num <= 9; num++) {
            if (rows[row][num] || cols[col][num] || grids[row / 3 * 3 + col / 3][num]) {
                continue;
            }
            rows[row][num] = true;
            cols[col][num] = true;
            grids[row / 3 * 3 + col / 3][num] = true;
            board[row][col] = (char) ('0' + num);

            boolean succeed = dfs(board, row, col + 1, rows, cols, grids);
            if (succeed) {
                return true;
            }

            board[row][col] = '.';
            rows[row][num] = false;
            cols[col][num] = false;
            grids[row / 3 * 3 + col / 3][num] = false;
        }
        return false;
    }
}

class Main {
    public static void main(String[] args) {
        Solution solution = new Solution();
        char[][] board = new char[][] { { '5', '3', '.', '.', '7', '.', '.', '.', '.' },
                { '6', '.', '.', '1', '9', '5', '.', '.', '.' },
                { '.', '9', '8', '.', '.', '.', '.', '6', '.' },
                { '8', '.', '.', '.', '6', '.', '.', '.', '3' },
                { '4', '.', '.', '8', '.', '3', '.', '.', '1' },
                { '7', '.', '.', '.', '2', '.', '.', '.', '6' },
                { '.', '6', '.', '.', '.', '.', '2', '8', '.' },
                { '.', '.', '.', '4', '1', '9', '.', '.', '5' },
                { '.', '.', '.', '.', '8', '.', '.', '7', '9' } };
        solution.solveSudoku(board);
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++)
                System.out.print(board[i][j] + " ");
            System.out.println();
        }
    }
}