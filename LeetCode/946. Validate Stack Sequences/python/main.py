from typing import List
class Solution:
    def validateStackSequences(self, pushed: List[int], popped: List[int]) -> bool:
        stack = []
        j = 0
        for num in pushed:
            stack.append(num)
            while stack and stack[-1] == popped[j]:
                stack.pop()
                j += 1
        return j == len(popped)

def main():
    solution = Solution()
    pushed = [1, 2, 3, 4, 5]
    popped = [4, 5, 3, 2, 1] #Example case hardcoded
    soln = solution.validateStackSequences(pushed,popped)
    print(soln)

if __name__ =="__main__":
    main()