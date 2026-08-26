class Solution {
    public void moveZeroes(int[] nums) {
        int n = nums.length;
        int curr = 1;
        int prev = 0;

        while(curr<n){
            if(nums[curr] == 0 && nums[prev] == 0){
                curr++;
                continue;
            }else if(nums[prev] == 0 && nums[curr] != 0){
                int temp = nums[prev];
                nums[prev] = nums[curr];
                nums[curr] = temp;
                curr++;
                prev++;
            }else{
                curr++;
                prev++;
            }
        }
    }
}