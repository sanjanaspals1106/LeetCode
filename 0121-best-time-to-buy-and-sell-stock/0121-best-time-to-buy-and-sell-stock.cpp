class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=prices[0];
        int profit=0;
        for(int i=0; i<prices.size(); i++){
            minPrice=min(minPrice, prices[i]);
            int prof= prices[i]-minPrice;
            profit=max(profit, prof);
        }
        return profit;
    }
};