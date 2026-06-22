class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> count;
        for(char ch : s){
            count[ch]++;
        }
        unordered_map<char,int> check;
        for(char ch: t){
            check[ch]++;
        }
        if (count==check){
            return true;
        }
        return false;
    }
};