class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maxCount = 0;
        int count =0;
        int left = 0;
        int right = 0;

        while(left<n && right<n){
           
            if(nums[left] == 1 && nums[right] == 1){
                right++;
                count++;
                maxCount = max(maxCount, count);
                continue;
            }
            if(nums[left] == 0){
                left++;
                right++;
                count=0;
            }else if(nums[right] == 0){
                if(maxCount >= (n/2)){
                    cout<<"isme Ayya";
                    return maxCount;
                }else{
                    count = 0;
                    left = right+1;
                    right = left;
                }
            }
        }
        return maxCount;
    }
};