function twoSum(nums, target) {
    // Create a map to store the complement of each number and its index
    let complementMap = new Map();

    for (let i = 0; i < nums.length; i++) {
        let currentNum = nums[i];
        let complement = target - currentNum;

        // Check if the complement exists in the map
        if (complementMap.has(complement)) {
            // If found, return the indices of the two numbers
            return [complementMap.get(complement), i];
        }

        // Otherwise, add the current number and its index to the map
        complementMap.set(currentNum, i);
    }

    // If no solution is found
    return [];
}

// Example usage
let nums = [2, 7, 11, 15];
let target = 9;
let result = twoSum(nums, target);
console.log(result); // Output: [0, 1]
