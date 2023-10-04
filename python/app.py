
def create_ans(nums):
    n = len(nums)
    ans = [0] * (2 * n)
    
    for i in range(n):
        ans[i] = ans[i + n] = nums[i]
    
    return ans


nums = [1, 2, 3, 4]
ans = create_ans(nums)
print(ans)
