# 3-Sum Problem

This C++ program finds two numbers in an array that add up to a specified target value.

## How to Run

1. Make sure you have a C++ compiler installed on your system, such as g++.

2. Clone this repository to your local machine or download the `threesum.cpp` file.

3. Open your terminal or command prompt.

4. Navigate to the directory where the `threesum.cpp` file is located.

5. Compile the C++ code using your compiler.

6. Run the program by executing the generated executable:

7. The program will execute and display the result, which will show the indices of the two numbers that add up to the target value.

## Example Usage

Here's an example of how to use this program:

```shell
$ g++ threesum.cpp -o threesum
$ ./threesum
Enter the size of nums 5
enter the no. of elements 1 2 3 4 5
```

## Intuition

This code finds unique triplets in a sorted array that sum to zero by iterating through the array, using two-pointer technique, and skipping duplicates to optimize runtime.

## Approach

The approach for the provided code that finds unique triplets in a sorted array that sum to zero can be summarized as follows:

1. **Sort the Input**: First, sort the input array in ascending order. This step allows us to efficiently identify triplets and skip duplicates.

2. **Iterate Through the Array**: Use a `for` loop to iterate through the sorted array, considering each element as a potential starting point for a triplet (`nums[i]`).

3. **Skip Duplicate Elements**: Skip duplicate elements by checking if the current element is the same as the previous one (`nums[i - 1]`). This ensures that we only consider unique elements as the first element of a triplet.

4. **Two-Pointer Technique**: For each unique starting element `nums[i]`, use a two-pointer technique. Initialize two pointers, `low` and `high`, initially pointing to the elements right after `nums[i]` and at the end of the array, respectively.

5. **Triplet Sum Calculation**: Calculate the sum of the current triplet as `sum = -nums[i]`, as we are looking for triplets that sum to zero.

6. **Move Pointers**: Within a `while` loop, adjust the positions of the `low` and `high` pointers to find pairs of elements (`nums[low]` and `nums[high]`) that, when combined with `nums[i]`, have a sum equal to `sum`. If the sum is equal to `sum`, add the triplet to the result vector and move both pointers while skipping duplicate elements.

7. **Continue Looping**: Continue this process for each unique starting element `nums[i]` until the loop reaches the end of the array.

8. **Return Result**: Finally, return the vector of unique triplets found during the process.

This approach ensures that unique triplets are efficiently identified in the sorted array while minimizing unnecessary computations and duplicate triplets.

## **Complexity**

**Time Complexity:**

Sorting the input array takes O(n _ log(n)) time, where 'n' is the number of elements in the array.
The main loop iterates through the array once, and for each element, it uses a two-pointer technique to find triplets. In the worst case, this process takes O(n^2) time because the low and high pointers can move towards each other in the loop.
Within the loop, there are constant-time operations such as comparisons, additions, and vector operations.
Therefore, the overall time complexity of the code is dominated by the sorting step, making it O(n _ log(n)).

**Space Complexity**
Space Complexity of this Code is O(n^2).
