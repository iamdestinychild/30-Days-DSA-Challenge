class Solution:
    def transpose(self, arr):
        for i in range(len(arr)):
            for j in range(i):
                temp = arr[i][j]
                arr[i][j] = arr[j][i]
                arr[j][i] = temp

    def reverse(self, arr):
        for r in range(len(arr)):
            left = 0
            right = len(arr) - 1
            while left < right:
                temp = arr[r][left]
                arr[r][left] = arr[r][right]
                arr[r][right] = temp
                left += 1
                right -= 1

    def rotate(self, matrix):
        self.transpose(matrix)
        self.reverse(matrix)

def main():
    solution = Solution()
    arr = [[1,2,3],[4,5,6],[7,8,9]] #Example case hardcoded
    solution.rotate(arr)
    print(arr)

if __name__ =="__main__":
    main()