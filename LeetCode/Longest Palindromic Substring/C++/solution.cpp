#include<bits/stdc++.h>

using namespace std;




class Solution {
    public : string longestPalindrome(string s) {
        if(s.size() == 1){
            return s;
        }
        vector<vector<bool>> dp(s.size(), vector<bool>(s.size()));
        for(int i = 0; i < s.size(); i++) {
            dp[i][i] = true;
        }
        vector<int> ansarray; ansarray.resize(2, 0);
        int ans = 1;
        for(int i = 1; i < s.size(); i++) {
            for(int j = 0; j < i; j++) {
                if(s[i] != s[j]){
                    dp[j][i] = false;
                }else{ //the start char == the end char
                    if((i == j + 1) || dp[j + 1][i - 1] == true){
                        dp[j][i] = true;
                        if(ans < i - j + 1){
                            ansarray[0] = i; //end point
                            ansarray[1] = j; //start point
                            ans = i - j + 1;
                        }
                    }else{
                        dp[j][i] = false;
                    }
                    
                }
            }
        }
        return s.substr(ansarray[1], ans);
    }
};

