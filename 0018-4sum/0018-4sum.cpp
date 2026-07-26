class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; n - 3 > i; i++) {
            if (i > 0 and nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; n - 2 > j; j++) {
                if (j > i + 1 and nums[j] == nums[j - 1])
                    continue;
                int k = j + 1, l = n - 1;
                while (l > k) {
                   long long sum =1LL* nums[i] + nums[k] + nums[j] + nums[l];
                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        l--;
                        k++;
                        while (l > k and nums[k] == nums[k - 1])
                            k++;
                        while (l > k and nums[l] == nums[l + 1])
                            l--;

                    } else if (sum > target)
                        l--;
                    else
                        k++;
                }
            }
        }
        return ans;
    }
};