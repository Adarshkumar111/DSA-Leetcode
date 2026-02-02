class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
        vector<int>temp(n);
        int k=0;

        // store non zero
        for(int i=0; i<n; i++){
            if(arr[i]!=0){
                temp[k]=arr[i];
                k++;
            }
        }

        // copy non zero in arrr
        for(int i=0; i<k; i++){
            arr[i]=temp[i];
        }

        //  add 0 in last
        for(int i=k; i<n;i++){
            arr[i]=0;
        }
    }
};