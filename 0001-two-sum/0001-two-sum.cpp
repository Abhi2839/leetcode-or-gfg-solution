class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans(2);
        unordered_map<int,int>mp;
        for (int i=0;nums.size()>i;i++){
            int tgt=target-nums[i];
            if (mp.find(tgt)!=mp.end()){
                ans[0]=mp[tgt];
                ans[1]=i;
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};