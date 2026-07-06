class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> letters;
        for(char ch: s){
            if(isalnum(ch)){
                letters.push_back(tolower(ch));
            }
        }
        int i=0;
        int j=letters.size()-1;
        while(i<=j){
            if (letters[i]==letters[j]){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};