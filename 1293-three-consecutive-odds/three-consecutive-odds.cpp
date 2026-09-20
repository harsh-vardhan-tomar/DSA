class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        bool con=false;
        int count=0;
        bool ans=false;
        for(int i=0;i<n;i++){
            if(arr[i]%2!=0){
                count++;
                if(count==3){
                    ans=true;
                }
            }
            else{
                count=0;
            }
        }
        return ans;
    }
};