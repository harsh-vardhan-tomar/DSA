class Solution {
public:
    int climbStairs(int n) {
        // if(n==1 || n==2){
        //     return n;
        // }
        // return climbStairs(n-1)+climbStairs(n-2);  // Will be solved by Dynamic programming
        
        if(n<=2) return n;
        int a=1,b=2;
        int ans=0;
        for(int i=3;i<=n;i++){
            int c=a+b;
            a=b;
            b=c;
            ans=c;
        }
        return ans;
    }
};