class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        int res=0;
        vector<int> leftmax(n),rightmax(n);
        leftmax[0]=arr[0],rightmax[n-1]=arr[n-1];
            for(int i = 1; i < n; i++) {
                leftmax[i] = max(leftmax[i-1], arr[i]);
            }
            for(int i = n-2; i >= 0; i--) {
               rightmax[i] = max(rightmax[i+1], arr[i]);
            }
            for(int i = 0; i < n; i++) {
                int mini = min(leftmax[i], rightmax[i]);
                res += mini - arr[i];
            }
            return res;
        }
};