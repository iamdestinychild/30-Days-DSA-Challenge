**N-Queens Problem**

**Intuition:**
Place N queens on an N×N chessboard so that no two queens threaten each other.

**Approach:**

1. Use backtracking to explore all possible queen placements.
2. Check if placing a queen at a position is safe from attacks in the same row, column, and diagonals.
3. If a valid placement is found, continue placing queens recursively.
4. Backtrack and explore other possibilities if a solution is not found.
5. Convert valid solutions into the required format.

**Complexities:**

- Time Complexity: O(N!) - Exponential due to backtracking.
- Space Complexity: O(N) - For the recursive call stack and storage of solutions.

## How to Run

1. **Create a Python File:**
   Open a text editor or code editor of your choice (e.g., Visual Studio Code, Sublime Text, or Notepad++) and create a new Python file with the filename `Nqueens.py`.

2. **Copy and Paste the Code:**
   Copy the Python code provided earlier in this conversation (the one for the N-Queens problem), and paste it into your `Nqueens.py` file.

3. **Save the File:**
   Save the `Nqueens.py` file in a directory of your choice on your local machine.

4. **Open a Terminal (Command Prompt):**
   Open a terminal or command prompt on your computer.

5. **Navigate to the Directory:**
   Use the `cd` command to navigate to the directory where you saved the `Nqueens.py` file. For example:

   `bash cd /path/to/your/directory`

6. **Run the Python Script:**
   Once you are inside the directory containing the `Nqueens.py` file, run the Python script using the following command:

   `bash python Nqueens.py`

   This command will execute the Python script, and it will find and print all solutions to the N-Queens problem for the default value of `n` (which is set to 8 in the code). You can change the value of `n` in the code to test different board sizes.

7. **View the Output:**
   The code will print the solutions to the terminal. Each solution will be displayed as a chessboard configuration with queens represented as 'Q' and empty squares as '.'.
