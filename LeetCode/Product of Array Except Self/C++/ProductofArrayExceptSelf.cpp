#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> output(nums.size());
        int prefix = 1;
        int suffix = 1;
        output[0] = 1;
        output[nums.size() - 1] = 1;
        for(int i = 1; i < nums.size(); i++){   
            prefix = prefix * nums[i - 1];
            output[i] = prefix;
        }
        for(int i = 1; i < nums.size(); i++){   
            suffix = suffix * nums[nums.size() - i];
            output[nums.size() - 1 - i] = output[nums.size() - 1 - i] * suffix;
        }
        return output;
    }
};

int main(){

    Solution solution;
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    vector<int> result = solution.productExceptSelf(nums);
    for (int i = 0; i < n; i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<endl;
}