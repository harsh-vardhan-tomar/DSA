class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.length();
        bool ispanagram=true;
        if(n<26){
            return false;
        }
        // sort(sentence.begin(),sentence.end());
        // int nondup=0;
        // int j=1;
        // while(j<n){
        //     int i=j-1;
        //     if(sentence[i]!=sentence[j]){
        //         nondup++;
        //         sentence[nondup]=sentence[j];
        //     }
        //     j++;
        // }
        // if(nondup+1<26){
        //     return false;
        // }
        // char start='a';
        // for(int i=0;i<=nondup;i++){
        //     if(sentence[i]==start){
        //         ispanagram=true;
        //         start++;
        //     }
        //     else{
        //         ispanagram=false;
        //         break;
        //     }
        // }
        // return ispanagram;

        vector<int> count(26);
        for(int i=0;i<sentence.size();i++){
            int indx=sentence[i]-'a';
            count[indx]+=1;
        }
        for(int i=0;i<count.size();i++){
            if(count[i]==0){
                ispanagram=false;
                break;
            }
        }
        return ispanagram;
    }
};