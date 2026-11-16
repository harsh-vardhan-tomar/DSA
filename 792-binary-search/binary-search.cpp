class Solution {
public:
    int search(vector<int>& arr, int target) {
        int beg=0,end=arr.size()-1;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(arr[mid]==target){
                return mid;
            }
            else if(arr[mid]<target){
                beg=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
};