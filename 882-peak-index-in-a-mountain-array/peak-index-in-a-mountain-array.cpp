class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int beg=0,end=n-1;
        int indx=0;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(arr[mid]>arr[mid+1]){
                indx=mid;
                end=mid-1;
            }
            else{
                beg=mid+1;
            }
        }
        return indx;
    }
};