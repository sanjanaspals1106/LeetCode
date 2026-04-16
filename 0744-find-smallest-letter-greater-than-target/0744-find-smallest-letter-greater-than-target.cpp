class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low=0, high=letters.size()-1;
        int ans=letters[0];
        while(low<=high){
            int mid=low+(high-low)/2;
            if(target<letters[mid]){
                ans=letters[mid];
                high=mid-1;
            } else{
                low=mid+1;
            }
        }
        return ans;
    }
};