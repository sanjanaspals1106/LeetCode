class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int> mp;
        int pf=0;
        mp[0]=1;
        for(int num : nums){
            pf+=num;
            int rem=((pf%k)+k)%k;
            count+=mp[rem];
            mp[rem]+=1;
        }

        return count;
    }
};