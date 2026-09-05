class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int wordCount = 0;
        int n = s.size();
        for(int i=0; i<n; i++){
            
            
            if(s[i] == ' '){
                count = 0;
            }else{
                count++;
            }
            if(count > 0){
                wordCount = count;
            }
        }
        return wordCount;
    }
};