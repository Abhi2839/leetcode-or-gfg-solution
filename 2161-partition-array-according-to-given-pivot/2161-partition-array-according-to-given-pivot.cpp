
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;

        for (int x : nums)
            if (x < pivot)
                ans.push_back(x);

        for (int x : nums)
            if (x == pivot)
                ans.push_back(x);

        for (int x : nums)
            if (x > pivot)
                ans.push_back(x);

        return ans;
    }
};
// class Solution {
// public:
//     vector<int> pivotArray(vector<int>& nums, int pivot) {
//         // count no of ele equal
//         int eq = 0;
//         vector<int> sm;
//         vector<int> gt;
//         for (auto x : nums) {
//             if (pivot > x) {
//                 sm.push_back(x);
//             } else if (pivot < x) {
//                 gt.push_back(x);
//             } else
//                 eq++;
//         }
//         // nums.erase(nums.begin(), nums.end());
//         nums.clear();
//         for (auto x : sm)
//             nums.push_back(x);
//         while (eq--)
//             nums.push_back(pivot);
//         for (auto x : gt)
//             nums.push_back(x);
//         return nums;
//     }
// };
