<h2><a href="https://leetcode.com/problems/merge-k-sorted-lists">23. Merge k Sorted Lists</a></h2>

<p>You are given an array of <code>k</code> linked-lists <code>lists</code>, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.</p>

<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input: </strong> lists = [[1,4,5],[1,3,4],[2,6]]
<strong>Output</strong>: [1,1,2,3,4,4,5,6]
<strong>Explanation</strong>: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted list:
1->1->2->3->4->4->5->6
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input: </strong> lists = []
<strong>Output</strong>: []
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input: </strong> lists = [[]]
<strong>Output</strong>: []
</pre>

<p><strong>Constraints:</strong></p>

<ul>
	<li><code>k==lists.length</code></li>
	<li><code>0 &lt;= k &lt;= 10^4</code></li>
  <li><code>0 &lt;= lists[i].length &lt;= 500</code></li>
  <li><code>-10^4 &lt;= lists[i][j] &lt;= 10^4</code></li>
	<li><code>lists[i]</code> is sorted in <strong>ascending order</strong>.</li>
  <li>The sum of <code>lists[i].length</code> will not exceed <code>10^4</code>.</li>
</ul>
</div>
