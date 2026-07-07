class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        vector<int> freq(26,0);
        for(char ch: s1){
            freq[ch-'a']++;
        }
        vector<int> check(26,0);
        int len=s1.size();
        int i=0, j=s1.size(); 
        while(i<len){
            check[s2[i]-'a']++;
            i++;
        }
        if(freq==check){
            return true;
        }
        i=0;
        while(j<s2.size()){
            check[s2[i]-'a']--;
            check[s2[j]-'a']++;
            i++;
            j++;
            if(freq==check){
                return true;
            }
        }
        return false;
    }
};