class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int beg=0,end=n-1;
        int ans=-1;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            if(arr[mid]==target){
                ans=mid;
                break;
            }
            else if(arr[mid]>=arr[0]){
                if(target>=arr[beg] && target<=arr[mid]){
                    end=mid-1;
                }
                else{
                    beg=mid+1;
                }
            }
            else if(arr[mid]<arr[0]){
                if(target>=arr[mid] && target<=arr[end]){
                    beg=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return ans;
    }
};