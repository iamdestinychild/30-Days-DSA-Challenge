# Median of Two Sorted Arrays Problem

This C++ program finds two numbers in an array that add up to a specified target value.

## How to Run

1. Make sure you have a C++ compiler installed on your system, such as g++.

2. Clone this repository to your local machine or download the `Medianofsortedarrrays.cpp` file.

3. Open your terminal or command prompt.

4. Navigate to the directory where the `Medianofsortedarrrays.cpp` file is located.

5. Compile the C++ code using your compiler.

6. Run the program by executing the generated executable:

7. The program will execute and display the result, which will show the indices of the two numbers that add up to the target value.

## Example Usage

Here's an example of how to use this program:

```shell
$ g++ twosum.cpp -o Medianofsortedarrrays
$ ./Medianofsortedarrrays
Two sorted arrays (internally used as vectors)
```

## Intuition
The problem asks for two arrays which we have used as vectors so as to facilitate the easy movement.It then asks to merge the arrays and sort it and then find the median of the sorted arrays , for odd we get a value existing in the array itself and for even number of elements we get a different value altogether. This approach of using vectors allows us to efficiently evaluate the median without any other logically issue and can be further optimised if needed.

## Approach
This solution is implemented in C++. The following steps are taken to solve the problem:

1. Create and initiliase two arrays , taken as vector datatypes

2. Merge both the arrays through some technique.

3. Sort the final array in some order ascending or descending.

4. Find the value of median through iteration , for even num of elements the process uses mean of two central elements as for odd number we get a middle element.

6. If no solution is found after the entire loop, return 0.

## Complexity

- Time complexity: O(1) - The algorithm does not iterate in any loop. The constant-time operations inside the function itself (such as extending vector and sorting) do not significantly impact the overall time complexity.

- Space complexity: O(n) - The space complexity is determined by the space required to store the 'num1 and num2' vectors, which can have a maximum of 'n' entries if all elements are distinct. The 'result' vector also has a space complexity of O(n) in the worst case if a solution is found.





