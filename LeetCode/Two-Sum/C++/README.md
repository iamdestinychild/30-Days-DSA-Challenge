# Two-Sum Problem

This C++ program finds two numbers in an array that add up to a specified target value.

## How to Run

1. Make sure you have a C++ compiler installed on your system, such as g++.

2. Clone this repository to your local machine or download the `twosum.cpp` file.

3. Open your terminal or command prompt.

4. Navigate to the directory where the `twosum.cpp` file is located.

5. Compile the C++ code using your compiler.

6. Run the program by executing the generated executable:

7. The program will execute and display the result, which will show the indices of the two numbers that add up to the target value.

## Example Usage

Here's an example of how to use this program:

```shell
$ g++ twosum.cpp -o twosum
$ ./twosum
Indices of the two numbers that add up to target: 0 1
```

## Intuition
The problem asks for two indices in an array of integers such that the elements at these indices add up to a given target value. The initial thought is to use a hash table (unordered_map in C++) to keep track of elements and their indices while iterating through the array. This approach allows us to efficiently check if a complement (the value needed to reach the target) exists in the array.

## Approach
This solution is implemented in C++. The following steps are taken to solve the problem:

1. Create and initialize an unordered_map called `numberToIndex` to store elements as keys and their corresponding indices as values.

2. Create an empty vector called `result` to store the resulting indices.

3. Iterate through the elements of the input vector 'numbers':
   - Calculate the complement by subtracting the current number from the target.
   - Check if the complement is already in the 'numberToIndex' map using `numberToIndex.find(complement)`.

4. If the complement is found:
   - Add the indices of the two numbers to the 'result' vector: the index of the complement (from the map) and the current index.
   - Return the 'result' vector and exit the function.

5. If the complement is not found:
   - Add the current number and its index to the 'numberToIndex' map.

6. If no solution is found after the entire loop, return an empty 'result' vector.

## Complexity
- Time complexity: O(n) - The algorithm iterates through the 'numbers' array once, where 'n' is the number of elements in the array. The constant-time operations inside the loop (such as map lookups and insertions) do not significantly impact the overall time complexity.

- Space complexity: O(n) - The space complexity is determined by the space required to store the 'numberToIndex' map, which can have a maximum of 'n' entries if all elements are distinct. The 'result' vector also has a space complexity of O(n) in the worst case if a solution is found.





