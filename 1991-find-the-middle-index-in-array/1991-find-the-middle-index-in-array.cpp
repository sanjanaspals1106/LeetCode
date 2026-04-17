class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int midIndex=0;
        while(midIndex<nums.size()){
        int psum=0, ssum=0;
        for(int i=0; i<midIndex; i++){
            psum+=nums[i];
        }
        for(int i=midIndex+1; i<nums.size(); i++){
            ssum+=nums[i];
        }
        if(psum==ssum){
            return midIndex; }
            else {midIndex++;}
        }
        return -1;
    }
};