class Solution {
public:
    vector<int> runningSum(vector<int>& arr) {
        int sum=0;
        int n=arr.size();
        vector<int> prefix(n);
        for(int i=0;i<n;i++){
            sum+=arr[i];
            prefix[i]=sum;
        }
        return prefix;
        
    }
};