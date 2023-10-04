class Solution:
    def solveNQueens(self, n):
        def isSafe(row, col, queens):
            # Check if placing a queen at (row, col) is safe from other queens
            for r, c in queens:
                if col == c or row - col == r - c or row + col == r + c:
                    return False
            return True

        def solve(row, queens):
            # Base case: All queens are placed successfully
            if row == n:
                solutions.append(queens[:])
                return

            for col in range(n):
                if isSafe(row, col, queens):
                    queens.append((row, col))
                    solve(row + 1, queens)
                    queens.pop()

        solutions = []
        queens = []
        solve(0, queens)

        # Convert solutions to the required format
        result = []
        for queens in solutions:
            board = [['.' for _ in range(n)] for _ in range(n)]
            for row, col in queens:
                board[row][col] = 'Q'
            result.append([''.join(row) for row in board])

        return result


# Example usage:
if __name__ == "__main__":
    n = 8  # Change 'n' to the desired board size
    solution = Solution()
    solutions = solution.solveNQueens(n)

    # Print the solutions
    for i, sol in enumerate(solutions):
        print(f"Solution {i + 1}:")
        for row in sol:
            print(row)
        print()
