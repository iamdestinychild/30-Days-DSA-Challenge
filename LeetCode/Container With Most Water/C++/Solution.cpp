#include<bits/stdc++.h>
using namespace std;
 int maxArea(vector<int>& height) {
        int res=0;
        int s=0;
        int e=height.size()-1;
        while(s<e){
               res = max(res, min(height[s],height[e]) * (e - s));
                        
            if(height[s]<height[e]){
                s++;
            }
            else{
                e--;
            }
        }
        return res;
    }
int main(){
    int n;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<maxArea(vec)<<endl;
    return 0;
}