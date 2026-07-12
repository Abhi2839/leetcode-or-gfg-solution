class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> mp;
        vector<int> ans(arr.begin(), arr.end());
        int rnk = 1;
        sort(arr.begin(), arr.end());
        for (auto x : arr) {
            if (mp.find(x) == mp.end()) { // if ele is not present
                mp[x] = rnk++;
            }
        }
        for (int i = 0; ans.size() > i; i++) {
            ans[i] = mp[ans[i]];
        }
        return ans;
    }
};