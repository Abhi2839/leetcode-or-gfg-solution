class Solution {
public:
    bool check(vector<int>& arr) {
        int n = arr.size();
        int diff = arr[1] - arr[0];
        for (int i = 2; n > i; i++) {
            if (diff != arr[i] - arr[i - 1])
                return false;
        }
        return true;
    }
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        for (int i = 0; nums.size() > i; i++)
            mp[nums[i]].push_back(i);
        int cnt = 0;
        for (auto [x, y] : mp) {
            if (y.size() >= 3)
                if (check(y))
                    cnt++;
        }
        return cnt;
    }
};