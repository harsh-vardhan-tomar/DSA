class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return false;
        // while(n%4==0){
        //     n=n/4;
        // }
        // return n==1;

        // if(n==1){
        //     return true;
        // }
        // if(n%4!=0){
        //     return false;
        // }
        // return isPowerOfFour(n/4);

        double x=log(n)/log(4);
        return x==(int)x;
    }
};