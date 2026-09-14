class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int m=arr.size();
        int n=arr[0].size();
        int maxSum=INT_MIN;
        for(int i=0;i<m;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=arr[i][j];
                if(sum>maxSum){
                    maxSum=sum;
                }
            }
        }
        return maxSum;
    }
};