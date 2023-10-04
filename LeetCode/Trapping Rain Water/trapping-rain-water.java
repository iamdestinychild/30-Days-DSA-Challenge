class Solution {
    public int trap(int[] height) {
          // calculate left max boundary array 
        int leftMax[]= new int [height.length];
        leftMax[0]=height[0];
        for(int i=1;i<height.length;i++)
        {
            leftMax[i]=Math.max(height[i],leftMax[i-1]);
        }
        // calculate right max boundary array
        int rightMax[]= new int [height.length];
        rightMax[height.length-1]=height[height.length-1];
        for(int i=height.length-2;i>=0;i--)
        {
            rightMax[i]=Math.max(height[i],rightMax[i+1]);
        }
        int trappedwater=0;
        for(int i=0;i<height.length;i++)
        {
            int waterlevel=Math.min(leftMax[i],rightMax[i]);
            trappedwater+=waterlevel-height[i];
        }
        return trappedwater;
    }
    }





        