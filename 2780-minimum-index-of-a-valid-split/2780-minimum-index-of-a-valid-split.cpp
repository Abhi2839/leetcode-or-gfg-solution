class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        // most freq element
        int ele, cnt = 0;
        for (auto x : nums) {
            if (cnt == 0)
                ele = x;
            if (ele == x)
                cnt++;
            else
                cnt--;
        }
        // totalcnt of freq ele
        cnt = 0;
        for (auto x : nums)
            if (x == ele)
                cnt++;

        cout << ele;
        int leftcnt = 0;
        int n = nums.size();
        for (int i = 0; nums.size() > i; i++) {
            if (nums[i] == ele)
                leftcnt++;

            int leftside = i + 1;

            int rightside = n - leftside;
            bool left = (2 * leftcnt) > leftside;

            bool right = (cnt - leftcnt) * 2 > rightside;
            if (left and right)
                return i;
        }
        return -1;
    }
};