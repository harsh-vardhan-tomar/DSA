class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        vector<int> lps(n,0);
        int prefix=0,suffix=1;
        while(suffix<n){
            if(s[prefix]==s[suffix]){
                lps[suffix]=prefix+1;
                prefix++;
                suffix++;
            }
            else{
                if(prefix==0){
                    lps[suffix]=0;
                    suffix++;
                }
                else{
                    prefix=lps[prefix-1];
                }
            }
        }

        int len=n-lps[n-1];
        if(lps[lps.size()-1]>0 && len!=0 && n%len==0){
            return true;
        }
        return false;
    }
};