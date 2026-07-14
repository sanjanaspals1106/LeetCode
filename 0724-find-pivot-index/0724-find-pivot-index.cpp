class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix(nums.size());
        prefix[0]=nums[0];
        for(int i=1; i<nums.size(); i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            int left=(i == 0) ? 0 : prefix[i - 1];
            int right=prefix[nums.size()-1]-prefix[i];
            if(left==right){
                return i;
            }
        }
        return -1;
    }
};