class Solution {
    public void moveZeroes(int[] nums) {
        int st = 0;
        int last = 1;

        while(last<nums.length){
            if(nums[last] == 0 && nums[st] != 0){
                last++;
                st++;
            }else if(nums[last] == 0){
                last++;
            }
            else if(nums[st] == 0 && nums[last] != 0){
                int temp = nums[st];
                nums[st] = nums[last];
                nums[last] = temp;
                last++;
                st++;
            }else{
                st++;
                last++;
            }
        }
    }
}