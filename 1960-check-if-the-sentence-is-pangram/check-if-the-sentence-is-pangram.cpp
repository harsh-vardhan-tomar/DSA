class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.length();
        bool ispanagram=false;
        if(n<26){
            return ispanagram;
        }
        sort(sentence.begin(),sentence.end());
        int nondup=0;
        int j=1;
        while(j<n){
            int i=j-1;
            if(sentence[i]!=sentence[j]){
                nondup++;
                sentence[nondup]=sentence[j];
            }
            j++;
        }
        if(nondup+1<26){
            return false;
        }
        char start='a';
        for(int i=0;i<=nondup;i++){
            if(sentence[i]==start){
                ispanagram=true;
                start++;
            }
            else{
                ispanagram=false;
                break;
            }
        }
        return ispanagram;
    }
};