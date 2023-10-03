Intuition for my code:

Set two pointers l and r to the left and right end of height. 
Then we get the minimum height (minHeight) of these pointers since the level of the water cannot be higher than it.
Then we move the two pointers towards the center.
If the coming level is less than minHeight, then it will hold some water.
Fill the water until we meet some "barrier" (with height larger than minHeight) and update l and r to repeat this process
