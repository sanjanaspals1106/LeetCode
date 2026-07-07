class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0, avg=0;
        int i=0, j=k, sum=0;
        while(i<k){
            sum+=arr[i];
            i++;
        } 
        i=0;
        avg=sum/k;
        if(avg>=threshold){
            count+=1;
        }
        while(j<arr.size()){
            sum+=arr[j];
            sum-=arr[i];
            avg=sum/k;
            if(avg>=threshold){
                count++;
            }
            i++;
            j++;
        }
        return count;
    }
};