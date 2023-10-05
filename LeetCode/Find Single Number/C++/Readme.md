# APPROACH 1: 
# Time Complexity: O(N)
# Space Complexity: O(N) => for unordered_map data structure
This C++ function uses a unordered_map data structure to count the frequency of each element in the input vector 'nums'.
It then iterates through the map to find the element with a frequency of 1,
which corresponds to the single number that appears only once in the vector. The function returns this single number as the result.

# APPROACH 2: 
# Time Complexity: O(N)
# Space Complexity: O(1)
This C++ function uses the XOR (^) bitwise operation to find the single number in the 'nums' vector efficiently.
It initializes 'result' to 0 and iterates through the vector, XORing each element with 'result.' 
Since XORing the same number twice results in 0 (A ^ A = 0), and XORing any number with 0 results in the number itself (A ^ 0 = A),
this process effectively cancels out all the duplicate numbers. Ultimately, 'result' will hold the value of the single number 
that appears only once, and it returns this result as the answer.
