class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int i=0,j=0;
      int n=s.size();
      int mx=0,x=0;
      map<int,int>m;
      while(i<n)
      {
        m[s[i]]++;
        if(m[s[i]]<=1)
        {
        mx=max(i-j+1,mx);
        }
        while(j<=i && m[s[i]]>1)
        {
        m[s[j]]--;
        if(m[s[j]]==0)
        {
        m.erase(s[j]);
        }
        j++;
        }
        mx=max(i-j+1,mx);
        i++;
      }
      return mx;  
    }
};