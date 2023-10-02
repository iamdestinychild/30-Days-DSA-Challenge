#include <vector>
#include <unordered_map>
#include <iostream>

class Solution
{
public:
    std::vector<int> twoSum(std::vector<int> &numbers, int target)
    {
        // Create an unordered_map to store elements and their indices
        std::unordered_map<int, int> numberToIndex;
        std::vector<int> result;

        // Iterate through the elements of the input vector 'nums'
        for (int i = 0; i < numbers.size(); ++i)
        {
            int complement = target - numbers[i];

            if (numberToIndex.find(complement) != numberToIndex.end())
            {
                result.push_back(numberToIndex[complement]);
                result.push_back(i);
                return result;
            }

            numberToIndex[numbers[i]] = i;
        }

        // If no solution is found, return an empty vector
        return result;
    }
};

int main()
{
    // Create an instance of the 'Solution' class
    Solution solution;

    // Example input
    std::vector<int> nums = {3, 7, 2, 15};
    int target = 9;

    // Call the 'twoSum' method to find the indices of the two numbers that add up to the target
    std::vector<int> result = solution.twoSum(nums, target);

    // Check if a solution was found
    if (!result.empty())
    {
        // Print the indices of the two numbers
        std::cout << "Indices of the two numbers that add up to target: ";
        for (int num : result)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
    else
    {
        // If no solution is found, print a message indicating that
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}
