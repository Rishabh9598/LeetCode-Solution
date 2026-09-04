class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char, int> mp1;
        unordered_map<char, int> mp2;

        for(int i=0; i<s.size(); i++){
            mp1[s[i]]++;
        }

        for(int i=0; i<s.size(); i++){
            mp2[t[i]]++;
        }

          for(auto p : mp1){
            auto it = mp2.find(p.first);

            if(it == mp2.end() || it->second != p.second){
                return false;
            }
          }


        return true;
    }
};