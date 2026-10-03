class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
        int row=arr.size();
        int col=arr[0].size();
        // vector<vector<int>> mat(row,vector<int>(col, 0));
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         mat[j][row-i-1]=arr[i][j];
        //     }
        // }
        // for(int i=0;i<row;i++){
        //     for(int j=0;j<col;j++){
        //         arr[i][j]=mat[i][j];
        //     }
        // }

        for(int i=0;i<row-1;i++){
            for(int j=i+1;j<col;j++){
                swap(arr[i][j],arr[j][i]);
            }
        }
        for(int i=0;i<row;i++){
            int j=0,k=col-1;
            while(j<k){
                swap(arr[i][j],arr[i][k]);
                j++;
                k--;
            }
        }
    }
};