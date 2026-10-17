class Solution {
public:
    string sortSentence(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                count++;
            }
        }
        string temp;
        vector<string> ans(count+1);
        int i=0;
        while(i<n){
            int index=0;
            int j=i;
            while(j<n && s[j]!=' '){
                if(isdigit(s[j])){
                    char ch=s[j];
                    int num=ch-'0';
                    index=num-1;
                }
                if(isdigit(s[j])){
                    j++;
                    break;
                }
                temp+=s[j];
                j++;
            }
            ans[index]=temp;
            temp="";
            i=j+1;
        }
        temp="";
        for(int i=0;i<ans.size();i++){
            temp+=ans[i];
            if(i==ans.size()-1){
                break;
            }
            temp+=' ';
        }
        return temp;
        
    }
};