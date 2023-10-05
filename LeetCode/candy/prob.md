<h1>Candy Problem</h1>

There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings. <br>

You are giving candies to these children subjected to the following requirements:<br>

Each child must have at least one candy.<br>
Children with a higher rating get more candies than their neighbors.<br>
Return the minimum number of candies you need to have to distribute the candies to the children.<br>

Example 1:<br>

Input: ratings = [1,0,2]<br>
Output: 5<br>
Explanation: You can allocate to the first, second and third child with 2, 1, 2 candies respectively.<br>
Example 2:<br>

Input: ratings = [1,2,2]<br>
Output: 4<br>
Explanation: You can allocate to the first, second and third child with 1, 2, 1 candies respectively.<br>
The third child gets 1 candy because it satisfies the above two conditions.<br>
