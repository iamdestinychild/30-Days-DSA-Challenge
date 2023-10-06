from typing import List
class Solution:
    def diffWaysToCompute(self, expression: str) -> List[int]:
        def calculate(left, right, operator):
            results = []
            for l in left:
                for r in right:
                    if operator == '+':
                        results.append(l + r)
                    elif operator == '-':
                        results.append(l - r)
                    elif operator == '*':
                        results.append(l * r)
            return results
        if expression.isdigit():
            return [int(expression)]

        results = []
        for i in range(len(expression)):
            if expression[i] in "+-*":
                left = self.diffWaysToCompute(expression[:i])
                right = self.diffWaysToCompute(expression[i+1:])
                results.extend(calculate(left, right, expression[i]))
        
        return results


# Example usage:
solution = Solution()
expression1 = "2-1-1"
print(solution.diffWaysToCompute(expression1))  # Output: [0, 2]

expression2 = "2*3-4*5"
print(solution.diffWaysToCompute(expression2))  # Output: [-34, -14, -10, -10, 10]