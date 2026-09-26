class Solution {
public:
    int smallestIndex(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            int s=0;
            while(arr[i]>0){
                int rem=arr[i]%10;
                s=s+rem;
                arr[i]=arr[i]/10;
            }
            if(s==i){
                return i;
            }
        }
        return -1;
    }
};