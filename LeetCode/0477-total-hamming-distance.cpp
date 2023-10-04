class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
       
        int sum=0;
        vector <bitset <32>> bits;
        for(int i=0;i<nums.size();i++)
        {
             bitset <32> bitsTemp(nums[i]);
             bits.push_back(bitsTemp);
        }
        for(int j=0;j<32;j++)
        {
            int ones=0;
            int zeros=0;
            for(int i=0;i<nums.size();i++)
            {
                if(bits[i][j]==1)
                    ones++;
                else
                    zeros++;
            }
            sum+=ones*zeros;
        }
        return sum;
    }
};
