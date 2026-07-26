class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int Xor=0;
        unordered_map<int, int> count;
        for(int i=0; i<nums.size(); i++){
            count[nums[i]]++;
            if(count[nums[i]]>2){
                continue;
            }
            Xor^=nums[i];
        }
        return Xor;
    }
};