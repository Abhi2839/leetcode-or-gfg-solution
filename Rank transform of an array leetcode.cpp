class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans(arr.size());
        vector<int> x(arr.begin(), arr.end());
        sort(x.begin(), x.end());
        map<int, int> mp;
        int rank = 1;
        for (int i = 0; i < x.size(); i++) {
            if (mp.count(x[i]) == 0) {
                mp[x[i]] = rank++;
            }
        }

        for (int i = 0; arr.size() > i; i++) {
            ans[i] = mp[arr[i]];
        }
        return ans;
    }
};