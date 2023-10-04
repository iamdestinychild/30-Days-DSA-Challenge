NUMBER OF GOOD PAIRS

Given an array of integers nums, return the number of good pairs.
A pair (i, j) is called good if nums[i] == nums[j] and i < j.

<!-- SOLUTION -->

class Solution {
public:
        int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        unordered_map<int, int> cnt;
        for (int x: nums) {
        ans += cnt[x]++;
        }
        return ans;
    }
};