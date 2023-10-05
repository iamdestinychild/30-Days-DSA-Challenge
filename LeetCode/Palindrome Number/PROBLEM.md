
## Question : Given an integer x, return true if x is a palindrome, and false otherwise. 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 
## Solution :

- The provided C++ code defines a Solution class with two methods: checkPalindrome and isPalindrome. It is designed to determine whether a given integer x is a palindrome. 
--> A palindrome is a number that reads the same backward as forward.

## Approach - 1 :

bool checkPalindrome(string num, int index): This recursive function checks if the string representation of the given number num is a palindrome. It compares characters from both ends of the string, moving towards the center. If all characters match during this comparison, the function returns true, indicating that num is a palindrome. The index parameter keeps track of the current comparison position.

bool isPalindrome(int x): This method is the entry point to check whether an integer x is a palindrome. It converts the integer to a string num using to_string(x). If the length of the string is less than 2 (i.e., it's a single-digit number), it returns true since single-digit numbers are palindromes by definition. Otherwise, it calls the checkPalindrome function to perform the palindrome check.

## Approach - 2 -> Try Yourself :

Iterative Approach : reverse the entire input number and check if the reversed number is equal to the original number. If they are the same, then the number is a palindrome.
