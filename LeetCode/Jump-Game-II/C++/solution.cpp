/*
Leetcode Problem 45: Jump Game II
C++ Solution
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        int curr=0;
        int next=0;
        int count=0;
        for(int i=0; i<n; i++){
            next=max(next, i+nums[i]);
            if(i==curr){
                curr=next;
                count++;
            }
            if(curr>=n-1){
                return count;
            }
        }
        return count;
    }
};