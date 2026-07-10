class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0;
        int res=0;
        unordered_map<int,int> type;
        for(int j=0; j<fruits.size(); j++){
            type[fruits[j]]++;
            while(type.size()>2){
                type[fruits[i]]--;
                if(type[fruits[i]]==0){
                    type.erase(fruits[i]);
                }
                i++;
            }
            res=max(res,j-i+1);
        }
        return res;
    }
};