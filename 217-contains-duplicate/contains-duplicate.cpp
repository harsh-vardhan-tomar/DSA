class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        int n=arr.size();
        if(n<=1){
            return false;
        }
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(arr[i]==arr[j]){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        sort(arr.begin(),arr.end());
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                return true;
            }
        }
        return false;
    }
};