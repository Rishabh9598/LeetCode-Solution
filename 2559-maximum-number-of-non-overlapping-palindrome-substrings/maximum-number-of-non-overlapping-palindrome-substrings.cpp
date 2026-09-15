class Solution {
    int n;
    vector<vector<bool>> isPalindrome;
    vector<vector<int>> dp;
    void buildPalindrome(const string& str){
        isPalindrome.assign(n,vector<bool>(n,false)); // making false intialiy

        for(int L=1;L<=n;L++){ // to track for each length substring
            for(int i=0;i+L<=n;i++){
                int j = i + L - 1; // (i,j) is the idx of substring
                if(i==j){ // substring of length 1
                    isPalindrome[i][j] = true;
                }
                else if(i+1==j){ // substring of length 2
                    isPalindrome[i][j] = str[i]==str[j];
                }
                else{
                    isPalindrome[i][j] = (str[i]==str[j] && isPalindrome[i+1][j-1]);
                }
            }
        }
    }
    int solve(const string& str,int k,int i,int j){
        if(i>=n || j>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(isPalindrome[i][j]){
            int takeIt = 1 + solve(str,k,j+1,j+k);
            int grow   = solve(str,k,i,j+1);
            int slide  = solve(str,k,i+1,j+1);
            return dp[i][j] = max({takeIt,grow,slide});
        }
        else{
            int grow   = solve(str,k,i,j+1);
            int slide  = solve(str,k,i+1,j+1);
            return dp[i][j] = max(grow,slide);
        }
    }
public:
    int maxPalindromes(string s, int k) {
        n = s.length();
        if(k==1) return n;
        buildPalindrome(s);
        dp.assign(n+1,vector<int>(n+1,0));
        //return solve(s,k,0,k-1);

        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=k-1;j--){
                if(j<i) continue;
                if(isPalindrome[i][j]){
                    int takeIt = 1;
                    if(j+1<n && j+k<n){
                        takeIt+=dp[j+1][j+k];
                    }
                    int grow   = 0;
                    if(j+1<n){
                        grow =  dp[i][j+1];
                    }
                    int slide  = 0;
                    if(i+1<n && j+1<n){
                        slide+=dp[i+1][j+1];
                    }
                    dp[i][j] = max({takeIt,grow,slide});
                }
                else{
                    int grow   = 0;
                    if(j+1<n){
                        grow =  dp[i][j+1];
                    }
                    int slide  = 0;
                    if(i+1<n && j+1<n){
                        slide+=dp[i+1][j+1];
                    }
                    dp[i][j] = max(grow,slide);
                   
                }
            }
        }
        return dp[0][k-1];
    }
};