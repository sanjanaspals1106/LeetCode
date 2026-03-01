class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];
        for(string str:strs){
            while(str.find(res) != 0){
            res=res.substr(0, res.size()-1);
        }}
        return res;
    }
};