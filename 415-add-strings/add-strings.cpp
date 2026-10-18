class Solution {
public:
    string addStrings(string s1, string s2) {
        string ans;
        int n1=s1.size();
        int n2=s2.size();
        int i=n1-1,j=n2-1;
        int carry=0;
        while(i>=0 && j>=0){
            int ch1=s1[i]-'0';
            int ch2=s2[j]-'0';
            int sum=ch1+ch2+carry;
            carry=sum/10;
            ans+=(sum%10)+'0';
            i--;
            j--;
        }
        if(i<0){
            while(j>=0){
                int ch3=s2[j]-'0';
                int sum3=ch3+carry;
                carry=sum3/10;
                ans+=(sum3%10)+'0';
                j--;
            }
        }
        if(j<0){
            while(i>=0){
                int ch4=s1[i]-'0';
                int sum4=ch4+carry;
                carry=sum4/10;
                ans+=(sum4%10)+'0';
                i--;
            }
        }
        if(carry!=0){
            ans+='1';
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};