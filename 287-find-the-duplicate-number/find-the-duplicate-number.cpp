class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int original=arr[i]%n;
            arr[original]+=n;
        }
        for(int i=0;i<n;i++){
            if(arr[i]/n>=2){
                ans=i;
                break;
            }
        }
        return ans;
    }
};