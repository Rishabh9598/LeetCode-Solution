class Solution {
public:
    bool isPalindrome(int x) {
        int ans = x;
        long long result = 0;
        while(x > 0){
            int digit = x % 10;
            result = (result * 10) + digit;
            x = x/10;
        }

        result -= ans;

        if(result == 0){
            return true;
        }else{
            return false;
        }
    }
};