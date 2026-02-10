class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> arr(nums.size(),0);
        for(int i=0; i<nums.size(); i++){
            int sum = 0;
            for(int j=0; j<nums.size(); j++){
                if(i!=j){
                    if(nums[j]<nums[i]){
                        sum+=1;
                    }
                }
            }
            arr[i]=sum;
        }
        return arr;
    }
};