class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int row=arr.size();
        int col=arr[0].size();
        int i=0,j=col-1;
        while(i<row && j>=0){
            int a=arr[i][j];
            if(a==target){
                return true;
            }
            else if(a<target){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};