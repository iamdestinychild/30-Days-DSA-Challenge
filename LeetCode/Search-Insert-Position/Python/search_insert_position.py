class Solution(object):
    def searchInsert(self, nums, target):
        start, end = 0, len(nums) - 1

        while start <= end:
            mid = start + (end - start) // 2

            if nums[mid] == target:
                return mid  # Target found at index mid
            elif nums[mid] < target:
                start = mid + 1  # Target is in the end half
            else:
                end = mid - 1  # Target is in the start half

        return start  # Target not found, return the insertion point
# Create an instance of the Solution class
solution = Solution()

# Example usage:
nums = [1, 3, 5, 6]
target = 5
result = solution.searchInsert(nums, target)
print("Result:", result)  # Output: 2
