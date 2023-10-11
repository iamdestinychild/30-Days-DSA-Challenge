// SOLUTION 1: 
// Time Complexity: O(N)
// Space Complexity: O(N)
// Not an effiecient approach
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int res;
        for(auto i:mp){
            if(i.second==1){
                res= i.first;
            }
        }
        return res;
    }
};
//SOLUTION 2:
//Time Complexity: O(N)
//Space Complexity: O(1)
//Efficient approach
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++)
        {
            result=result^nums[i];
        }
        return result;
    }
};
