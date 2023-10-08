#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    
    vector<vector<int>> ans; 

    void solve(vector<int> &v, int target, vector<int> &tmp, int i) {
        
        if(target < 0 or i == v.size())
            return;
        
        if(target == 0) {
            ans.push_back(tmp);
            return;
        }
        
        tmp.push_back(v[i]);
        solve(v,target-v[i],tmp,i);
        tmp.pop_back();
        solve(v,target,tmp,i+1);      
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> tmp;
        solve(candidates,target,tmp,0);
        return ans;      
    }
};

//Don't copy this part on leetcode page.
int main() {
    vector<int> candidates {2,3,6,7};
    int target = 7;
    cout << combinationSum(candidates, target)
}