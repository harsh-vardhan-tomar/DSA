class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int n=s.length();
        int prod=1;
        int reversedIndex=0;
        for(int i=0;i<n;i++){
            reversedIndex = 'z' - s[i] + 1;
            prod=(i+1)*reversedIndex;
            sum=sum+prod;  
        }
        return sum;
    }
};