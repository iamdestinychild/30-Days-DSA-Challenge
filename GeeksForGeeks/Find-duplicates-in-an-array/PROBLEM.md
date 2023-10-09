# Find duplicates in an array

Given an array a of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array. Return the answer in ascending order. If no such element is found, return list containing [-1]. 

Note: The extra space is only for the array to be returned. Try and perform all operations within the provided array. 


# Example 1:

### Input:

N = 4
a[] = {0,3,1,2}

### Output: 

-1

### Explanation: 0th and 2nd person both

There is no repeating element in the array. Therefore output is -1.

# Example 2:

### Input:

N = 5
a[] = {2,3,1,2,3}

### Output: 

2 3

### Explanation: The two people at the party both

2 and 3 occur more than once in the given array.

# Your Task:

Complete the function duplicates() which takes array a[] and n as input as parameters and returns a list of elements that occur more than once in the given array in a sorted manner. 

# Expected Time Complexity: O(N)
# Expected Auxiliary Space: O(N)


# Constraints:

1 <= N <= 105
0 <= A[i] <= N-1, for each valid i

