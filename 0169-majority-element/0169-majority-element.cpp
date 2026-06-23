class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, ele = 0;
        for (auto x : nums) {
            if (cnt == 0) {
                cnt++;
                ele = x;
                continue;
            }
            if (ele == x)
                cnt++;
            else
                cnt--;
        }
        return ele;
    }
};