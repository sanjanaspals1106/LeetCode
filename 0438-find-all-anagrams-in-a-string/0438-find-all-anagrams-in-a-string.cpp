class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.size()>s.size()){
            return {};
        }
        vector<int> freq(26,0);
        vector<int> window(26,0);
        for(char ch: p){
            freq[ch-'a']++;
        }
        for(int i=0; i<p.size(); i++){
            window[s[i]-'a']++;
        }
        if (window==freq){
            ans.push_back(0);
        }
        for(int i=p.size(); i<s.size(); i++){
            window[s[i]-'a']++;
            window[s[i-p.size()]-'a']--;
            if(freq==window){
                ans.push_back(i-p.size()+1);
            }
        }
        return ans;
    }
};