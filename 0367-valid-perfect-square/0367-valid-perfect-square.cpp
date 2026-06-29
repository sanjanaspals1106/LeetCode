class Solution {
public:
    bool isPerfectSquare(int num) {
        for(long long i=0; i<=num; i++){
            if (num==i*i){
                return true;

            }
        }
        return false;
    }
};