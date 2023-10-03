#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:

    bool isPossible(vector<int>& nums, int k, int n, int mid){
        int count=0;
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum+nums[i]<=mid){
                sum=sum+nums[i];
            }
            else{
                count++;
                if(count>=k || nums[i]>mid){
                    return false;
                }
                sum=nums[i];
            }
        }
        return true;

    }
    
    int splitArray(vector<int>& nums, int k) {
        int s=0;
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            // s=max(s,nums[i]);
        }

        int e=sum;
        int ans=0;
        int mid=s+(e-s)/2;

        while(s<=e){
            if(isPossible(nums,k,n,mid)){
                ans=mid;
                e=mid-1;
            }
            
            else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }
};
	

int main(){

    Solution solution;

    vector<int> arr = {7,2,5,10,8};
    int k = 2;

    int result = solution.splitArray(arr,k);

    if (result)
    {
        cout<<result;
    }
    else
    {
        cout << "No solution found." << endl;
    }

    return 0;
}