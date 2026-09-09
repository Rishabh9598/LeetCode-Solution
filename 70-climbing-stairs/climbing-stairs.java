class Solution {
    public int climbStairs(int n) {
        int prev2 = 0;
        int prev = 1;
        int i = 1;
        int curr = 0;
        while(i<=n){
            curr = prev2 + prev;
            prev2 = prev;
            prev = curr;
            i++;
        }
        return curr;
    }
}