## Description of the Problem

`The N-Queens puzzle is a classic problem in computer science and mathematics. In this puzzle, the goal is to place N chess queens on an N×N chessboard in such a way that no two queens threaten each other. This means that no two queens can be in the same row, column, or diagonal. Solving the N-Queens puzzle requires finding a configuration where all N queens can coexist peacefully on the board without threatening each other. It is a popular problem for algorithmic and combinatorial problem-solving exercises.`

## 51 N-queens

**Problem Statement**
`The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.`

Given an integer `n`, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.
Example 1:

**Example 1**
Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle.

**Example 2:**
Input: n = 1
Output: [["Q"]]

**Constraints:**
`1 <= n <= 9`
