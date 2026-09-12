class Solution {
public:
    string firstPalindrome(vector<string>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            string ans=arr[i];
            int word_size=arr[i].length();
            int start=0,end=word_size-1;
            while(start<end){
                swap(arr[i][start],arr[i][end]);
                start++;
                end--;
            }
            if(arr[i]==ans){
                return arr[i];
            }
        }
        return "";
    }
};