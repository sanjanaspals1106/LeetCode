class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i=0;
        int j=0;
        int maxLen=0;
        while(j<s.length()){
            if(st.count(s[j])==0){
                st.insert(s[j]);
                j++;
                maxLen=max(maxLen, j-i);
            } else{
                st.erase(s[i]);
                i++;
            }

        }
        return maxLen;
    }
};