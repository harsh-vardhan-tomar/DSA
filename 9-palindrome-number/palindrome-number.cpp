class Solution {
public:
    bool isPalindrome(int x) {
        long long ans=x;
        long long rev=0;
        if(x<0) return false;
        while(x>0){
            long long rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        if(ans==rev){
            return true;
        }
        return false;
    }
};