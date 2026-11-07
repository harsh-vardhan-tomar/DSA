class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        // while(n%2==0){
        //     n=n/2;
        // }
        // return n==1;

        int count=0;
        while(n>0){
            int rem=n%2;
            if(rem==1){
                count++;
            }
            n/=2;
        }
        if(count==1){
            return true;
        }
        return false;
    }
};