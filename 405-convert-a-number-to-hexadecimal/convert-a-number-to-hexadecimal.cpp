class Solution {
public:
    string toHex(int num) {
        string hex;
        if(num==0){
            return "0";
        }
        if(num<0){
            uint32_t n=uint32_t (num);
            while(n>0){
                int rem=n%16;
                char ch=rem-10+'a';
                if(rem>=10){
                    hex+=ch;
                }
                else{
                    hex+=rem+'0';
                }
                n/=16;
            }
            reverse(hex.begin(),hex.end());
            return hex;
        }
        while(num>0){
            int rem=num%16;
            char ch=rem-10+'a';
            if(rem>=10){
                hex+=ch;
            }
            else{
                hex+=rem+'0';
            }
            num/=16;
        }
        reverse(hex.begin(),hex.end());
        return hex;
    }
};