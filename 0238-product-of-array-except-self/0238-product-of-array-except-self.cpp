class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int pfix=1, sfix=1;
        for(int i=0; i<nums.size(); i++){
            ans[i]=pfix;
            pfix*=nums[i];
        }
        for(int i=nums.size()-1; i>=0; i--){
            ans[i]*=sfix;
            sfix*=nums[i];
        }
        return ans;
    }
};