# Peak Element in Array

## Problem Description

A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array `nums`, your task is to find a peak element and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that `nums[-1] = nums[n] = -∞`. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.

**Example 1:**

Input: `nums = [1,2,3,1]`
Output: `2`
Explanation: `3` is a peak element, and your function should return the index number `2`.

**Example 2:**

Input: `nums = [1,2,1,3,5,6,4]`
Output: `5`
Explanation: Your function can return either index number `1`, where the peak element is `2`, or index number `5`, where the peak element is `6`.

## Constraints

- `1 <= nums.length <= 1000`
- `-2^31 <= nums[i] <= 2^31 - 1`
- `nums[i] != nums[i + 1]` for all valid `i`.

## How to Run

1. Make sure you have a C++ compiler installed on your system, such as g++.

2. Clone this repository to your local machine or download the `FindPeakElement.cpp` file.

3. Open your terminal or command prompt.

4. Navigate to the directory where the `FindPeakElement.cpp` file is located.

5. Compile the C++ code using your compiler.

6. Run the program by executing the generated executable and passing in the sample input arrays (`nums`) as arguments.

7. The program will execute and display the index of the peak element in the array.

## Example Usage

An example of how to use this program:

```shell
$ g++ FindPeakElement.cpp -o FindPeakElement
$ ./FindPeakElement 1 2 3 1
Peak element found at index: 2
