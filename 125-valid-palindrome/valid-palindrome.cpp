class Solution {
public:
    bool isPalindrome(string s) {
        // for(int i=0;i<s.length();){
        //     s[i]=tolower(s[i]);
        //     if(!isalnum(s[i])){
        //         s.erase(i,1);
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // int n=s.length();
        // string ans=s;
        // int i=0,j=n-1;
        // while(i<j){
        //     swap(s[i],s[j]);
        //     i++;
        //     j--;
        // }
        // if(ans==s){
        //     return true;
        // }
        // return false;


        string str="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                str+=tolower(s[i]);
            }
        }
        string ans=str;
        int n=str.length();
        int i=0,j=n-1;
        while(i<j){
            swap(str[i],str[j]);
            i++;
            j--;
        }
        if(ans==str){
            return true;
        }
        return false;
    }
};