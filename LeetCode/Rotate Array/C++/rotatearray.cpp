#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.begin()+(nums.size()-k));

        reverse(nums.begin()+(nums.size()-k),nums.end());
    
        reverse(nums.begin(),nums.end());
    }
};

void disp(vector <int> test)
{
    for (int i=0;i<test.size();i++)
    {
        cout<<test[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    Solution solution;
    vector <int> num = {1,2,3,4,5,6,7}; //can change
    int o = 2;
    solution.rotate(num,o);
    disp(num);
}
