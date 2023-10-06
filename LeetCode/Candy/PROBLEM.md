# Introduction & Problem Statement
Imagine you have a bunch of kids lined up, each with a rating assigned to them. Your task is to distribute candies to these kids following two simple rules:

1. Every child must get at least one candy.
2. A child with a higher rating should get more candies than their immediate neighbors.

## [Problem Link](https://leetcode.com/problems/candy/)

# Key Concepts and Constraints
## Why is This Problem Unique?
1. **Child Ratings:**
The ratings of each child are your only guide in how you distribute the candies. Following the rules while using these ratings makes this problem an intriguing puzzle.

2. **Minimum Candies:**
You're not just distributing candies willy-nilly; the goal is to meet the conditions using the least amount of candy.

## Constraints:

The length of the ratings array, n is between **1** and **2×10<sup>4</sup>**

Ratings are integers between **0** and **2×10<sup>4</sup>**



# Method to solve the problem
### Greedy Algorithm: Two-Pass Method
This method takes two passes through the ratings array to ensure that each child gets the appropriate amount of candy.

## The Nuts and Bolts of the Two-Pass Method
### 1. Initialize Candies Array
We start by creating a candies array of the same length as the ratings array and initialize all its values to 1. This is the base case and ensures that every child will receive at least one candy, satisfying the first condition.
### 2. Forward Pass: Left to Right
Now, we iterate through the ratings array from the beginning to the end. For each child (except the first), we compare their rating with the one to the left. If it's higher, we update the candies array for that child to be one more than the child on the left. This takes care of the second condition but only accounts for the child's left neighbor.
### 3. Backward Pass: Right to Left
After the forward pass, we loop through the array again but in the reverse direction. This time, we compare each child's rating with the child to their right. If the rating is higher, we need to make sure the child has more candies than the right neighbor. So, we update the candies array for that child to be the maximum between its current number of candies and one more than the right neighbor's candies. This ensures that both neighboring conditions are checked and satisfied.
### 4. Summing it All Up
Finally, we sum up all the values in the candies array. This will give us the minimum total number of candies that need to be distributed to satisfy both conditions.


# Time and Space Complexity

### Time Complexity:
O(n), because we make two passes through the array.

### Space Complexity:
O(n), for storing the candies array.