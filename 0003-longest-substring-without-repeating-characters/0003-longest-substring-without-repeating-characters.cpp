class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int count=0;
        int i=0, j=0;
        for(int j=0; j<s.size(); j++){
            mp[s[j]]++;
            while(mp[s[j]]>1){
                mp[s[i]]--;
                i++;
            }
            count=max(count, j-i+1);
        }
        return count;
    }
};