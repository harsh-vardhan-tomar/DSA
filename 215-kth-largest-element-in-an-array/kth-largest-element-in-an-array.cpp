class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
        
        int ans=0;
        sort(arr.begin(),arr.end());
        // int n=arr.size();
        // for(int i=arr.size()-1;i>=(n-k);i--){
        //     ans=arr[i];
        // }
        // return ans;
        return arr[arr.size()-k];


    }
};