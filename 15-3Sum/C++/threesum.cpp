#include <iostream>
#include <vector>
#include <algorithm>

class Solution
{
public:
    std::vector<std::vector<int>> threeSum(std::vector<int> &nums)
    {
        std::vector<std::vector<int>> ans;

        if (nums.size() < 3)
        {
            return ans;
        }

        // Sort the input array
        std::sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 2; i++)
        {
            // Skip duplicate elements
            if (i == 0 || nums[i - 1] != nums[i])
            {
                int low = i + 1, high = nums.size() - 1, sum = -nums[i];

                while (low < high)
                {
                    if (nums[low] + nums[high] == sum)
                    {
                        ans.push_back({nums[i], nums[low], nums[high]});

                        // Skip duplicate elements
                        while (low < high && nums[low] == nums[low + 1])
                        {
                            low++;
                        }

                        while (low < high && nums[high] == nums[high - 1])
                        {
                            high--;
                        }

                        low++;
                        high--;
                    }
                    else if (nums[low] + nums[high] < sum)
                    {
                        low++;
                    }
                    else
                    {
                        high--;
                    }
                }
            }
        }
        return ans;
    }
};

int main()
{
    // Input handling
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        std::cin >> nums[i];
    }

    // Create an instance of the Solution class
    Solution solution;

    // Call the threeSum function
    std::vector<std::vector<int>> result = solution.threeSum(nums);

    // Print the result in the required format
    if (!result.empty())
    {
        for (const std::vector<int> &triplet : result)
        {
            for (int num : triplet)
            {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        }
    }
    else
    {
        // If no solution is found, print a message indicating that
        std::cout << "No solution found." << std::endl;
    }

    return 0;
}
