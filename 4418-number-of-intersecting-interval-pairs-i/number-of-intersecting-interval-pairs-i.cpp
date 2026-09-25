class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& arr) {
        int n=arr.size();
        int intersect=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int maxi=max(arr[i][0],arr[j][0]);
                int mini=min(arr[i][1],arr[j][1]);
                if(maxi<=mini){
                    intersect++;
                }
            }
        }
        return intersect;
    }
};