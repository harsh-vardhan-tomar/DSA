class Solution {
public:
    int findGCD(vector<int>& arr) {
        int maxi=arr[0],mini=arr[0];
        for(int i=1;i<arr.size();i++){
            if(maxi<arr[i]){
                maxi=arr[i];
            }
        }
        for(int i=1;i<arr.size();i++){
            if(mini>arr[i]){
                mini=arr[i];
            }
        }
        while(mini!=0){
            int rem=maxi%mini;
            maxi=mini;
            mini=rem;
        }
        return maxi;
    }
};