class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        ans.push_back(nums[0]);
        int n = nums.size();
        for (int i = 1; n > i; i++) {
            vector<int>& last = ans.back();
            vector<int>& curr = nums[i];
            if (last[1] >= curr[0])
                last[1] = max(last[1], curr[1]);
            else
                ans.push_back(curr);
        }
        int m = ans.size();
        int cnt = 0;
        for (int i = 0; m > i; i++) {
            cnt += (ans[i][1] - ans[i][0]);
        }
        return cnt + m;
    }
};