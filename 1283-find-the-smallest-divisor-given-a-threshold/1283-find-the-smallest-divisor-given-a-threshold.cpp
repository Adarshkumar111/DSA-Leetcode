class Solution {
public:
    int sumByD (vector<int> &arr, int div) {
        int sum = 0;
        int n= arr.size();
        for(int i = 0; i<n;i++) {
            sum = sum + ceil((double) (arr[i]) / (double) (div));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& arr, int threshold) {
        int low=1;
        int high =*max_element(arr.begin(), arr.end());
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;

            if(sumByD(arr, mid)<=threshold){
                ans=-1;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;

    }
};