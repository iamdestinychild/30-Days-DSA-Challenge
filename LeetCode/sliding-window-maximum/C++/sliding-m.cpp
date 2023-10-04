#include <iostream>
#include <vector>
#include <deque>

using namespace std;

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        deque<int> dq;   // Create a deque to store indices of elements in the window
        vector<int> ans; // Create a vector to store the maximum values in each sliding window

        for (int i = 0; i < nums.size(); i++)
        {
            // Remove the front element from the deque if it's out of the current window
            while (!dq.empty() && dq.front() == (i - k))
            {
                dq.pop_front();
            }

            // Remove elements from the back of the deque if they are smaller than the current element
            while (!dq.empty() && nums[dq.back()] < nums[i])
            {
                dq.pop_back();
            }

            // Add the current element's index to the deque
            dq.push_back(i);

            // If we have processed at least k elements, add the maximum of the current window to ans
            if (i >= k - 1)
            {
                ans.push_back(nums[dq.front()]);
            }
        }

        return ans;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    vector<int> result = solution.maxSlidingWindow(nums, k);

    cout << "Maximum values in sliding window of size " << k << " are: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
