class Solution {
public:
    bool isPalindrome(string s) {
        vector <char> arr;
        for(char ch: s){
            if (isalnum(ch)) {
                arr.push_back(tolower(ch));
            }
        }
        int i=0;
        int j=arr.size()-1;
        while (i < j) {
            if (arr[i] != arr[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
        
        
    }
};