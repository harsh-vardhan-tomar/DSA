class Solution {
public:
    int strStr(string haystack, string needle) {
        int indx=-1;
        int n1=haystack.size();
        int n2=needle.size();
        int first=0,second=0;
        int count=0;
        for(int i=0;i<n1;i++){
            first=i;
            while(second<n2){
                if(haystack[first]==needle[second]){
                    count++;
                    first++;
                    second++;
                }
                else{
                    count=0;
                    second=0;
                    break;
                }
            }
            if(count==n2){
                indx=i;
                break;
            }
        }
        return indx;
    }
};