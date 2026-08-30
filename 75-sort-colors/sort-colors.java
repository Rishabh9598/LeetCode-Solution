class Solution {
    public void sortColors(int[] nums) {
        int right = nums.length - 1;
        int left = 0;
        int medium = 0;

        while(medium <= right){
            if(nums[medium] == 1){
                medium++;
            }else if(nums[right] == 2){
                right--;
            }
            else if(nums[medium] == 0){
                int temp = nums[medium];
                nums[medium] = nums[left];
                nums[left] = temp;
                left++;
                medium++;
            }else if(nums[medium] == 2){
                int temp = nums[medium];
                nums[medium] = nums[right];
                nums[right] = temp;
                right--;
            }
        }
    }
}