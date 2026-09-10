class Solution {
public:
    bool isHappy(int n) {
        vector<int> prev;
        bool ishappy=false;
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        while(n!=1 ){
            int ans=0;
            while(n>0){
                int rem=n%10;
                ans=ans+(rem*rem);
                n=n/10;
            }
            if(ans==1){
                ishappy=true;
                break;
            }
            n=ans;
            for(int i=0;i<prev.size();i++){
                if(prev[i]==n){
                    return false;
                }
            }
            prev.push_back(n);
        }
        return ishappy;
    }
};