class Solution {
public:
    int maxProduct(int n) {
        vector<int> temp;
        while(n){
            int digit = n % 10;
            temp.push_back(digit);
            n = n/10;
        }
        sort(temp.begin(), temp.end());

        int ans = temp[temp.size() - 1] * temp[temp.size() - 2];

        return ans;
    }
};