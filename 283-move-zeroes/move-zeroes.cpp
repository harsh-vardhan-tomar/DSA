class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans;
        int i=0;
        while(i<n){
            if(arr[i]==0){
                i++;
            }
            else{
                ans.push_back(arr[i]);
                i++;
            }
        }
        ans.resize(n);
        for(int i=0;i<n;i++){
            arr[i]=ans[i];
        }
    }
};