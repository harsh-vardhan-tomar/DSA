class Solution {
public:
    int countDigits(int n) {
        int count=0,original=n;
        while(n>0){
            int rem=n%10;
            if(original%rem==0){
                count++;
            }
            n=n/10;
        }
        return count;
    }
};