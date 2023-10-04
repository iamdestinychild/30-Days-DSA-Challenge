class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int n=size(nums); 
        long long  sum=0;
        for(long long  i : nums){
            if (i==INT_MAX)
                return INT_MAX; //Even if you do n partitions you won't be able to reduce this, so simply this will be the max sum.
            sum+=i;
        }
        if (m==1) //if you can't partition it then the max value in the whole array will be the max sum.
            return sum;
        long long low=0;
        long high=sum; // "high" denotes the maximum sum that is an possible answer.
        long long  mid;
        long long  res=INT_MAX;
        while (low<=high){
            mid=low+(high-low)/2;
            if (isValid(nums,n,m,mid)) //"isvalid()" is to check if this value , "mid" can be a valid answer for m partitions.
            {
                res=min(res,mid);
                high=mid-1; //even when we find an answer we check for a lesser value;
            }
            else 
                low=mid+1;
            
        }
        return res;
    }
    
    bool isValid(vector<int> nums,int n, int m, int mid){
        int assn=1; //assignments=1 initially , means can we allocate the values to 1 partition only without violating the condition of having sum <=mid;
        int sum=0;
        for(int i : nums){
            sum+=i;
            if (sum>mid){
                assn++;
                sum=i;
                if (sum>mid) //if at any instance we find that this value is greater than current max sum we are checking for we return false;
                    return false;
            }
            if (assn>m) //if we need more than required partitions for the current max ("mid") value we are checking for we return false;
                return false;
        }
        return true; // if everything is fine without violating any condition we return true;
    }
};