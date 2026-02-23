class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> soln;
        vector<int> count(nums.size()+1,0);
        for(int i=0; i<nums.size();i++){
            count[nums[i]]++;
        }
        for(int i=0; i<count.size();i++){
            if(count[i]>1){
                soln.push_back(i);
            }
        }   
        return soln;     
    }
};