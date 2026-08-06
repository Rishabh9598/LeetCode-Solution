class Solution {
public:
    int smallestNumber(int n, int t) {
        int smallest = 0;
        for(int i=n; i<101; i++){
            int total = 1;
            int toCal = i;
            while(toCal){
                int digit = toCal % 10;
                cout<<digit<<", ";
                total *= digit;
                toCal = toCal / 10;
            }
            if(t != 0 && total % t == 0){
                smallest = i;
                break;
            }
        }
        return smallest;
    }
};