class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPileSize = 0;
        for (int pile : piles) {
            maxPileSize = max(maxPileSize, pile);
        }

        int start = 1, end = maxPileSize;

        while (start < end) {
            int mid = start + (end - start) / 2;
            long long hoursTaken = 0;

            for (int pile : piles) {
                hoursTaken += (pile + mid - 1) / mid;
            }

            if (hoursTaken > h)
                start = mid + 1;
            else
                end = mid;
        }

        return start;
    }
};
