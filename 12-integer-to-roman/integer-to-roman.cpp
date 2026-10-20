class Solution {
    string getRoman(int digit, int j){  //digit(0-9)
        string ans;
        string one,five,ten;
        if(j==0){ one="I" ; five="V" ; ten="X";}
        else if(j==1){ one="X" ; five="L" ; ten="C";}
        else if(j==2){ one="C" ; five="D" ; ten="M";}
        else{
            one="M";
        }
        if(digit>=0 && digit<=3){
            for(int i=0;i<digit;i++){
                ans+=one;
            }
        }
        else if(digit==4){
            ans=one+five;
        }
        else if(digit>=5 && digit<=8){
            ans=five;
            for(int i=0;i<digit-5;i++){
                ans+=one;
            }
        }
        else if(digit==9){
            ans=one+ten;
        }
        return ans;
    }
public:
    string intToRoman(int n) {     // TC: O(1) , SC: O(1) 
        string ans;
        int count=0;
        int original=n;
        while(n!=0){
            count++;
            n=n/10;
        }
        int j=count-1;
        int place=1;
        for(int i=0;i<j;i++){
            place*=10;                // place = 10^j
        }
        while(j>=0 && original!=0){
            int digit=original/place;   //digit(0-9)
            ans+=getRoman(digit,j);
            original=original%place;
            place/=10;
            j--;
        }
        return ans;
    }
};