# Zigzag Conversion

This Python program that gives Zigzag Conversion.

## How to Run

1. Make sure you have a python compiler installed on your system.

2. Clone this repository to your local machine or download the `ZZ.py` file.

3. Open your terminal or command prompt.

4. Navigate to the directory where the `ZZ.py` file is located.

5. Compile the python code using your compiler.

6. Run the program by executing the generated executable:

7. The program will execute and display the result, which will show the Zigzag Conversion.

## Example Usage

Here's an example of how to use this program:

```shell
$ python ZZ.py
Output: Zigzag Conversion
```

## Intuition
In this question the most important thing is getting the pattern correct. It is very easy to go down the wrong path and spend 10 minutes trying to figure out how to make a complicated algorithm work when a very easy one would suffice.

## Approach
At first I thought about how to make the different rows as strings. How would I make `row1`, `row2`, `row3`? Sure if there were only a few rows I could hardcode them, but then how would I be able to add the character to each row easily? It is too difficult, so I thought using an array would be much better.

Then I thought how would we make sure that we are `going up` and down in the correct pattern? The easiest way was to use a going_up flag to make sure to switch the direction of the index.

Lastly the only thing to check was edge cases, which by this point was pretty easy with a simple run through of the algorithm.

## Complexity
- Time complexity: `O(n) `
* We run through the whole string once: `O(n)`
* everything we do inside the for loop: `O(1)`
* Finally we join the whole array int a string: `O(n)`

- Space complexity: `O(n)` 
* We are creating a new array: `O(n)`
* We are using join to put it back into a string:`O(n)`
