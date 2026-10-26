class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        vector<int> sol(nums.size(),-1);
        for(int i=2*nums.size()-1; i>=0; i--){
            int idx=i%nums.size();
            while(!st.empty() && st.top()<=nums[idx]){
                st.pop();
            }
            if(i<nums.size() && !st.empty()){
                sol[idx]=st.top();
            }
            st.push(nums[idx]);
        }
        return sol;
    }
};