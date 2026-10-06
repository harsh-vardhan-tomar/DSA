class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        
        // for(int i=0;i<nums.size();i++){
        //     nums[i]=nums[i]*nums[i];
        // }
        // sort(nums.begin(),nums.end());
        // return nums;
        int n=arr.size();
        vector<int> ans(n);
        int i=0,j=n-1;
        for(int k=n-1;k>=0;k--){
            if(abs(arr[i])>=abs(arr[j])){
                ans[k]=arr[i]*arr[i];
                i++;
            }
            else{
                ans[k]=arr[j]*arr[j];
                j--;
            }
        }
        return ans;

    }
};