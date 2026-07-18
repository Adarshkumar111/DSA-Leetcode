class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int n=arr.size();
        int xr=arr[0];
        for(int i=1; i<n; i++){
            xr=xr^arr[i];
        }
        return xr;
        
    }
};