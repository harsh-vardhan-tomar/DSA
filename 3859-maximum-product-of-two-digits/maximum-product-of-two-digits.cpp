class Solution {
public:
    int maxProduct(int n) {
        int maxprod=0;
        vector<int> nums;
        while(n>0){
            int rem=n%10;
            nums.push_back(rem);
            n=n/10;
        }
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]*nums[j]>maxprod){
                    maxprod=nums[i]*nums[j];
                }
            }
        }
        return maxprod;
    }
};