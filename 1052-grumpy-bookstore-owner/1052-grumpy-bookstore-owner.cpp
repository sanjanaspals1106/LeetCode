class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int satisfied = 0;
        int i = 0, j = minutes;
        int tot_cust = 0;

        for (int k = 0; k < customers.size(); k++) {
            if (grumpy[k] == 0)
                satisfied += customers[k];
        }

        for (int k = 0; k < minutes; k++) {
            if (grumpy[k] == 1)
                tot_cust += customers[k];
        }

        int extra = tot_cust;

        while (j < customers.size()) {
            if (grumpy[j] == 1)
                tot_cust += customers[j];

            if (grumpy[i] == 1)
                tot_cust -= customers[i];

            extra = max(extra, tot_cust);

            i++;
            j++;
        }

        return satisfied + extra;
    }
};