class Solution:
    def threeSum(self, nums):
        ans = []
        nums.sort()
        
        for i in range(len(nums) - 2):
            # Skip duplicate elements
            if i == 0 or nums[i] != nums[i - 1]:
                low, high = i + 1, len(nums) - 1
                target = -nums[i]
                
                while low < high:
                    if nums[low] + nums[high] == target:
                        ans.append([nums[i], nums[low], nums[high]])
                        
                        # Skip duplicate elements
                        while low < high and nums[low] == nums[low + 1]:
                            low += 1
                        while low < high and nums[high] == nums[high - 1]:
                            high -= 1
                        
                        low += 1
                        high -= 1
                    elif nums[low] + nums[high] < target:
                        low += 1
                    else:
                        high -= 1
        
        return ans

# Test the code
if __name__ == "__main__":
    # Input handling
    nums = list(map(int, input().split()))
    
    # Create an instance of the Solution class
    solution = Solution()
    
    # Call the threeSum function
    result = solution.threeSum(nums)
    
    # Print the result
    for triplet in result:
        print(triplet)
