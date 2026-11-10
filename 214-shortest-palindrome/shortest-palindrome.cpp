class Solution {
public:
    string shortestPalindrome(string s) {
        string ans;
        string finalAns=s;
        int n=s.size();
        string temp=s;
        reverse(s.begin(),s.end());
        temp+='#';
        temp+=s;

        vector<int> lps(temp.size(),0);
        int prefix=0,suffix=1;
        while(suffix<temp.size()){
            if(temp[prefix]==temp[suffix]){
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
        ans="";
        int count=n-lps[lps.size()-1];
        for(int i=0;i<count;i++){
            ans.push_back(s[i]);
        }
        finalAns=ans+finalAns;
        
        return finalAns;
    }
};