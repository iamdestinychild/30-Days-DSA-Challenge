class Solution {
    // Function to find the length of longest common subsequence in two strings.
    static int lcs(int x, int y, String s1, String s2) {
        int[][] dp = new int[x + 1][y + 1];

        for (int i = 0; i <= x; i++) {
            for (int j = 0; j <= y; j++) {
                if (i == 0 || j == 0) {
                    dp[i][j] = 0; // Base case: If either string is empty, LCS length is 0.
                } else if (s1.charAt(i - 1) == s2.charAt(j - 1)) {
                    dp[i][j] = dp[i - 1][j - 1] + 1; // Characters match, increase LCS length.
                } else {
                    dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]); // Characters don't match.
                }
            }
        }

        return dp[x][y]; // Length of LCS.
    }
    
    public static void main(String[] args) {
        int x = 6, y = 6;
        String s1 = "ABCDGH";
        String s2 = "AEDFHR";

        int result = lcs(x, y, s1, s2);
        System.out.println("Length of Longest Common Subsequence: " + result);
    }
}

