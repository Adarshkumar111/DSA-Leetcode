class Solution {
public:
    vector<int> gfSeries(int n) {
        vector<int> res;

        if (n >= 1)
            res.push_back(0);

        if (n >= 2)
            res.push_back(1);

        for (int i = 2; i < n; i++) {
            int curr = res[i - 2] * res[i - 2] - res[i - 1];
            res.push_back(curr);
        }

        return res;
    }
};