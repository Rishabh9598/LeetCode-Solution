class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string result;

        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                if(count == 0){
                    count++;
                }else{
                    result.push_back(s[i]);
                    count++;
                }
            }else{
                count -= 1;

                if(count > 0){
                    result.push_back(s[i]);
                }
            }
        }
        return result;
    }
};