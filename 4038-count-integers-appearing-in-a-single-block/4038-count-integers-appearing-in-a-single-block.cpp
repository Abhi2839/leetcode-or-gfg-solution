class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, int> mp;
        unordered_set<int> st;

        for (int i = 0; i < nums.size(); i++) {
            if (!mp.count(nums[i])) {
                mp[nums[i]] = i;
            }
            else if (nums[i] != nums[i - 1]) {
                st.insert(nums[i]);
            }
        }

        return mp.size() - st.size();
    }
};