class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp1, mp2;
        for(int i=0; i<nums1.size(); i++){
            mp1[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); i++){
            mp2[nums2[i]]++;
        }
        vector<int> inter;
        for(auto k: mp1){
            if(mp2.find(k.first)!=mp2.end()){
                inter.push_back(k.first);
            }
        }
        return inter;
    }
};