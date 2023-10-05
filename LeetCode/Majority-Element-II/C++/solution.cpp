/*
Leetcode Problem 229: Majority Element II
C++ Solution
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int count1 = 0, count2 = 0;
        int element1 = INT_MIN, element2 = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (count1 == 0 && element2 != nums[i])
            {
                count1 = 1;
                element1 = nums[i];
            }
            else if (count2 == 0 && nums[i] != element1)
            {
                count2 = 1;
                element2 = nums[i];
            }
            else if (nums[i] == element1)
            {
                count1++;
            }
            else if (nums[i] == element2)
            {
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        int c1 = 0;
        int c2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == element1)
            {
                c1++;
            }
            else if (nums[i] == element2)
            {
                c2++;
            }
        }
        vector<int> ans;
        if (c1 > n / 3)
        {
            ans.push_back(element1);
        }
        if (c2 > n / 3)
        {
            ans.push_back(element2);
        }
        return ans;
    }
};