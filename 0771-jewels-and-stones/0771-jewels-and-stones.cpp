class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>jew;
        int count=0;
        for(char ch: jewels){
            jew.insert(ch);
        }
        for(char ch: stones){
            if(jew.count(ch)!=0){
                count++;
            }
        }
        return count;
    }
};