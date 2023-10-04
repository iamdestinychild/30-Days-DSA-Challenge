import java.util.Arrays;

class Solution {
  public static int[] getConcatenation(int[] nums) {
      int[] ans = new int[nums.length*2];
      for(int i = 0; i < nums.length; ++i){
          ans[i] = nums[i]; 
          ans[i + nums.length] = nums[i];
      }
      return ans;
  }
  public static void main(String[] args){
    System.out.println(Arrays.toString(getConcatenation(new int[]{1, 2, 3})));
  }
}
