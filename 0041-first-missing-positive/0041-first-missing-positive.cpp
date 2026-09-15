class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int res = 1;
        int n = nums.size();
        vector<int> idx(n);
        iota(idx.begin(), idx.end(), 0);
        sort(idx.begin(), idx.end(),
             [&](int a, int b) { 
                return nums[a] < nums[b]; 
                });

        for (auto x : idx) {
            if (nums[x] == res)
                res++;
            else if (nums[x] > res)
                break;
        }
        return res;
    }
};