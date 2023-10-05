# Container With Most Water
This problem can be solved using the Greedy algorithm. The idea behind the Greedy algorithm is to make locally optimal decisions at each step in order to achieve a globally optimal solution. In this case, we can use two pointers (left pointer and right pointer) to select the two lines that form the container.

## Algorithm
1. Initialize the left pointer to the beginning of the array and the right pointer to the end of the array.
2. Compute the area of the container formed by these two lines by taking the difference between the x position of the two pointers (i.e., the distance between the two lines) and multiplying this difference by the minimum height of the two lines.
3. Compare the current area with the maximum area encountered so far and update the maximum area if necessary.
4. Move the left pointer to the right if the height at this position is less than the height at the position of the right pointer, otherwise move the right pointer to the left.
5. Repeat steps 2-4 until the two pointers cross each other.
6. At this point, we have found the maximum possible area for the container and we return it.

## Complexity Analysis

- **Time complexity:** The time complexity of this algorithm is **O(n)** because we iterate through the elements of the array only once using the two pointers. 

- **Space Complexity:** The space complexity is O(1) because we only use additional variables to store the positions of the pointers.

![Implementation](/LeetCode/Container_with_Most_Water/Python/Solution.py)
