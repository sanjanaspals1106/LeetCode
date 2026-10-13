class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int> arr;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<0){
                arr.push_back(-1*nums[i]);
            }else{
                arr.push_back(nums[i]);
            }
        }
        sort(arr.begin(),arr.end());
        long score=0;
        for(int i=0; i<arr.size()/2; i++){
            score+=arr[i]*arr[i];
        }
        for(int i=arr.size()/2; i<arr.size(); i++){
            score-=arr[i]*arr[i];
        }
        return abs(score);
    }
};