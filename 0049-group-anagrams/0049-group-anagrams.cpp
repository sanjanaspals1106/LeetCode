class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> solution;
        unordered_map<string, vector<string>> mp;
        for(string str : strs){
            string key=str;
            sort(key.begin(), key.end());
            mp[key].push_back(str);
        }
        for(auto it: mp){
            solution.push_back(it.second);
        }
        return solution;
    }
};