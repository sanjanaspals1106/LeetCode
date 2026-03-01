class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res="";
        int n1=word1.length();
        int n2=word2.length();
        int small=min(n1,n2);
        for(int i=0; i<small; i++){
            res+=word1[i];
            res+=word2[i];
        }
        res+=word1.substr(small);
        res+=word2.substr(small);
        return res;
    }
};