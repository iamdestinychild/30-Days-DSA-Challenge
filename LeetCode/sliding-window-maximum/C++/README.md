# 239-Sliding-Window-Maximum

## Intuition

The code solves the problem of finding the maximum value in a sliding window of a given size `k` within an array `nums`.

## Step by Step Approach

1. Initialize an empty deque (double-ended queue) to store the indices of elements in the current window and an empty vector to store the maximum values.

2. Iterate through the input array `nums` from left to right.

3. For each element in `nums`, perform the following steps:

   - Remove the front element from the deque if it's out of the current window (index difference greater than or equal to `k`).

   - Remove elements from the back of the deque if they are smaller than the current element, ensuring that the deque remains in decreasing order.

   - Add the current element's index to the deque.

   - If we have processed at least `k` elements (i.e., `i >= k - 1`), add the maximum value in the current window (the front element of the deque) to the result vector.

4. Return the result vector containing the maximum values for each sliding window.

## Complexity

- Time Complexity: O(N) where N is the number of elements in the input array `nums`. We process each element once.

- Space Complexity: O(K) where K is the size of the sliding window. We use a deque to store at most `k` indices.

## How to run the code

1. **Install a C++ Compiler:**
   If you don't have a C++ compiler installed, you can download and install one. For example, if you're using Linux, you might already have g++ installed. On Windows, you can use MinGW or install a development environment like Code::Blocks or Visual Studio.

2. **Create a C++ Source File:**
   Open a text editor or your preferred code editor and create a new file with a `.cpp` extension. You can name it something like `sliding-m.cpp`.

3. **Copy and Paste the Code:**
   Copy the modified C++ code provided in my previous response and paste it into your `sliding-m.cpp` file.

4. **Compile the Code:**
   Open your terminal or command prompt and navigate to the directory where you saved `sliding-m.cpp`. Use the `g++` compiler to compile the code:

   _bash_
   _g++ -o sliding-m sliding-m.cpp_

   This command will compile the code and create an executable file named `sliding-m`.

5. **Run the Executable:**
   After successfully compiling, you can run the program:

   `bash ./sliding-m`
