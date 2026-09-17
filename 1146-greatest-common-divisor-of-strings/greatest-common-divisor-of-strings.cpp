class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int a=str1.length();
        int b=str2.length();
        while(b!=0){
            int rem=a%b;
            a=b;
            b=rem;
        }
        if(str1[a-1]!=str2[a-1]){
            return "";
        }
        if((str1+str2)!=(str2+str1)){
            return "";
        }
        str1.resize(a);
        return str1;
    }
};