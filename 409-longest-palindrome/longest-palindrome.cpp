class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.length();
        int longest=0;
        if(n==1){
            return 1;
        }
        vector<int> lower(26);
        vector<int> upper(26);
        for(int i=0;i<n;i++){
            int indx1=s[i]-'a';
            int indx2=s[i]-'A';
            if(s[i]>='a'){
                lower[indx1]+=1;
            }
            else{
                upper[indx2]+=1;
            }
        }
        for(int i=0;i<lower.size();i++){
            if(lower[i]!=0 && lower[i]%2==0){
                longest+=lower[i];
            }
            else{
                if(lower[i]!=0){
                    longest+=(lower[i]-1);
                }
            }
            if(upper[i]!=0 && upper[i]%2==0){
                longest+=upper[i];
            }
            else{
                if(upper[i]!=0){
                    longest+=(upper[i]-1);
                }
            }
        }
        for(int i=0;i<lower.size();i++){
            if(lower[i]%2!=0 || upper[i]%2!=0){
                longest+=1;
                break;
            }
        }
        return longest;
    }
};