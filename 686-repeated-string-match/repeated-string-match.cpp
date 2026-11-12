class Solution {
    void createLPS(vector<int> &lps, string &b){
        int prefix=0,suffix=1;
        while(suffix<b.size()){
            if(b[prefix]==b[suffix]){
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
    }
    bool kmpStringMatch(string &a, string &b){
        vector<int> lps(b.size(),0);
        createLPS(lps,b);
        int i=0,j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                i++;
                j++;
            }
            else{
                if(j==0){
                    i++;
                }
                else{
                    j=lps[j-1];
                }
            }
        }
        if(j==b.size()){
            return true;
        }
        return false;
    }
public:
    int repeatedStringMatch(string a, string b) {
        string temp=a;

        int repeat=1;

        while(temp.size()<b.size()){
            temp+=a;
            repeat++;
        }
        if(kmpStringMatch(temp,b)){
            return repeat;
        }
        temp+=a;
        if(kmpStringMatch(temp,b)){  // temp and b are not matching so temp+a , b is checked
            return repeat+1;
        }
        return -1;
    }
};