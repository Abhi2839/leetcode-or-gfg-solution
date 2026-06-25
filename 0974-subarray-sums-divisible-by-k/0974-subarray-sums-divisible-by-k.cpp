class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int cnt = 0;
        // store rem in hashmap using prefix sum
        int sum = 0;
        // unordered_map<int,int>mp;
        vector<int>mp(k,0);
        mp[0] = 1; // base case
        for (int i = 0; nums.size() > i; i++) {
            sum = ((sum + nums[i]) % k + k) % k;

            cnt += mp[sum];
            mp[sum]++;
        }
        return cnt;
    }
};