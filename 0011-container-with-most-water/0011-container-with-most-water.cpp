class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxVol=0;
        int i=0, j=height.size()-1;
        while(i<j){
            int area=abs(i-j)*min(height[i], height[j]);
            maxVol=max(area, maxVol);
            if(height[i]<height[j]){
                i++;
            }else j--;
        }
        return maxVol;
    }
};