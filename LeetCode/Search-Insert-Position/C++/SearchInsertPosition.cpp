#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    int searchInsert(vector<int> &nums, int target) 
    {
        int start = 0; // initialize start index of binary search
        int end = nums.size() - 1; // initialize end index of binary search

        while (start <= end) {
             // perform binary search
            int mid = start + (end - start) / 2; // calculate mid index

            if (nums[mid] == target) { 
                // if element found at mid, return mid
                return mid;
            }
            else if(nums[mid] < target){
                // if element at mid is less than target, then target would be inserted after mid
                start = mid + 1;
            }
            else {
                // if element at mid is greater than target, then target would be inserted before mid
                end = mid - 1;
            }
    }
      // If target is not found and start is greater thsn end, it means target would be inserted at start index
    return start; 
    }
};

int main() {
    Solution solution; // Create object of Solution class
    vector<int> nums = {1,3,5,6}; // Example input array
    int target = 5; // Target element to search
    int result = solution.searchInsert(nums, target);
    cout << "The index of the target element is: " << result << endl; // Outputs the index of the target element or the index where it needs to be inserted
return 0;
}