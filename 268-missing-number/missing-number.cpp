class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int miss=0;
        int n=arr.size();
        int originalSum=(n*(n+1))/2;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int ans=originalSum-sum;
        return ans;
    }
};