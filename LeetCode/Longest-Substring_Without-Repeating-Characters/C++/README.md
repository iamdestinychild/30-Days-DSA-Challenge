# Intuition:
To solve this problem we will use 2 pointers and hashmap.
# Approach:
We will use i and j for outer and inner loop respectively. We keep on incrementing i till we obtain repeated character and then we enter into inner while loop and decrement hashmap for jth character till we get all non-repeating characters in hashmap. After inner loop is executed every time we set mx variable for i and j variables.
# Time Complexity: O(n) where n is length of string.

