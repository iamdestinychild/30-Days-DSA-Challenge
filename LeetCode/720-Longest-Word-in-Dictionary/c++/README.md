# 720. Longest Word in Dictionary
### Difficulty - Medium
### Link - https://leetcode.com/problems/longest-word-in-dictionary/description/

## Problem Description

Given an array of strings words representing an English Dictionary, return the longest word in words that can be built one character at a time by other words in words.

If there is more than one possible answer, return the longest word with the smallest lexicographical order. If there is no answer, return the empty string.

Note that the word should be built from left to right with each additional character being added to the end of a previous word. 

 

### Example 1:

Input: words = ["w","wo","wor","worl","world"]
Output: "world"
Explanation: The word "world" can be built one character at a time by "w", "wo", "wor", and "worl".

### Example 2:

Input: words = ["a","banana","app","appl","ap","apply","apple"]
Output: "apple"
Explanation: Both "apply" and "apple" can be built from other words in the dictionary. However, "apple" is lexicographically smaller than "apply".


## How To start Program

1. Make sure g++ is installed on the system
2. use command to create main file - g++ main.cpp -o main
3. Use Command to execute main file - ./main
4. Enter Number of Words
5. Enter the Words in separate lines

## Solution

1. A simple trie is used to store the words with addition of a boolean value to mark whether that node ends with a word or not.
2. While doinf Depth-First-Traversal on Trie, check whether each node has a word ending at it.
3. If any word end at it, travel further down otherwise go back.
4. At each node check whether the word obtained thus far is bigger than the final string which is initiated as an empty string;
5. Return the final string.