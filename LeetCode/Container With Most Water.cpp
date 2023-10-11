#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int maxWater = 0;

    while (left < right) {
        int h = min(height[left], height[right]);
        int w = right - left;
        int water = h * w;
        maxWater = max(maxWater, water);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxWater;
}

int main() {
    vector<int> height = {1, 9, 10, 2, 5, 6, 11, 3, 7};
    int result = maxArea(height);
    cout << "The maximum water container can hold is: " << result << endl;

    return 0;
}
