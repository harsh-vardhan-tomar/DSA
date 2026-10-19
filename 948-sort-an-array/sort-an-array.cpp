class Solution {
    void merge(vector<int> &arr,int s, int e){
        int mid=s+(e-s)/2;
        int len1=mid-s+1;
        int len2=e-mid;

        int* first=new int[len1];
        int* second=new int[len2];

        int k=s;
        for(int i=0;i<len1;i++){
            first[i]=arr[k];
            k++;
        }
        k=mid+1;
        for(int i=0;i<len2;i++){
            second[i]=arr[k];
            k++;
        }

        int index1=0,index2=0;
        k=s;
        while(index1<len1 && index2<len2){
            if(first[index1]<second[index2]){
                arr[k]=first[index1];
                k++;
                index1++;
            }
            else{
                arr[k]=second[index2];
                k++;
                index2++;
            }
        }
        if(index1==len1){
            for(int i=index2;i<len2;i++){
                arr[k]=second[i];
                k++;
            }
        }
        if(index2==len2){
            for(int i=index1;i<len1;i++){
                arr[k]=first[i];
                k++;
            }
        }
        delete []first;
        delete []second;
    }
    void mergeSort(vector<int> &arr, int s, int e){
        if(s>=e){
            return;
        }
        if(s<e){
            int mid=s+(e-s)/2;
            mergeSort(arr,s,mid);
            mergeSort(arr,mid+1,e);
            merge(arr,s,e);
        }
    }
public:
    vector<int> sortArray(vector<int>& arr) {
        int n=arr.size();
        mergeSort(arr,0,arr.size()-1);
        return arr;
    }
};