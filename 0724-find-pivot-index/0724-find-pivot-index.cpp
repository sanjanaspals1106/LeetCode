class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int pivot=0;
        while(pivot<nums.size()){
            int left=0, right=0;
            for(int i=0; i<pivot; i++){
                left+=nums[i];
            }
            for(int j=pivot+1; j<nums.size(); j++){
                right+=nums[j];
            }
            if(left==right){
                return pivot;
            } 
            pivot++;
        }
        return -1;
    }
};