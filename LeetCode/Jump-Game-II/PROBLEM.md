<h2><a href="https://leetcode.com/problems/jump-game-ii">45. Jump Game II</a></h2>

<p>
You are given a 0-indexed array of integers <code>nums</code> of length <code>n</code>. You are initially positioned at <code>nums[0]</code>.

Each element <code>nums[i]</code> represents the maximum length of a forward jump from index <code>i</code>. In other words, if you are at <code>nums[i]</code>, you can jump to any <code>nums[i + j]</code> where:

<code>0 <= j <= nums[i]</code> and
<code>i + j < n</code>
Return the minimum number of jumps to reach <code>nums[n - 1]</code>. The test cases are generated such that you can reach <code>nums[n - 1]</code>.
</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input: </strong> nums = [2,3,1,1,4]
<strong>Output: </strong> 2
<strong>Explanation: </strong> The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input: </strong> nums = [2,3,0,1,4]
<strong>Output: </strong> 2
</pre>