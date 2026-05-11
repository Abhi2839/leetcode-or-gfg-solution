class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for (int i = 0; nums.size() > i; i++) {

            if (i % 10 == nums[i])
                return i;
        }
        return -1;
    }
};