class Solution {
public:
    vector<int> findErrorNums(vector<int>& arr) {
        int n=arr.size();
        vector<int> count(n);
        vector<int> ans(2);
        for(int i=0;i<n;i++){
            int a=arr[i];
            count[a-1]+=1;
        }
        for(int i=0;i<n;i++){
            if(count[i]==2){
                ans[0]=i+1;
            }
            else if(count[i]==0){
                ans[1]=i+1;
            }
        }
        return ans;
    }
};