class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();
        int duplicate=0;
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        // int i=0,j=n-1;
        // while(i<j){
        //     if(arr[i]==arr[i+1]){
        //         for(int k=i;k<j;k++){
        //             arr[k]=arr[k+1];
        //         }
        //         j--;
        //         duplicate++;
        //     }
        //     else{
        //         i++;
        //     }
        // }
        // return n-duplicate; 
        int nondup=0;
        int j=1;
        while(j<n){
            int i=j-1;
            if(arr[i]!=arr[j]){
                nondup++;
                arr[nondup]=arr[j];
            }
            j++;
        }
        return nondup+1;
        
        
    }
};