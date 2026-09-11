class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        int min_count=INT_MAX;
        string str=arr[0];
        int l=str.length();
        string output="";
        bool isContinue=true;
        int n=arr.size();
        if(n==1){
            return arr[0];
        }
        for(int i=1;i<=n-1;i++){
            int count=0;
            for(int j=0;j<l;j++){
                if((str[j]==arr[i][j]) && isContinue){
                    count++;
                }
                else{
                    isContinue=false;
                    break;
                }
            }
            if(count<min_count){
                min_count=count;
            }
            isContinue=true;
        }
        for(int i=0;i<min_count;i++){
            output+=str[i];
        }
        return output;
    }
};