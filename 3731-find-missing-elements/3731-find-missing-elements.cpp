class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int l=nums[0];
        int h=nums[nums.size()-1];
        int j=0;
        for (int i=l;h>=i;i++){
           if (nums[j]==i) j++;
           else ans.push_back(i);
        }
        return ans;
    }
};