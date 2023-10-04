# Number Of Good Pairs (C++)

This project is a C++ solution to the "Number Of Good Pairs" problem, a common coding challenge.

## Problem Description

Given an array of integers `nums`, a pair `(i, j)` is called "good" if `nums[i] == nums[j]` and `i < j`. You need to return the number of "good" pairs.

### Example

Input: `nums = {1, 2, 3, 1, 1, 3}`
Output: `4`

Explanation: There are 4 good pairs: `(0, 3)`, `(0, 4)`, `(3, 4)`, and `(2, 5)`.

## Getting Started

These instructions will help you understand and run the C++ solution locally.

### Prerequisites

- C++ compiler (e.g., g++, clang++)
- CMake (optional, for building)

### Intution
we have to count the occurrence of the same elements
with A[i] == A[j] and i < j

### Approach
1. We will intiliaze ans with 0 and an empty unordered map to store the occurrence of the element
2. For each element in the given array:
3. Here there will be 2 cases

  if element/number is present in the map that means for example at any time in unordered map we saw count of num(element) 1 is 2 thats means currunt element can form 2 pair with previous 1, so at that time we will add this count in answer and also increase the count of the element in out map

  If element/number is not present in the map, it means this is the first time we're seeing this number, so we initialize its count to 1.
  
4. At last we will return our answer

### Complexity
Time complexity : O(N)
Space complexity : O(N)