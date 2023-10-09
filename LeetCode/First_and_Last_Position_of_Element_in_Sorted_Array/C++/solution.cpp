#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;

        // for finding first occ
        int s = 0;
        int e = nums.size()-1;
        int resl=-1;
        int mid = s + (e-s)/2;

        while(s<=e) {
            if(nums[mid]==target) {
                resl = mid;
                e = mid-1;
            }
            else if(nums[mid]>target)
                e = mid-1;  
            else
                s = mid+1;
            mid = s + (e-s)/2;        
        }

        // for finding last occ
        s=0;
        e=nums.size()-1;
        int resu=-1;
        mid = s + (e-s)/2;

        while(s<=e) {
            if(nums[mid]==target) {
                resu = mid;
                s = mid+1;
            }
            else if(nums[mid]<target)
                s = mid+1;
            else
                e = mid-1;
            mid = s + (e-s)/2;
        }
        ans.push_back(resl);
        ans.push_back(resu);
        return ans;
    }

    int main() {
        
        int n;
        int target;
        vector<int> nums;

        cout << "Enter array size" << endl;
        cin >> n;

        cout << "Enter array elements" << endl;

        for(int i=0; i<n; i++) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        cout << "Enter element to be searched" << endl;
        cin >> target;
        
        vector<int> ans = searchRange(nums, target);

        cout << "First occurence of " << target << " is " << ans[0] << endl;
        cout << "Last occurence of " << target << " is " << ans[1] << endl;
        
        return 0;
    }