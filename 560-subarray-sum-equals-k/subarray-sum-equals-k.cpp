class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> prefix(n);
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            prefix[i]=sum;
        }

        for(int i=0;i<prefix.size();i++){
            if(prefix[i]==k){
                count++;
            }
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((prefix[j]-prefix[i])==k){
                    count++;
                }
            }
        }
        return count;
    }
};