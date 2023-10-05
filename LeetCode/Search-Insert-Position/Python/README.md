# Search Insert Position

## Problem Description

Given a sorted array of distinct integers and a target value, your task is to return the index where the target value should be inserted into the array to maintain its sorted order. If the target value is already in the array, return its index.

You must implement an algorithm with O(log n) runtime complexity.

**Example 1:**
Input: `nums = [1, 3, 5, 6]`, `target = 5`
Output: `2`

**Example 2:**
Input: `nums = [1, 3, 5, 6]`, `target = 2`
Output: `1`

## How to Run

1. Make sure you have Python installed on your system.

2. Clone this repository to your local machine or download the `search_insert_position.py` file.

3. Open your terminal or command prompt.

4. Navigate to the directory where the `search_insert_position.py` file is located.

5. Run the Python script by executing the following command:
   ```shell
   python search_insert_position.py

## Example Usage
An example of how to use this program:
```
$ python search_insert_position.py
Result: 2
```
## Approach
The approach to solving this problem efficiently involves using a binary search algorithm:

Initialize two pointers, start and end, to the beginning and end of the sorted array, respectively.

Enter a while loop as long as start is less than or equal to end.

Calculate the middle index, mid, as the average of start and end.

Check if the element at index mid is equal to the target:

If they are equal, return mid because the target is found in the array.
If the element at mid is less than the target, update start to mid + 1 to search the end half of the array.
If the element at mid is greater than the target, update end to mid - 1 to search the start half of the array.
Repeat steps 3-4 until start is greater than end, indicating that the entire array has been searched.

If the target is not found, return start. This represents the index where the target should be inserted to maintain the sorted order.

## Complexity Analysis

- Time Complexity: O(log n)
   - The binary search algorithm divides the search space in half with each iteration, leading to a logarithmic time complexity. The time complexity is proportional to the logarithm of the number of elements in the array.
- Space Complexity: O(1)
   - The algorithm uses a constant amount of extra space for variables (`start`, `end`, `mid`) and does not depend on the size of the input array. Therefore, the space complexity is O(1).

---

This solution efficiently finds the index at which a target value should be inserted into a sorted array while maintaining a low time and space complexity, making it suitable for large sorted arrays.
