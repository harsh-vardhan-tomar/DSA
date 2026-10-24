class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxi=0;
        // for(int i=0;i<s.size();i++){   // O(N^3)
        //     for(int j=i;j<s.size();j++){
        //         vector<int> freq(26,0);
        //         int count=0;
        //         for(int k=i;k<=j;k++){
        //             int ch=s[k]-'a';
        //             freq[ch]++;
        //             if(freq[ch]==1){
        //                 count++;
        //             }
        //             else if(freq[ch]>1){
        //                 count=-1;
        //                 break;
        //             }
        //         }
        //         if(count>maxi){
        //             maxi=count;
        //         }
        //     }
        // }


        // for(int i=0;i<s.size();i++){  //  O(N^2)
        //     vector<int> freq(26,0);
        //     int count=0;
        //     for(int j=i;j<s.size();j++){
        //         int ch=s[j]-'a';
        //         freq[ch]++;
        //         if(freq[ch]==1){
        //             count++;
        //         }
        //         else if(freq[ch]>1){
        //             break;
        //         }
        //     }
        //     if(count>maxi){
        //         maxi=count;
        //     }
        // }

        // vector<int> freq(26,0); 
        // int j=0;
        // for(int i=0;i<s.size();i++){
        //     int ch=s[i]-'a';
        //     freq[ch]++;
        //     while(freq[ch]>1){
        //         freq[s[j]-'a']--;
        //         j++;
        //     }
        //     maxi=max(maxi,i-j+1);
        // }


        vector<int> freq(128,0); 
        int j=0;
        for(int i=0;i<s.size();i++){
            int ch=s[i];
            freq[ch]++;
            while(freq[ch]>1){
                freq[s[j]]--;
                j++;
            }
            maxi=max(maxi,i-j+1);
        }
        return maxi;
    }
};