class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords=0;
        for(int i=0; i<sentences.size(); i++){
            int j=0;
            for(char ch: sentences[i]){
                if(ch==' '){
                    j++;
                }
                maxWords=max(maxWords, j+1);
            }
        }
        return maxWords;    
    }
};