class Solution {
public:
    string sortVowels(string s) {
        int n=s.size();
        string temp;
        vector<int> upper(26);
        vector<int> lower(26);

        for(int i=0;i<n;i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
                upper[s[i]-'A']++;
                s[i]='#';
            }
            else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                lower[s[i]-'a']++;
                s[i]='#';
            }
        }
        for(int i=0;i<26;i++){    //uppercase
            char ch1='A'+i;
            while(upper[i]){
                temp+=ch1;
                upper[i]--;
            }
        }
        for(int i=0;i<26;i++){       //lowercase
            char ch2='a'+i;
            while(lower[i]){
                temp+=ch2;
                lower[i]--;
            }
        }

        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='#'){
                s[i]=temp[j];
                j++;
            }
        }
        return s;

        
    }
};