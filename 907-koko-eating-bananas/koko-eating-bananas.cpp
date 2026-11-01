class Solution {
public:

    long long total(vector<int>& piles, int h, int mid){
        long long totalH = 0;

        for(int i=0; i<piles.size(); i++){
            totalH += ceil((double)piles[i]/mid);
        }

        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int mini = 1;
        int maxi = *max_element(piles.begin(), piles.end());


        while(mini <= maxi){
            int mid = mini + (maxi - mini)/2;
            

            long long totalH = total(piles, h, mid);
            
            if(totalH <= h){
                maxi = mid - 1;
            }else{
                mini = mid + 1;
            }
        }
        return mini;
    }
};