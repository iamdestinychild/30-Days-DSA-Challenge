class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int i=2; i<=n; ++i) {
            string s = convertToBase(n,i);
            if(!isPalindrome(s)) {
                return false;
            }
        }
        return true;
    }

    bool isPalindrome(string s) {
        for(int i=0, j=s.size()-1; i<s.size(); ++i) {
            if(s[i] != s[j]) {
                return false;
            }
            ++j;
        }

        return true;
    }

    string convertToBase(int number, int base) {
        string answer = "";
        while (number > 0) {
            answer += to_string(number%base);
            number /= base;
        }

        reverse(answer.begin(), answer.end());
        return answer;
    }
};
