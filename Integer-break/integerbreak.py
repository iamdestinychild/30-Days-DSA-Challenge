import math
class Solution :
    def integerBreak(self, n: int) -> int:
        
        rem1 = n % 3 
        y = n//3
        if n ==1 or n==2 :
            return 1 
        elif n==3:
            return 2
        elif rem1 ==1 :
            s = pow(3,y-1)*4
            return s
        elif rem1==0:
            return pow(3,y)
        else:
            s = pow(3,y)*2
            return s 
              
        



        