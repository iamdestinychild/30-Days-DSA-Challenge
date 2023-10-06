class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        if(n==1) return 1;
        if(n==2){
            if(ratings[0]==ratings[1]) return 2;
            else return 3;
        }
        vector<int> v(n,1);
        for(int i=1;i<n;i++){
            if(ratings[i-1] < ratings[i]){
                v[i] = v[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(ratings[i] > ratings[i+1] && v[i] <= v[i+1]){
                v[i] = v[i+1] + 1;
            }
        }
        int ans = 0;

        for(int i=0;i<n;i++){
            ans += v[i];
        }

        return ans;
    }
};