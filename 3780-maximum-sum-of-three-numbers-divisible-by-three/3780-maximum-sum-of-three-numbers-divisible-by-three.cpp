class Solution {
public:
    int maximumSum(vector<int>& nums) {

        // int n = nums.size();

        // int ans = 0;

        // optimised
        // rem concpt  0 1 2
        // 0 0 0
        // 0 1 2
        // 1 1 1
        // 2 2 2
        // max of these
        vector<int> ans[3];
        int soln = 0;
        for (auto x : nums) {
            ans[x % 3].push_back(x);
        }
        for (int i = 0; 3 > i; i++)
            sort(ans[i].rbegin(), ans[i].rend());
        if (ans[0].size() >= 3)
            soln = max(soln, ans[0][0] + ans[0][1] + ans[0][2]);
        if (ans[1].size() >= 3)
            soln = max(soln, ans[1][0] + ans[1][1] + ans[1][2]);
        if (ans[2].size() >= 3)
            soln = max(soln, ans[2][0] + ans[2][1] + ans[2][2]);

        if (!ans[0].empty() and !ans[1].empty() and !ans[2].empty())
            soln = max(soln, ans[0][0] + ans[1][0] + ans[2][0]);

        return soln;

        // brute force
        // for (int i = 0; i < n; i++) {

        //     for (int j = i + 1; j < n; j++) {

        //         for (int k = j + 1; k < n; k++) {

        //             int sum = nums[i] + nums[j] + nums[k];

        //             if (sum % 3 == 0) {
        //                 ans = max(ans, sum);
        //             }
        //         }
        //     }
        // }

        // return ans;
    }
};

// class Solution {
// public:
//     int maximumSum(vector<int>& nums) {
//         int sum = 0, ans = 0;
//         int n = nums.size();
//         for (int i = 0; 3 > i; i++)
//             sum += nums[i];

//         if (sum % 3 == 0)
//             ans = sum;

//         for (int i = 3; n > i; i++) {
//             sum += (nums[i] - nums[i - 3]);
//             if (sum % 3 == 0) {
//                 ans = max(ans, sum);
//             }
//         }
//         return ans;
//     }
// };
