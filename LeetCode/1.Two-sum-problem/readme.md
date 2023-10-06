# To Start The solving

**This Problem was solved with C++, Use the below commands to start the project**

## Intuition

This problem can be solved by nesting of two loops which will eventually increase the time complexity to O(n^2).

To improve our runtime complexity, we need a more efficient way to check if the complement exists in the array. If the complement exists, we need to get its index. What is the best way to maintain a mapping of each element in the array to its index? A hash table.

We can reduce the lookup time from O(n) to O(1) by trading space for speed. A hash table is well suited for this purpose because it supports fast lookup in near constant time. I say "near" because if a collision occurred, a lookup could degenerate to O(n) time. However, lookup in a hash table should be amortized O(1) time as long as the hash function was chosen carefully.

## Time Complexity

O(n)

## space complexity

O(n)

- **Make Sure to install c/c++ extension**

- **To start the project**

```bash
    c++ solution.cpp
```