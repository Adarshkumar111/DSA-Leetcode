class Solution {
  public:
    int xorGate(vector<int> arr, int N) {
        // code here
        int n=arr.size();
        int res=arr[0];
        for(int i=1; i<n; i++){
            res=res^arr[i];
        }
        return res;
    }
};