class Solution
{
public:
    int maxPoints(int i, int j, int extra, vector<pair<int, int>> &boxes, vector<vector<vector<int>>> &dp)
    {
        // Base case: If the range is empty, return 0.
        if (i > j)
            return 0;

        // If the result is already computed, return it.
        if (dp[i][j][extra] != -1)
            return dp[i][j][extra];

        // Calculate the score for deleting the current group.
        int deleteGroup = (long long)(extra + boxes[i].second) * (extra + boxes[i].second);

        // Initialize the maximum score with deleting the current group.
        int maxScore = deleteGroup + maxPoints(i + 1, j, 0, boxes, dp);

        // Iterate through possible splits and calculate the maximum score.
        for (int k = i + 1; k <= j; ++k)
        {
            // If two adjacent groups have the same value, consider merging them.
            if (boxes[i].first == boxes[k].first)
            {
                maxScore = max(maxScore, maxPoints(i + 1, k - 1, 0, boxes, dp) + maxPoints(k, j, extra + boxes[i].second, boxes, dp));
            }
        }

        // Store and return the maximum score for the current range.
        return dp[i][j][extra] = maxScore;
    }

    int removeBoxes(vector<int> &boxes)
    {
        // Initialize a 3D DP array with -1 values.
        vector<vector<vector<int>>> dp(101, vector<vector<int>>(101, vector<int>(101, -1)));

        // Prepare groups of boxes and their counts.
        vector<pair<int, int>> groups;
        int count = 0;
        boxes.push_back(boxes.back() - 1); // Add a sentinel value for processing.

        // Iterate through the input boxes to form groups.
        for (int i = 0; i < boxes.size() - 1; i++)
        {
            if (boxes[i] == boxes[i + 1])
            {
                ++count;
            }
            else
            {
                ++count;
                groups.push_back({boxes[i], count});
                count = 0;
            }
        }

        // Call the recursive function to compute the maximum points.
        return maxPoints(0, groups.size() - 1, 0, groups, dp);
    }
};
