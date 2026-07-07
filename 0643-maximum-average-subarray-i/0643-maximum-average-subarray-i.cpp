class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0;
        int i=0, j=k, p=0;
        double sum = 0;
        while(p<k){
            sum+=nums[p];
            p++;
        }
        avg=sum/k;
        while(j<nums.size()){  
            sum+=nums[j];
            sum-=nums[i];
            j++;
            i++;
            avg=max(avg, sum/k);
        }
        return avg;
    }
};