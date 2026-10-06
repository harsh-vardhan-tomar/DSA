class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(2);
        // vector<int> count(n); // with extra array
        // vector<int> ans(2);
        // for(int i=0;i<n;i++){
        //     int a=arr[i];
        //     count[a-1]+=1;
        // }
        // for(int i=0;i<n;i++){
        //     if(count[i]==2){
        //         ans[0]=i+1;
        //     }
        //     else if(count[i]==0){
        //         ans[1]=i+1;
        //     }
        // }
        // return ans;

        for(int i=0;i<n;i++){
            arr[i]-=1;
        }
        for(int i=0;i<n;i++){
            int original=arr[i]%n;
            arr[original]+=n;
        }
        for(int i=0;i<n;i++){
            if(arr[i]/n>1){
                ans[0]=i+1;
            }
            else if(arr[i]/n==0){
                ans[1]=i+1;
            }
        }
        return ans;
    }
};