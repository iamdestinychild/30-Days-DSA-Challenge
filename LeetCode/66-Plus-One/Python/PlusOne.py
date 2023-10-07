class Solution(object):
    def plusOne(self, digits):
        # Convert the list of digits to an integer
        num = int(''.join(map(str, digits)))

        # Increment the integer by one
        num += 1

        # Convert the incremented integer back to a list of digits
        result = list(map(int, str(num)))

        return result

def main():
    # Create an instance of the Solution class
    solution = Solution()

    # Example usage
    input_digits = [1, 2, 3]
    result = solution.plusOne(input_digits)
    print("Input:", input_digits)
    print("Result:", result)

main()
