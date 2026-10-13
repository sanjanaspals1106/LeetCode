class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int lsum=0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0 && k>0){
                nums[i]=-1*nums[i];
                k--;
            }
        }
        sort(nums.begin(), nums.end());
        if(k%2==1){
            nums[0]=-nums[0];
        }
        for(int i=0; i<nums.size(); i++){
            lsum+=nums[i];
        }
        return lsum;
    }
};