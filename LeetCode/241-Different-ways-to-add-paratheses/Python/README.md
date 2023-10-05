This code was done using python

To run the above code in terminal type the below code

Python main.py

Approach:

The approach to solving this problem is based on recursion and divide-and-conquer. We'll recursively break down the expression into smaller sub-expressions by finding operators, and then calculate the possible results for each combination of left and right sub-expressions.

If the expression is just a single digit, we return it as a list with a single integer.
Otherwise, we iterate through the expression and when we encounter an operator (+, -, or *), we split the expression into two parts: the left part before the operator and the right part after the operator.
We recursively calculate the possible results for the left and right parts.
For each pair of results from the left and right parts, we apply the operator to them and add the result to the final list of results.
Finally, we return the list of all possible results.

## Complexity Analysis

-Time complexity
`O(3^n)`, where n is the number of operators in the expression

-Space complexity
`O(3^n)`
This is because we store the results of all possible combinations in a list, and in the worst case, there can be 3^n different results.

