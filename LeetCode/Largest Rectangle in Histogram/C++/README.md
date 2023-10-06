# 84. Largest Rectangle in Histogram

## Approach:
Step 1: Calculate the "next smaller element" for each bar in the histogram. To do this, start from the right end of the histogram and maintain a stack. Initialize an empty stack and a result vector next of the same size as the histogram, initially filled with -1.

Step 2: Iterate through the histogram from right to left. For each bar, compare its height with the height of the bar at the top of the stack. While the stack is not empty and the current bar is smaller or equal in height to the bar at the top of the stack, pop elements from the stack and update their "next smaller element" index in the next vector.

Step 3: Push the current bar's index onto the stack.

Step 4: Continue this process until you have processed all bars. The next vector will now contain the indices of the next smaller elements to the right of each bar.

Step 5: Repeat a similar process to calculate the "previous smaller element" for each bar. This time, start from the left end of the histogram and maintain a stack. Initialize an empty stack and a result vector prev of the same size as the histogram, initially filled with -1.

Step 6: Iterate through the histogram from left to right. For each bar, compare its height with the height of the bar at the top of the stack. While the stack is not empty and the current bar is smaller or equal in height to the bar at the top of the stack, pop elements from the stack and update their "previous smaller element" index in the prev vector.

Step 7: Push the current bar's index onto the stack.

Step 8: Continue this process until you have processed all bars. The prev vector will now contain the indices of the previous smaller elements to the left of each bar.

Step 9: Iterate through each bar in the histogram and calculate the area of the largest rectangle that can be formed using that bar as its height. The width of the rectangle is determined by the difference between the "next smaller element" index (from next vector) and the "previous smaller element" index (from prev vector), minus 1.

Step 10: Update the maximum area found during the iteration.

Step 11: Return the maximum area as the result.

## Intuition
- The key idea behind this algorithm is to utilize two passes through the histogram to find the "next smaller element" and "previous smaller element" for each bar, which allows us to efficiently calculate the area of the largest rectangle that can be formed with each bar as its height.
- By maintaining a stack and comparing bar heights, we can efficiently find the "next smaller element" and "previous smaller element" for each bar.
- The final result is obtained by finding the maximum area among all possible rectangles, with each bar's height and width determined by the information gathered in the previous steps.