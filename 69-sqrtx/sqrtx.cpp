class Solution {
public:
    int mySqrt(int x) {
        
        int beg=0,end=x;
        int sqrt=0;
        while(beg<=end){
            int mid=beg+(end-beg)/2;
            long long square=(long long) mid*mid;
            if(square<=x){
                sqrt=mid;
                beg=mid+1;
            }
            else if(square>x){
                end=mid-1;
            }
        }
        return sqrt;
    }
};