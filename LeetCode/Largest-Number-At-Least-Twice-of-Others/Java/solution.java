class Solution {
    public int dominantIndex(int[] nums) {
        int max = 0, maxIndex = 0; 
        for(int i = 0; i<nums.length; i++){
            if(max < nums[i]){
                max = nums[i];
                maxIndex = i;
            }
        }

        for(int i = 0; i<nums.length; i++){
            if(maxIndex != i && nums[maxIndex] < 2 * nums[i]){
                return -1;
            }
        }
        return maxIndex;
    }
}