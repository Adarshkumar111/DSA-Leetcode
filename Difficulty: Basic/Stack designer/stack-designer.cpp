//Back-end complete function Template for C++
class Solution {
  public:
    stack<int> push(vector<int> &arr) {
        int n = arr.size();
        stack<int> s;
        for (int i = 0; i < n; i++) {
            s.push(arr[i]);
        }
        return s;
    }

    void pop(stack<int> s) {
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
    }
};