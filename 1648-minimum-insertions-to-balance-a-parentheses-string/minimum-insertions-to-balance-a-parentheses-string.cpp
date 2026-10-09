class Solution {
public:
    int minInsertions(string s) {
        int result = 0;
        int count = 0;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                count++;
            }else if(s[i] == ')' && count >0){
                //cout<<s[i]<<", ";
                count--;
                if(s[i + 1] == ')'){
                    i += 1;
                }else{
                    result++;
                }
            }else if(s[i] == ')' && count == 0){
                result++;
                if(s[i + 1] == ')'){
                    i += 1;
                }else{
                    result++;
                }
            }
        }
        return result + (count * 2);
    }
};