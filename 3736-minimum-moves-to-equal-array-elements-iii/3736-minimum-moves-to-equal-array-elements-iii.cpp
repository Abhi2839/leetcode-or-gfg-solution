class Solution {
public:
    int minMoves(vector<int>& nums) {
        int moves = 0, maxi = INT_MIN;
        for (auto x : nums)
            maxi = max(maxi, x);
        for (auto x : nums)
            moves += (maxi - x);
        return moves;
    }
};