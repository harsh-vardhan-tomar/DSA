class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n=arr.size();
        vector<int> prefixSum(n);
        vector<int> suffixSum(n);
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            sum1+=arr[i];
            prefixSum[i]=sum1;
        }
        for(int i=n-1;i>=0;i--){
            sum2+=arr[i];
            suffixSum[i]=sum2;
        }
        for(int i=0;i<n;i++){
            if(prefixSum[i]==suffixSum[i]){
                return i;
            }
        }
        return -1;
    }
};