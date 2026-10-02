class Solution {
public:
    int maxArea(vector<int>& arr) {
        int finalAns=INT_MIN;
        int n=arr.size();
        if(n<2) return 0;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int a=min(arr[i],arr[j]);
        //         int ans=((j-i)*a);
        //         if(ans>finalAns){
        //             finalAns=ans;
        //         }
        //     }
        // }
        // return finalAns;

        int i=0,j=n-1;
        while(i<j){
            int mini=min(arr[i],arr[j]);
            int dist=j-i;
            int ans=mini*dist;
            if(ans>finalAns){
                finalAns=ans;
            }
            if(arr[i]<arr[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return finalAns;
    }
};