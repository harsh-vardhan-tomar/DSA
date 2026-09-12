class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        if(n==1){
            return;
        }
        // int i=0,j=n-1;            // MERA KHUDKA LOGIC HAI YEH WALA
        // while(i<j){
        //     int indx=0;
        //     if(arr[i]==0){
        //         for(int k=j;k>i;k--){
        //             arr[k]=arr[k-1];
        //         }
        //         arr[i+1]=indx;
        //         i=i+2;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                ans.push_back(0);
            }
            ans.push_back(arr[i]);
        }
        ans.resize(n);
        for(int i=0;i<n;i++){
            arr[i]=ans[i];
        }
    }
};