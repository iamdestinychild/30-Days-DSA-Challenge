#include <bits/stdc++.h>
#include <vector>
using namespace std;

int solveMemoization(vector<int> &weight, vector<int> &value, int index, int capacity, vector<vector<int>> &dp)
{
    if (index == 0)
    {
        if (weight[0] <= capacity)
        {
            return value[0];
        }
        else
        {
            return 0;
        }
    }
    if (dp[index][capacity] != -1)
    {
        return dp[index][capacity];
    }

    int include = 0;
    if (weight[index] <= capacity)
    {
        include = value[index] + solveMemoization(weight, value, index - 1, capacity - weight[index], dp);
    }
    int exclude = 0 + solveMemoization(weight, value, index - 1, capacity, dp);
    dp[index][capacity] = max(include, exclude);
    return dp[index][capacity];
}
int solveTabulation(vector<int> &weight, vector<int> &value, int n, int capacity)
{
    vector<vector<int>> dp(n, vector<int>(capacity + 1, 0));
    for (int w = weight[0]; w <= capacity; w++)
    {
        if (weight[0] <= capacity)
        {
            dp[0][w] = value[0];
        }
        else
        {
            dp[0][w] = 0;
        }
    }
    for (int index = 1; index < n; index++)
    {
        for (int w = 0; w <= capacity; w++)
        {
            int include = 0;
            if (weight[index] <= w)
            {
                include = value[index] + dp[index - 1][w - weight[index]];
            }
            int exclude = 0 + dp[index - 1][w];
            dp[index][w] = max(include, exclude);
        }
    }
    return dp[n - 1][capacity];
}
int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
{
    return solveTabulation(weight, value, n, maxWeight);
}
