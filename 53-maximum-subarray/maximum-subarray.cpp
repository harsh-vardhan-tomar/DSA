class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int prefix=0;
        int maxSum=INT_MIN;
        for(int i=0;i<arr.size();i++){
            prefix+=arr[i];
            maxSum=max(maxSum,prefix);
            if(prefix<0){
                prefix=0;
            }
        }
        return maxSum;
    }
};