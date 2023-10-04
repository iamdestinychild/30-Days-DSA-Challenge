## 51 N-Queens

# N-Queens Problem Solver

## Intuition

The N-Queens problem aims to place N queens on an N×N chessboard such that no two queens threaten each other. In this code, we use a backtracking algorithm to systematically explore all possible queen placements while ensuring no queen attacks another.

### Step-by-Step Approach

1. Initialize an empty chessboard of size N×N.

2. Start from the leftmost column (column 0) and iterate through each row (0 to N-1).

3. For each row, check if placing a queen in the current column and row avoids attacks from the left side, left upper diagonal, and left downward diagonal.

4. If it's safe to place a queen, mark the position as 'Q' on the board and move to the next column (recursively).

5. If we reach the last column (N-1), we've found a valid solution, so add it to the list of solutions.

6. If not safe or if we've explored all rows in the current column, backtrack by removing the queen ('.') and exploring other possibilities.

7. Repeat steps 3-6 until all valid solutions are found.

### Complexities

## Space Complexity

- Space complexity is O(N) for the board itself, as we create an N×N chessboard.
- Additionally, we use three arrays (`ld`, `ud`, and `rowFlag`) each of size 2\*N-1, which results in O(N) space complexity for these arrays.
- The space required for the result vector is O(K\*N^2), where K is the number of solutions.

Overall, the space complexity is O(N).

## Time Complexity

- The time complexity is determined by the backtracking algorithm.
- In the worst case, the algorithm explores all possible configurations of queens on the board.
- The number of recursive calls is O(N^N), as each column can have N choices.
- For each configuration, we check if it's safe to place a queen, which takes O(N) time.
- Therefore, the overall time complexity is O(N^N \* N) = O(N^(N+1)).

## How to run the code

1. **Install a C++ Compiler:**
   If you don't have a C++ compiler installed, you can download and install one. For example, if you're using Linux, you might already have g++ installed. On Windows, you can use MinGW or install a development environment like Code::Blocks or Visual Studio.

2. **Create a C++ Source File:**
   Open a text editor or your preferred code editor and create a new file with a `.cpp` extension. You can name it something like `NQueens.cpp`.

3. **Copy and Paste the Code:**
   Copy the modified C++ code provided in my previous response and paste it into your `NQueens.cpp` file.

4. **Compile the Code:**
   Open your terminal or command prompt and navigate to the directory where you saved `NQueens.cpp`. Use the `g++` compiler to compile the code:

   _bash_
   _g++ -o nqueens nqueens.cpp_

   This command will compile the code and create an executable file named `nqueens`.

5. **Run the Executable:**
   After successfully compiling, you can run the program:

   `bash ./nqueens`

   The program will execute, and if it's correct, it will print the total number of solutions to the N-Queens problem for the specified `n`.
