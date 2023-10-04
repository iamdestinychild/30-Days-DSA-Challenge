- The provided C++ code defines a Solution class with two methods: checkPalindrome and isPalindrome. It is designed to determine whether a given integer x is a palindrome. 
--> A palindrome is a number that reads the same backward as forward.

## Approach - 1 :

bool checkPalindrome(string num, int index): This recursive function checks if the string representation of the given number num is a palindrome. It compares characters from both ends of the string, moving towards the center. If all characters match during this comparison, the function returns true, indicating that num is a palindrome. The index parameter keeps track of the current comparison position.

bool isPalindrome(int x): This method is the entry point to check whether an integer x is a palindrome. It converts the integer to a string num using to_string(x). If the length of the string is less than 2 (i.e., it's a single-digit number), it returns true since single-digit numbers are palindromes by definition. Otherwise, it calls the checkPalindrome function to perform the palindrome check.

## Approach - 2 -> Try Yourself :

Iterative Approach : reverse the entire input number and check if the reversed number is equal to the original number. If they are the same, then the number is a palindrome.

## How to Run

1. Make sure you have a C++ compiler installed on your system, such as g++.

2. Clone this repository to your local machine or download the `palindrome_number.cpp` file.

3. Open your terminal or command prompt.

4. Navigate to the directory where the `palindrome_number.cpp` file is located.

5. Compile the C++ code using your compiler.

6. Run the program by executing the generated executable:

7. The program will execute and display the result.