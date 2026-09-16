class Solution {
public:
    int sumOfMultiples(int n) {
        vector<int> arr(n+1);
        for(int i=1;i<n+1;i++){
            arr[i]=i;
        }
        int sum=0;
        for(int i=0;i<=n;i++){
            if(arr[i]%3==0 || arr[i]%5==0 || arr[i]%7==0){
                sum+=arr[i];
            }
        }
        return sum;
    }
};