class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowStart = 0, colStart = 0, n = matrix[0].size(), m = matrix.size(), rowEnd = m -1, colEnd = n-1;
        vector<int> ans;
        cout<<m<<" "<<n<<endl;
        while(rowStart<=rowEnd && colStart<=colEnd) {
            for(int i = colStart; i <= colEnd; i++) {
                ans.push_back(matrix[rowStart][i]);
            }
            rowStart++;
            if(rowStart>rowEnd) return ans;
            for(int i = rowStart; i<=rowEnd; i++) {
                ans.push_back(matrix[i][colEnd]);
            }
            colEnd--;
            if(colStart>colEnd) return ans;
            for(int i = colEnd; i >= colStart; i--) {
                ans.push_back(matrix[rowEnd][i]);
            }
            rowEnd--;
            if(rowStart>rowEnd) return ans;
            for(int i = rowEnd; i>= rowStart ; i--) {
                ans.push_back(matrix[i][colStart]);
            }
            colStart++;
        }
        return ans;
    }
};