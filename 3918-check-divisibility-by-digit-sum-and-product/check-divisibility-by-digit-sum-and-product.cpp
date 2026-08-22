class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int num = n;
        while(n){
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n = n/10;
        }
        int total = sum + product;

        return (num % total == 0);
    }
};