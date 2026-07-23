class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> sol(n+1,0);
        for(int i=1; i<n+1; i++){
            int p=i;
            while(p!=0){
                p=p&(p-1);
                sol[i]++;
            }            
        }
        return sol;
    }
};