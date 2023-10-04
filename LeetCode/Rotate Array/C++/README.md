# Rotate Array Problem

This C++ program finds two numbers in an array that add up to a specified target value.

## How to Run

1. Make sure you have a C++ compiler installed on your system, such as g++.

2. Clone this repository to your local machine or download the `rotatearray.cpp` file.

3. Open your terminal or command prompt.

4. Navigate to the directory where the `rotatearray.cpp` file is located.

5. Compile the C++ code using your compiler.

6. Run the program by executing the generated executable:

7. The program will execute and display the result, which will show the rotated array.

## Intuition
The problem asks for an array and an integer so as to rotate the array about that much times of integer value. The approach used here allows us to efficiently rotate the array with the least time complexity.

## Approach
This solution is implemented in C++. The following steps are taken to solve the problem:

1.Initialise array and integer. (array used as vector for efficiency)

2. Reverse the array thrice about 3 different sizes.

3. First one reverses it about the point we want the new list , but in the opposite order.

4. Second one reverses the remaining array completing the cycle once and overlapping.

5. LASTLY , we reverse the complete array so as to obtain the sequence we desire by bringing last to first.

6. If no solution is found after the entire loop, return an empty 'result' vector.

## Complexity
- Time complexity: O(n) - The constant-time operations do not significantly impact the overall time complexity.

- Space complexity: O(n) - Almost n which is number of elements in array. (vec)





