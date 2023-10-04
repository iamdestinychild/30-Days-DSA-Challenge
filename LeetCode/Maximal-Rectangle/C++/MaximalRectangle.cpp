#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        
        vector<int> left(n, 0);
        vector<int> right(n, n);

        stack<int> st;

        for(int i = 0; i < n; i++){
            while(!st.empty()){
                int t = heights[st.top()];
                if(t < heights[i]) {
                    left[i] = st.top() + 1;
                    break;
                }
                st.pop();
            }
            st.push(i);
        }

        st = stack<int>();

        for(int i = n - 1; i >= 0; i--){
            while(!st.empty()){
                int t = heights[st.top()];
                if(t < heights[i]) {
                    right[i] = st.top();
                    break;
                }
                st.pop();
            }
            st.push(i);
        }

        int max_height = 0;
        for(int i = 0; i < n; i++){
            int len = right[i] - left[i];
            int height = len * heights[i];
            max_height = max(max_height, height);
        }

        return max_height;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) {
            return 0;
        }

        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> vec(n, vector<int>(m, 0));
        for(int i = 0; i < m; i++) {
            int d = matrix[0][i] - '0';
            vec[0][i] = d;
        }

        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
               int d = matrix[i][j] - '0';
               vec[i][j] = vec[i - 1][j] + d;
               if(d == 0) vec[i][j] = 0;
            }
        }

        int ans = 0;
        for(auto e: vec){
            int area = largestRectangleArea(e);
            ans = max(ans, area);
        }
        return ans;
    }
};

int main() {
    Solution solution;
    vector<vector<char>> matrix = {
        {'1', '0', '1', '0', '0'},
        {'1', '0', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '0', '0', '1', '0'}
    };
    cout << "Maximum Rectangle Area: " << solution.maximalRectangle(matrix) << endl;
    return 0;
}
