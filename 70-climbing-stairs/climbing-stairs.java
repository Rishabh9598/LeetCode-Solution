class Solution {

    static int helper(int n, ArrayList<Integer> dp){
        if(n == 1){
            return 1;
        }
        if(n == 2){
            return 2;
        }

        if(dp.get(n) != -1){
            return dp.get(n);
        }

        int value = helper(n-1, dp) + helper(n-2, dp);
        dp.set(n, value);

        return value;
    }
    public int climbStairs(int n) {
        ArrayList<Integer> dp = new ArrayList<>(Collections.nCopies(n+1, -1));
        return helper(n, dp);
    }
}