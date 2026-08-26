class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int curr = 1;
        int prev = 0;

        while(curr < nums.size()){
            if(nums[curr] == 0 && nums[prev] == 0){
                curr++;
                continue;
            }
            else if(nums[prev] == 0 && nums[curr] != 0){
                swap(nums[prev], nums[curr]);
                curr++;
                prev++;
            }else{
                prev++;
                curr++;
            }
        }
    }
};