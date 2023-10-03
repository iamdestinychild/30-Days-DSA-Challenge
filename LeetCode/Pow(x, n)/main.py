class Solution(object):
    def pow(self, x, n):
        
        if n == 0:
            return 1
        elif n < 0:
            return 1/self.pow(x, -n)
        else:
            result = self.pow(x, int(n/2))
            if n % 2 == 0:
                return result * result
            else:
                return x * result * result
    
def main():
    solution = Solution()
    x = float(input("Enter the base number: "))
    n = int(input("Enter the power: "))  
    print(solution.pow(x, n))
    
if __name__ == '__main__':
    main()


