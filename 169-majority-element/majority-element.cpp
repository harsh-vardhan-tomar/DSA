class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     int count=1;
        //     for(int j=i+1;j<n;j++){
        //         if(arr[i]==arr[j]){
        //             count++;
        //         }
        //     }
        //     if(count>(n/2)){
        //         ans=arr[i];
        //     }
        // }
        // return ans;

        // int ans=0;
        // for(int i=0;i<n;i++){  // only valid for range of 1-n
        //     arr[i]--;
        // }
        // for(int i=0;i<n;i++){
        //     int original=arr[i]%n;
        //     arr[original]+=n;
        // }
        // for(int i=0;i<n;i++){
        //     if((arr[i]/n)>(n/2)){
        //         ans=i+1;
        //     }
        // }
        // return ans;

        int count=0;
        int candidate=0;
        for(int i=0;i<n;i++){
            if(count==0){
                candidate=arr[i];
                count=1;
            }
            else{
                if(candidate==arr[i]){
                    count++;
                }
                else{
                    count--;
                }
            }
        }
        count=0;
        for(int i=0;i<n;i++){
            if(arr[i]==candidate){
                count++;
            }
        }
       if(count>(n/2)){
        return candidate;
       }
        return -1;
    }
};