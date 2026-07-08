class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count=0;
        int i=0, j=0;
        int zeroes=0;
        while(j<nums.size()){
            if(nums[j]==0){
                zeroes+=1;
            }
            while(zeroes>k){
                if(nums[i]==0){
                    zeroes--;
                }
                i++;
            }
            count=max(count, j-i+1);
            j++;
        }
        return count;
    }
};