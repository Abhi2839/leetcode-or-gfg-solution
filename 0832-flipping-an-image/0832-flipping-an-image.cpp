class Solution {
public:
    vector<vector<int>>& flipAndInvertImage(vector<vector<int>>& arr) {
        for (auto& r : arr) {
            reverse(r.begin(), r.end());
            for (auto& v : r)
                v ^= 1;
        }
        return arr;
    }
};