<h1>3Sum with multiplicity</h1>

Given an integer array arr, and an integer target, return the number of tuples i, j, k such that i < j < k and arr[i] + arr[j] + arr[k] == target.<br>
<br>
As the answer can be very large, return it modulo 109 + 7.
<br>
 

Example 1:<br>

Input: arr = [1,1,2,2,3,3,4,4,5,5], target = 8<br>
Output: 20<br>
Explanation: <br>
Enumerating by the values (arr[i], arr[j], arr[k]):<br>
(1, 2, 5) occurs 8 times;<br>
(1, 3, 4) occurs 8 times;<br>
(2, 2, 4) occurs 2 times;<br>
(2, 3, 3) occurs 2 times.<br>
Example 2:<br>
<br>
Input: arr = [1,1,2,2,2,2], target = 5<br>
Output: 12<br>
Explanation: <br>
arr[i] = 1, arr[j] = arr[k] = 2 occurs 12 times:<br>
We choose one 1 from [1,1] in 2 ways,<br>
and two 2s from [2,2,2,2] in 6 ways.<br>