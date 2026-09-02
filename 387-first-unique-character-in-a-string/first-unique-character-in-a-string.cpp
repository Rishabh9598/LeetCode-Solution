class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }

        for(int i=0; i<s.size(); i++){
            int value = mp[s[i]];
            cout<<value<<endl;
            if(value == 1){
                return i;
                break;
            }
        }
        return -1;
    }
};