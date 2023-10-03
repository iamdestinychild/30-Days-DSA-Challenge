class Solution:
    def simplifyPath(self, path: str) -> str:
        stack = []
        for dir in path.split('/'):
            if dir == '' or dir == '.':
                continue
            elif dir == '..':
                if stack:
                    stack.pop()
            else:
                stack.append(dir)

        return '/' + '/'.join(stack)

def main():
    solution = Solution()
    path = "/home//foo/" #Example case hardcoded
    soln = solution.simplifyPath(path)
    print(soln)

if __name__ =="__main__":
    main()