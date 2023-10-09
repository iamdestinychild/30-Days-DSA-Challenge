As given in the question, the array is already sorted.

Whenever the word “sorted” or other similar terminologies are used in an array question, BINARY SEARCH can be one of the approaches.

Initially consider the start=0 and the end=n-1 pointers and the result as -1.

Till start does not crossover end pointer compare the mid element 

    -> If the mid element is equal to the key value, store the mid-value in the result and move the start pointer to mid+1 (move leftward)
    -> Else if the key value is less than the mid element then end= mid-1 (move leftward)
    -> Else do start = mid+1 (move rightwards)


# Time Complexity
    O(log n)

# Space Complexity
    O(1)