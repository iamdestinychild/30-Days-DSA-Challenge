#include <iostream>
#include <vector>

int findPeakElement(std::vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] < nums[mid + 1]) {
            // Move right to search in the right half
            left = mid + 1;
        } else {
            // Move left to search in the left half
            right = mid;
        }
    }

    // 'left' now points to a peak element
    return left;
}

int main() {
    std::vector<int> nums = {1, 2, 3, 1};
    int peakIndex = findPeakElement(nums);
    std::cout << "Peak element is at index: " << peakIndex << std::endl;

    return 0;
}
