class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        int pf=0;
        for(int num : nums){
            pf+=num;
            if(mp.count(pf-k)!=0){
                count+=mp[pf-k];
            }
            mp[pf]++;
        }
        return count;
    }
};