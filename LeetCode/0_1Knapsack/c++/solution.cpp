#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool spaceoptimise2(vector<int> &nums,int target){
        vector<bool> curr(target+1,0);
        curr[0]=1;
        int n=nums.size();
         for(int index=n-1;index>=1;index--){
                for(int t=target;t>=0;t--){
                    bool include=0;
                if(t-nums[index]>=0)
                    include=curr[t-nums[index]];
                    bool exclude=curr[t];
                    curr[t]=(include|| exclude);
                }
            }
            return curr[target];
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum & 1)
            return false;
        int target=sum/2;
        int index=0;
        return spaceoptimise2(nums,target);
    }
};