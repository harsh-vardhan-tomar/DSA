class Solution {
public:
    int strStr(string haystack, string needle) {
        int indx=-1;
        int n1=haystack.size();
        int n2=needle.size();
        // int first=0,second=0;
        // int count=0;
        // for(int i=0;i<n1;i++){
        //     first=i;
        //     while(second<n2){
        //         if(haystack[first]==needle[second]){
        //             count++;
        //             first++;
        //             second++;
        //         }
        //         else{
        //             count=0;
        //             second=0;
        //             break;
        //         }
        //     }
        //     if(count==n2){
        //         indx=i;
        //         break;
        //     }
        // }

        if(n2>n1){
            return indx;
        }
        int prefix=0,suffix=1;
        vector<int> lps(n2,0);
        while(suffix<n2){
            if(needle[prefix]!=needle[suffix]){
                if(prefix==0){
                    lps[suffix]=0;
                    suffix++;
                }
                else{
                    prefix=lps[prefix-1];
                }
            }
            else{
                lps[suffix]=prefix+1;
                prefix++;
                suffix++;
            }
        }

        int i=0,j=0;
        while(i<n1 && j<n2){
            if(haystack[i]==needle[j]){
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
        if(j==n2){
            indx=i-j;
        }
        return indx;
    }
};