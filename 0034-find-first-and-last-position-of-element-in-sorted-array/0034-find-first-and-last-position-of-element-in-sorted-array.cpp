class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        int s=-1;
        int e=-1;
        int n=arr.size();

        for(int i=0; i<n; i++){
            if(arr[i]==target){
                if(s==-1){
                    s=i;
                }
                     e=i;
            }
        }
        return {s,e};
    }
};