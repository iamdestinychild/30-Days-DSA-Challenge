def maxArea(height):
    left = 0            # Left pointer starting from the leftmost edge
    right = len(height) - 1  # Right pointer starting from the rightmost edge
    maxWater = 0        # Initialize the maximum water capacity
    
    while left < right:
        # Calculate the width of the container
        width = right - left
        
        # Calculate the height of the container (the minimum height between the two lines)
        h = min(height[left], height[right])
        
        # Calculate the water capacity of the current container
        water = width * h
        
        # Update the maximum water capacity if the current container holds more water
        maxWater = max(maxWater, water)
        
        # Move the pointers towards each other
        if height[left] < height[right]:
            left += 1
        else:
            right -= 1
    
    return maxWater

height = [1,8,6,2,5,4,8,3,7]

maxWater = maxArea(height)
print(maxWater)