class Solution {
public:
    int differenceOfSum(vector<int>& arr) {
        int es=0,ds=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            es+=arr[i];
        }
        for(int i=0;i<n;i++){
            int sum=0;
            while(arr[i]!=0){
                int rem=arr[i]%10;
                sum+=rem;
                arr[i]=arr[i]/10;
            }
            ds+=sum;
        }
        int result=abs(es-ds);
        return result;
    }
};