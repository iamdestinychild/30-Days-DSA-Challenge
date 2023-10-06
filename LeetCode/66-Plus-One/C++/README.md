# Plus One - Increment Large Integer Represented as Array of Digits

## Problem Description

You are given a large integer represented as an array of digits, where each digit in the array corresponds to a digit of the integer. The digits are ordered from most significant (leftmost) to least significant (rightmost), and there are no leading zeros. Your task is to increment this large integer by one and return the updated array of digits while maintaining the order.

**Example 1:**
Input: `digits = [1, 2, 3]`
Output: `[1, 2, 4]`
Explanation: The input array represents the integer 123. Incrementing by one results in 124.

**Example 2:**
Input: `digits = [4, 3, 2, 1]`
Output: `[4, 3, 2, 2]`
Explanation: The input array represents the integer 4321. Incrementing by one results in 4322.

**Example 3:**
Input: `digits = [9]`
Output: `[1, 0]`
Explanation: The input array represents the integer 9. Incrementing by one results in 10.

## How to Use

To use the provided C++ code to increment a large integer represented as an array of digits, follow these steps:

1. Make sure you have a C++ compiler installed on your system, such as g++.

2. Clone this repository to your local machine or download the `PlusOne.cpp` file.

3. Open your terminal or command prompt.

4. Navigate to the directory where the `PlusOne.cpp` file is located.

5. Compile the C++ code using your compiler:
   ```shell
   g++ PlusOne.cpp -o PlusOne
   ```

## Example Usage
$ g++ PlusOne.cpp -o PlusOne
$ ./PlusOne
 [1, 2, 4]

## Approach
The approach to solving this problem efficiently involves the following steps:

Initialize variables, including n to store the number of digits in the input array and a loop to traverse the digits from right to left.

Start a loop from the least significant digit (rightmost) to the most significant digit (leftmost).

Inside the loop, increment the current digit by one and check if it becomes 10.

If the current digit is 10 after incrementing, set it to 0 and propagate a carry-over to the next digit.

If the current digit is not 10, there is no carry-over, and we can stop the loop.

After the loop, check if there is still a carry-over.

If there is a carry-over, insert an additional digit with a value of 1 at the beginning of the array.

Return the updated array, which now represents the incremented integer.

## Complexity Analysis
- Time complexity: O(n)
    - The algorithm iterates through the digits once, where n is the number of digits in the input array. Each digit is examined once in a linear fashion.
- Space complexity: O(1)
    - The algorithm uses a constant amount of extra space for variables, regardless of the size of the input array. There is no significant space dependency on the input size.

This solution efficiently increments a large integer represented as an array of digits and provides the updated array as output, all while maintaining a low time and space complexity.

