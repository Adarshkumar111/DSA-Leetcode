class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
        vector<int>temp(n);
        int k=0;
        for(int i=0; i<n; i++){
            if(arr[i]!=0){
                temp[k]=arr[i];
                k++;
            }
        }

        for(int i=0; i<k; i++){
            arr[i]=temp[i];
        }
        for(int i=k; i<n;i++){
            arr[i]=0;
        }
    }
};