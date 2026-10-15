class Solution {
public:
    vector<int> decode(vector<int>& arr, int ele) {
        int n = arr.size() + 1;
        vector<int> ans(n);
        ans[0] = ele;
        for (int i = 0; n - 1 > i; i++) {
            ans[i + 1] = arr[i] ^ ans[i];
        }
        return ans;
    }
};