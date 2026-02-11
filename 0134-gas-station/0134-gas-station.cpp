class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas=0, totalCost=0;
        for (int i=0; i<gas.size(); i++){
            totalGas+=gas[i];
            totalCost+=cost[i];
        }
        if(totalGas<totalCost){
            return -1;
        }
        int currentTank=0, start=0;
        for(int i=0; i<gas.size(); i++){
            currentTank+=gas[i]-cost[i];
            if(currentTank<0) {
                currentTank=0;
                start=i+1;
            }
        }
        return start;
    }
};