class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
        int i=0,j=0;
        vector<int> ans;
        while(i<m && j<n){
            if(arr1[i]<=arr2[j]){
                ans.push_back(arr1[i]);
                i++;
            }
            else{
                ans.push_back(arr2[j]);
                j++;
            }
        }
        if(i==m){
            for(int k=j;k<arr2.size();k++){
                ans.push_back(arr2[k]);
            }
        }
        if(j==n){
            for(int k=i;k<arr1.size();k++){
                ans.push_back(arr1[k]);
            }
        }
        for(int k=0;k<arr1.size();k++){
            arr1[k]=ans[k];
        }
    }
};