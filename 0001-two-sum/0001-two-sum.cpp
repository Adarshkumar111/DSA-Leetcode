class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int x) {
        vector<int>v(2);
       int n=arr.size();
       for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(i==j) continue;
            if(arr[i]+arr[j]==x){
                return {i, j};
            }
            
        }
       }
        return v;
    }
};