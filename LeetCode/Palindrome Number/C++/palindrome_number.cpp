#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPalindrome(string num,int index){
       if(index>num.size()/2-1){
           return true;
       }
       return (num[index]==num[num.size()-index-1] && checkPalindrome(num,index+1));
    }
    bool isPalindrome(int x) {
        string num = to_string(x);
        if(num.size()<2) return true;
        return checkPalindrome(num,0);
    }
};

int main(){

    Solution solution;
    int num;
    cin>>num;
    bool result = solution.isPalindrome(num);
    cout<<"Palindrom : "<<(result? "True" : "False");
    return 0;
}