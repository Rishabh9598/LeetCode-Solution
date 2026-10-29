class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }

        vector<int> pal;

        while(x > 0){
            int digit = x % 10;
            pal.push_back(digit);
            x = x / 10;
        }

        int left = 0;
        int right = pal.size() - 1;

        while(left <= right){
            cout<<pal[left]<<", "<<pal[right]<<endl;
            if(pal[left] != pal[right]){
                return false;
            }else{
                left++;
                right--;
            }
        }
        return true;
    }
};