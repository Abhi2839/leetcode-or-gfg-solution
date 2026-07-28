class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3,
                     vector<int>& nums4) {
        int cnt = 0;
        unordered_map<int, int> mp;
        int n = nums1.size();
        for (int i = 0; n > i; i++) {
            for (int j = 0; n > j; j++) {
                int sum = nums1[i] + nums2[j];
                mp[sum]++;
            }
        }
        for (int i = 0; n > i; i++) {
            for (int j = 0; n > j; j++) {
                int sum = nums3[i] + nums4[j];
                if (mp.find(-sum) != mp.end())
                    cnt += mp[-(sum)];
            }
        }
        return cnt;
    }
};