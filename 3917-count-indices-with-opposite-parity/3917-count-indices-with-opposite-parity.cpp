class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        for (int i = 0; nums.size() > i; i++) {
            int cnt=0;
            for (int j = i + 1; nums.size() > j; j++) {
                if ((nums[i] % 2 == 0 and nums[j] % 2 == 1) or
                    (nums[j] % 2 == 0 and nums[i] % 2 == 1)) {
                    cnt++;
                }
            }
            ans[i]=cnt;
        }
        return ans;
    }
};