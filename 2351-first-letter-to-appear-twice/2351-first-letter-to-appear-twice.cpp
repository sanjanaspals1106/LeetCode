class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<char,int> mp;
        char sol;
        for(char ch: s){
            mp[ch]+=1;
            if(mp[ch]==2){
                sol=ch;
                break;
            }
        }
        return sol;
    }
};