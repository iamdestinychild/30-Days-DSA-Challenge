class Solution(object):
    def twoSum(self, nums, target):
        container = {}
        for i, num in enumerate(nums):
            complement = target - num
            if complement in container:
                return [container[complement], i]
            container[num] = i

        return []

def main():
    solution = Solution()
    nums=[2,7,11,15] #hardcoded
    target= 9  
    result = solution.twoSum(nums, target)
    print (result)

if __name__ =="__main__":
    main()