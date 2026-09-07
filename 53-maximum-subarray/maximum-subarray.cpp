class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int prefix=0;
        int maxSum=INT_MIN;
        int n=arr.size();
        for(int i=0;i<n;i++){
            prefix+=arr[i];
            maxSum=max(maxSum,prefix);
            if(prefix<0){
                prefix=0;
            }
        }
        return maxSum;
    }
};