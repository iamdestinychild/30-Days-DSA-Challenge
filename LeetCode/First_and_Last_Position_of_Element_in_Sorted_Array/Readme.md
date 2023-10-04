Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].
You must write an algorithm with O(log n) runtime complexity.

# Topics
    Array
    Binary Search

# Companies
    Amazon
    Microsoft

# Example 1
    Input: nums = [5,7,7,8,8,10], target = 8
    Output: [3,4]

# Example 2
    Input: nums = [5,7,7,8,8,10], target = 6
    Output: [-1,-1]

# Example 3
    Input: nums = [], target = 0
    Output: [-1,-1]

# Constraints
    -> 0 <= nums.length <= 10^5
    -> -10^9 <= nums[i] <= 10^9
    -> array is sorted in ascending order
    -> -10^9 <= target <= 10^9

# Similar Questions
    -> First Bad Version - https://leetcode.com/problems/first-bad-version/
    -> Plates Between Candles - https://leetcode.com/problems/plates-between-candles/
    -> Find target indices after sorting array - https://leetcode.com/problems/find-target-indices-after-sorting-array/