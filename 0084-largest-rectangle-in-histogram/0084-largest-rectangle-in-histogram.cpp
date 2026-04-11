class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int area=0;
        stack<int> st;
        for(int i=0; i<heights.size(); i++){
            while(!st.empty() && heights[i]<heights[st.top()]){
                int height=heights[st.top()];
                st.pop();
                int left=st.empty() ? -1: st.top();
                int right=i;
                int width=right-left-1;
                int a= height*width;
                area=max(area, a);
            }
                st.push(i);
        }
        while(!st.empty()){
            int h = heights[st.top()];
            st.pop();

            int right = heights.size();
            int left = st.empty() ? -1 : st.top();

            int width = right - left - 1;
            area = max(area, h * width);
        }
        return area;
    }
};