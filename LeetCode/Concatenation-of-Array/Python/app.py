
class Solution(object):
    def getConcatenation(self, nums):
        return nums + nums

solution = Solution()

nums = [1, 2, 3, 4]

ans = solution.getConcatenation(nums)
print(ans)