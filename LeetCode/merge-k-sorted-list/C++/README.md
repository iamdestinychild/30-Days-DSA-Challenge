# 23- Merge-K-sorted-list

You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.
Merge all the linked-lists into one sorted linked-list and return it.

## How to Run

1. Make sure you have a C++ compiler installed on your system, such as g++.

2. Clone this repository to your local machine or download the `merge-k.cpp` file.

3. Open your terminal or command prompt.

4. Navigate to the directory where the `merge-k.cpp` file is located.

5. Compile the C++ code using your compiler.

6. Run the program by executing the generated executable:

7. The program will execute and display the result, which will show the indices of the two numbers that add up to the target value.

## Example Usage

Here's an example of how to use this program:

```shell
$ g++ merge-k.cpp -o merge-k
$ ./merge-k
```

## Intuition

The code implements a solution to merge k sorted linked lists into a single sorted linked list. This problem is often encountered in scenarios where you have multiple sources of sorted data that need to be combined into a single sorted result.

## Approach

The code uses a `divide-and-conquer strategy` to merge the k lists efficiently. The mergeTwoLists function merges two sorted linked lists into one, and the merge function recursively divides the list of lists into smaller subproblems until it merges all the lists. The final merged list is returned as the result.

**mergeTwoLists function:**

Merges two sorted linked lists by comparing the values of their nodes.
It uses a dummy node to simplify the merging process and returns the merged list.

**Merge function:**

Recursively divides the list of lists into smaller subproblems.
Merges the left and right halves of the list of lists by calling mergeTwoLists.
Continues dividing and merging until all lists are combined into one.

**mergeKLists function:**

Initializes the merge process by calling merge with the entire list of lists.
Returns the merged list as the final result.

## Complexity Analysis

# Time Complexity:

The mergeTwoLists function takes O(m + n) time to merge two lists of lengths m and n.
The merge function divides the problem into halves, so it takes O(N _ log(k)) time, where N is the total number of nodes in all lists.
Thus, the overall time complexity is `O(N _ log(k))`, where k is the number of input lists.

# Space Complexity:

The space complexity is dominated by the recursion stack during the merge function, which can go up to `O(log(k))` due to the divide-and-conquer approach.
Additionally, a few extra variables are used in each recursion, so the space complexity is O(log(k)) due to the function call stack.
This README provides a high-level overview of the code's purpose, approach, and complexity analysis. It helps users understand the code's functionality and performance characteristics when merging k sorted linked lists.
