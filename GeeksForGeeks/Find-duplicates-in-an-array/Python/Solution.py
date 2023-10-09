class Solution:
    def duplicates(self, arr, n): 
    	# code here
    	duplicates = []
        n = len(arr)
     
        # First check all the values that are present in the array
        # then go to those values as indices and increment by the size of the array
        for i in range(n):
            index = arr[i] % n
            arr[index] += n
     
        # Now check which value exists more than once by dividing with the size of the array
        for i in range(n):
            if arr[i] // n >= 2:
                duplicates.append(i)
     
        if len(duplicates)!=0:
            return duplicates
    	return [-1] 

class Solution:
    def duplicates(self, arr, n): 
    	# code here
    	duplicates = []
        n = len(arr)
     
        # First check all the values that are present in the array
        # then go to those values as indices and increment by the size of the array
        for i in range(n):
            index = arr[i] % n
            arr[index] += n
     
        # Now check which value exists more than once by dividing with the size of the array
        for i in range(n):
            if arr[i] // n >= 2:
                duplicates.append(i)
     
        if len(duplicates)!=0:
            return duplicates
    	return [-1] 

