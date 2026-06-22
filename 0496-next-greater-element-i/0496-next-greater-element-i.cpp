class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(),-1);
        stack<int> st;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    int curr=j;
                    while(curr<nums2.size()){
                    if(nums2[curr]>nums1[i]){
                        ans[i]=nums2[curr];
                        break;
                    }
                    curr++;
                    }
                }
            }
        }
        return ans;
    }
};