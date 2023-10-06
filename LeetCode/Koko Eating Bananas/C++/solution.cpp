class Solution {
public:
    long long getHoursToEatAll(vector<int>&piles, int bananasPerHour)
    {
        long long totalHours = 0;
        for (int i = 0; i < piles.size(); i++)
        {
            int hoursToEatPile = ceil(piles[i] / (double)bananasPerHour);
            totalHours += hoursToEatPile;
        }
        return totalHours;
    }
    
    int minEatingSpeed(vector<int>& piles, int targetHours)
    {
        int low = 1, high = *(max_element(piles.begin(), piles.end()));
        int ans = -1;

        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            long long hoursToEatAll = getHoursToEatAll(piles, mid);
            
            if (hoursToEatAll <= targetHours)
            {
                ans = mid; 
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
};