class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        stack<int>st;
        for(int i=0; i<arr.size(); i++){
            st.push(arr[i]);
        }
        
        int i=0;
        while(!st.empty()){
            int top=st.top();
            arr[i]=top;
            st.pop();
            i++;
        }
        return ;
    }
};