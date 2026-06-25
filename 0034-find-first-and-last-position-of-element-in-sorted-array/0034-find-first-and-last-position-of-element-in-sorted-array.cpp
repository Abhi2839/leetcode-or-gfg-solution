class Solution {
public:
    int last(vector<int>& nums, int tgt) {
        int l = 0, r = nums.size() - 1;
        int ans = -1;
        while (r >= l) {
            int mid = l + (r - l) / 2;
            if (nums[mid] <= tgt) {
                if (nums[mid] == tgt)
                    ans = mid;
                l = mid + 1;

            } else
                r = mid - 1;
        }

        return ans;
    }
    int first(vector<int>& nums, int tgt) {
        int l = 0, r = nums.size() - 1;
        int ans = -1;
        while (r >= l) {
            int mid = l + (r - l) / 2;
            if (nums[mid] >= tgt) {
                if (nums[mid] == tgt)
                    ans = mid;
                r = mid - 1;
            } else
                l = mid + 1;
        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2, -1);
        ans[0] = first(nums, target);
        ans[1] = last(nums, target);
        return ans;
    }
};