class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0, ele = -1;
        for (auto x : nums) {
            if (cnt == 0) {
                ele = x;
                // cnt++;
            }
            if (ele == x)
                cnt++;
            else
                cnt--;
        }
        cnt = 0;
        // for checking if we found the element that has freq n/2
        for (auto x : nums)
            if (ele == x)
                cnt++;

        return (cnt > nums.size() / 2) ? ele : -1;
    }
};