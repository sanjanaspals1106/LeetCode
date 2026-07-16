class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int delta[101]={0};
        for(auto &log : logs){
            delta[log[0]-1950]++;
            delta[log[1]-1950]--;
        }
        int maxpop=0;
        int run=0;
        int resyear=0;
        for(int i=0; i<101; i++){
            run+=delta[i];
            if(run>maxpop){
                maxpop=run;
                resyear=1950+i;
            }
        }
        return resyear;
    }
};