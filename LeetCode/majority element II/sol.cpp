class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int element1 = 0, element2 = 0, count1 = 0, count2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (count1 == 0 && nums[i] != element2)
            {
                element1 = nums[i];
                count1 = 1;
            }
            else if (count2 == 0 && nums[i] != element1)
            {
                element2 = nums[i];
                count2 = 1;
            }
            else if (element1 == nums[i])
            {
                count1++;
            }
            else if (element2 == nums[i])
            {
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        vector<int> output;
        count1 = 0, count2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == element1)
            {
                count1++;
            }
            if (nums[i] == element2)
            {
                count2++;
            }
        }
        if (count1 > floor(nums.size() / 3))
            output.push_back(element1);
        if (count2 > floor(nums.size() / 3))
        {
            if (element1 == element2)
            {
                return output;
            }
            else
            {
                output.push_back(element2);
            }
        }
        return output;
    }
};