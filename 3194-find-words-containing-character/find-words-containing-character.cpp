class Solution {
public:
    vector<int> findWordsContaining(vector<string>& arr, char x) {
        int n=arr.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<arr[i].size();j++){
                if(arr[i][j]==x){
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};