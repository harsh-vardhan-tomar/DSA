class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        // for(int i=0;i<n;i++){ brute-force approach
        //     if(pow(3,i)==n){
        //         return true;
        //     }
        // }
        // while(n%3==0){
        //     n=n/3;
        // }
        // return n==1;

        // int count=0;
        // bool inValid=false;
        // while(n>0){
        //     int rem=n%3;
        //     if(rem==1){
        //         count++;
        //     }
        //     else if(rem!=0 || rem!=1){
        //         inValid=true;
        //     }
        //     n/=3;
        // }
        // if(count==1 && inValid){
        //     return true;
        // }
        // return false;
        if(n==1){
            return true;
        }
        if(n%3!=0){
            return false;
        }
        return isPowerOfThree(n/3);
    }
};