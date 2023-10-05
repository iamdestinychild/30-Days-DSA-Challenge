How's going Ladies - n - Gentlemen, today we are going to solve another coolest problem i.e Container With Most Water

Okay, so let's understand what the problem statement is saying,

You are given an integer array height of length n

Return the maximum amount of water a container can store.
Let's take one example in order to understand this problem,
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49

image

So, we need to find max area in which most water can contains, where area = width * height

As, height is already given in our Array!
But what about width?

So, to find width of a container, all we have to do is get the difference of line.

8				|	                                    |
7				|	                                    |	            |
6				|	    |	                            |	            |
5				|	    |	            |	            |	            |
4				|	    |	            |	    |	    |	            |
3				|	    |	            |	    |	    |	    |	    |
2				|	    |	    |	    |	    |	    |	    |	    |
1	   |	    |	    |	    |	    |	    |	    |	    |	    |
       0        1       2       3       4       5       6       7       8
	            ^                                       ^
So, my one pointer is on index 1 & another pointer is on index 6

Therefore, width = right - left i.e. 6 - 1 => 5

And if we look at height,
height = min(8, 8)
Thus, area will be:-
area = 5 * 8 => 40

Now you'll ask why we are choosing the min height because, the water we fill in our container will got overflow, so to avoid that we are gabbing the min line.

So, now you ask. How do we solve this problem efficiently. We gonna solve this in linear time.

So, for that we have

> max area which is intially 0
> Then, we going to have 2 pointers. One in left start at 0th index & one right start from last index.
Now, if I calculate the width & height our area will be:

8				|	                                    |
7				|	                                    |	            |                             width = 8 - 0 = 8
6				|	    |	                            |	            |                             height = min(1, 7)
5				|	    |	            |	            |	            |                             Area = 8 * 1 = 8
4				|	    |	            |	    |	    |	            |
3				|	    |	            |	    |	    |	    |	    |                             max = 0 -> max = 8
2				|	    |	    |	    |	    |	    |	    |	    |
1	   |	    |	    |	    |	    |	    |	    |	    |	    |
       0        1       2       3       4       5       6       7       8
	   ^                                                                ^
	  left                                                            right
By this pretty much we have get one formula all it is area = width * height
i.e. area = (right - left) * min(height[left], height[right])

So, now you ask which pointer we suppose to move. It's preety simple. We gonna move the smaller height pointer. Why?
Because, we are trying to find very max. container

If we have smaller height on left or right we don't care about it. We always want a higher height line on our left & right.

Okay, so now moving forward. left pointer has smaller height, so it will move forward

8				|	                                    |
7				|	                                    |	            |                             width = 8 - 1 = 7
6				|	    |	                            |	            |                             height = min(8, 7)
5				|	    |	            |	            |	            |                             Area = 7 * 7 = 49
4				|	    |	            |	    |	    |	            |
3				|	    |	            |	    |	    |	    |	    |                             max = 8 -> max = 49
2				|	    |	    |	    |	    |	    |	    |	    |
1	   |	    |	    |	    |	    |	    |	    |	    |	    |
       0        1       2       3       4       5       6       7       8
	            ^                                                       ^
	           left                                                   right
Okay, so now moving forward. right pointer has smaller height, so it will move backward

8				|	                                    |
7				|	                                    |	            |                             width = 7 - 1 = 6
6				|	    |	                            |	            |                             height = min(8, 3)
5				|	    |	            |	            |	            |                             Area = 6 * 3 = 18
4				|	    |	            |	    |	    |	            |
3				|	    |	            |	    |	    |	    |	    |                             max = 49
2				|	    |	    |	    |	    |	    |	    |	    |
1	   |	    |	    |	    |	    |	    |	    |	    |	    |
       0        1       2       3       4       5       6       7       8
	            ^                                               ^
	           left                                           right
Okay, so now moving forward. right pointer has smaller height, so it will move backward

8				|	                                    |
7				|	                                    |	            |                             width = 6 - 1 = 5
6				|	    |	                            |	            |                             height = min(8, 8)
5				|	    |	            |	            |	            |                             Area = 8 * 5 = 40
4				|	    |	            |	    |	    |	            |
3				|	    |	            |	    |	    |	    |	    |                             max = 49
2				|	    |	    |	    |	    |	    |	    |	    |
1	   |	    |	    |	    |	    |	    |	    |	    |	    |
       0        1       2       3       4       5       6       7       8
	            ^                                       ^
	           left                                   right
Okay, so now moving forward. now left & right pointer both have same height, so in this case we gonna move both the pointer's!!

8				|	                                    |
7				|	                                    |	            |                             width = 5 - 2 = 3
6				|	    |	                            |	            |                             height = min(4, 6)
5				|	    |	            |	            |	            |                             Area = 4 * 3 = 12
4				|	    |	            |	    |	    |	            |
3				|	    |	            |	    |	    |	    |	    |                             max = 49
2				|	    |	    |	    |	    |	    |	    |	    |
1	   |	    |	    |	    |	    |	    |	    |	    |	    |
       0        1       2       3       4       5       6       7       8
	                    ^                       ^
	                   left                   right
Okay, so now moving forward. right pointer has smaller height, so it will move backward

8				|	                                    |
7				|	                                    |	            |                             width = 4 - 2 = 2
6				|	    |	                            |	            |                             height = min(5, 6)
5				|	    |	            |	            |	            |                             Area = 5 * 2 = 10
4				|	    |	            |	    |	    |	            |
3				|	    |	            |	    |	    |	    |	    |                             max = 49
2				|	    |	    |	    |	    |	    |	    |	    |
1	   |	    |	    |	    |	    |	    |	    |	    |	    |
       0        1       2       3       4       5       6       7       8
	                    ^               ^
	                   left           right
Okay, so now moving forward. right pointer has smaller height, so it will move backward

8				|	                                    |
7				|	                                    |	            |                             width = 3 - 2 = 1
6				|	    |	                            |	            |                             height = min(2, 6)
5				|	    |	            |	            |	            |                             Area = 2 * 1 = 2
4				|	    |	            |	    |	    |	            |
3				|	    |	            |	    |	    |	    |	    |                             max = 49
2				|	    |	    |	    |	    |	    |	    |	    |
1	   |	    |	    |	    |	    |	    |	    |	    |	    |
       0        1       2       3       4       5       6       7       8
	                    ^       ^
	                   left   right
The max area we get is 49