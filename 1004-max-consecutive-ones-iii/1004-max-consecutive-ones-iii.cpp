class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int len = 0;
        int l = 0, zerocnt = 0;
        for (int i = 0; nums.size() > i; i++) {
            if (nums[i] == 0)
                zerocnt++;
            while (zerocnt > k) {
                if (nums[l] == 0)
                    zerocnt--;
                l++;
            }
            len = max(len, i+1-l);
        }
        return len;
    }
};