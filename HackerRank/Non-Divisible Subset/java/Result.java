class Result{
    public static int nonDivisibleSubset(int k, List<Integer> s) {
    // Write your code here
     int[] remainders = new int[k];
        
        for (int num : s) {
            remainders[num % k]++;
        }
        
        int count = Math.min(remainders[0], 1);
        
        for (int i = 1; i <= k / 2; i++) {
            if (i != k - i) {
                count += Math.max(remainders[i], remainders[k - i]);
            }
        }
        
        if (k % 2 == 0) {
            count += 1;
        }
        
        return count;

    }
}

//Rest of the code for main function