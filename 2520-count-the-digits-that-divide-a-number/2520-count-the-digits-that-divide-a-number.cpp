class Solution {
public:
    int countDigits(int num) {
        int digits=0;
        int n=num;
        while(n!=0){
            int digit=n%10;
            n=n/10;
            if(num%digit==0){
                digits++;
            }
        }
        return digits;
    }
};