from collections import deque
from typing import List

class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        result = []        # Initialize an empty list to store maximum values.
        window = deque()   # Create a deque to store indices of elements in the current window.

        for i, num in enumerate(nums):
            # Remove elements from the left end of the deque if they are out of the current window.
            while window and window[0] < i - k + 1:
                window.popleft()

            # Remove elements from the right end of the deque if they are smaller than the current element.
            while window and nums[window[-1]] < num:
                window.pop()

            # Add the current element's index to the deque.
            window.append(i)

            # If we have processed at least k elements (i.e., i >= k - 1), add the maximum value
            # in the current window (the first element of the deque) to the result list.
            if i >= k - 1:
                result.append(nums[window[0]])

        return result

# Example usage:
solution = Solution()
nums = [1, 3, -1, -3, 5, 3, 6, 7]
k = 3
result = solution.maxSlidingWindow(nums, k)
print("Maximum values in sliding window of size", k, "are:", result)
