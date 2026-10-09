class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b){
            return a[1]>b[1];
        });
        int size=0;
        for(auto box: boxTypes){
            int boxtype=box[0];
            int units=box[1];
            int take=min(truckSize,box[0]);
            size+=take*units;
            truckSize-=take;
        }
        return size;
    }
};