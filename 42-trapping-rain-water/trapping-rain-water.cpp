class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        int res=0;
        vector<int> leftmax(n),rightmax(n);
        leftmax[0]=arr[0],rightmax[n-1]=arr[n-1];
        // int ans=0;
        // for(int i=1;i<=n-2;i++){   O(n^2)
        //     int max1=arr[i],max2=arr[i];
        //     for(int j=i-1;j>=0;j--){
        //         if(max1<arr[j]){
        //             max1=arr[j];
        //         }
        //     }
        //     for(int k=i+1;k<n;k++){
        //         if(max2<arr[k]){
        //             max2=arr[k];
        //         }
        //     }
        //     int mini=min(max1,max2);
        //     int ans1=mini-arr[i];
        //     ans=ans+ans1;
        // }
            for(int i=1;i<n;i++){
                leftmax[i]=max(leftmax[i-1],arr[i]);
            }
            for(int i=n-2;i>=0;i--){
                rightmax[i]=max(rightmax[i+1],arr[i]);
            }
            for(int i=0;i<n;i++){
                int mini=min(leftmax[i],rightmax[i]);
                res+=mini-arr[i];
            }
            return res;
        }
};