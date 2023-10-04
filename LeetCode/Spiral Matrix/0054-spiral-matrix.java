class Solution {
    public List<Integer> spiralOrder(int[][] matrix) {
        List<Integer> ans = new ArrayList<Integer>();
        int startrow=0,startcol=0,endrow=matrix.length-1,endcol=matrix[0].length-1;
        while(startrow<=endrow && startcol<=endcol)
        {
            for(int j=startcol;j<=endcol;j++)
            {
                ans.add(matrix[startrow][j]);
            }
            for(int i=startrow+1;i<=endrow;i++)
            {
                ans.add(matrix[i][endcol]);
            }
            for(int j=endcol-1;j>=startcol;j--)
            {
                if(startrow==endrow)
                {
                    break;
                }
                ans.add(matrix[endrow][j]);
            }
            for(int i=endrow-1;i>=startrow+1;i--)
            {
                if(startcol==endcol)
                {
                    break;
                }
                ans.add(matrix[i][startcol]);
            }
            startrow++;
            startcol++;
            endrow--;
            endcol--;
        }
        return ans;
        
    }
}