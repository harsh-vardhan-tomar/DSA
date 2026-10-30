class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int n1=arr1.size();
        int n2=arr2.size();
        double median=0;
        vector<int> merged;
        int i=0,j=0;
        while(i<n1 && j<n2){
            if(arr1[i]<=arr2[j]){
                merged.push_back(arr1[i]);
                i++;
            }
            else if(arr1[i]>arr2[j]){
                merged.push_back(arr2[j]);
                j++;
            }
        }
        while(i<n1){
            merged.push_back(arr1[i]);
            i++;
        }
        while(j<n2){
            merged.push_back(arr2[j]);
            j++;
        }
        int total=n1+n2;
        if(total%2==0){
            int mid1=total/2;
            int mid2=(total/2)-1;
            median=(merged[mid1]+merged[mid2])/2.0;
            return median;
        }
        int mid=total/2;
        return merged[mid];
    }
};