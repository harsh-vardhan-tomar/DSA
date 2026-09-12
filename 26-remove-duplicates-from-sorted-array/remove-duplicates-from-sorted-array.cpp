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
        int i=0,j=n-1;
        // vector<int> ans(n);
        // ans[0]=arr[0];
        while(i<j){
            if(arr[i]==arr[i+1]){
                for(int k=i;k<j;k++){
                    arr[k]=arr[k+1];
                }
                j--;
                duplicate++;
            }
            else{
                i++;
            }
        }
        return n-duplicate; 
    }
};