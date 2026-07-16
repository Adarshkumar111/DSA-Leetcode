class Solution {
public:
    int firstUniqChar(string s) {

        vector<int> freq(26, 0);
        queue<char> q;
        for (char ch : s)
            freq[ch - 'a']++;
        for (char ch : s) {
            q.push(ch);

            while (!q.empty() && freq[q.front() - 'a'] > 1) {
                q.pop();
            }
        }
        if (q.empty())
            return -1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == q.front())
                return i;
        }
        return -1;
    }
};