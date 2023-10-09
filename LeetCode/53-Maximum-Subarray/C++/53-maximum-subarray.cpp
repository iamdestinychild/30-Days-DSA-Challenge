class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    int maxSum = INT_MIN;
    int curSum = 0;
    for(int i=0;i<nums.size();i++){
      curSum+=nums[i];
      if(curSum>maxSum){
        maxSum=curSum;
      }
      if(curSum<0){
        curSum=0;
      }
    }
      return maxSum;
  }
};