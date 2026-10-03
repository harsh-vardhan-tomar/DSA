class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int row=arr.size();
        int col=arr[0].size();
        vector<vector<int>> mat(row,vector<int>(col, 0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                mat[j][row-i-1]=arr[i][j];
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                arr[i][j]=mat[i][j];
            }
        }
    }
};