class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0;
        int right = 1;
        int count = 1;

        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[left]){
                cout<<nums[i]<<", "<<nums[left]<<endl;
                nums[right] = nums[i];
                left++;
                right++;
                count++;
            }
        }
        return count;
    }
};