class Solution {
public:
    int rob(vector<int>& nums) {
        int ans=0,ans1=0;
        int n=nums.size();
        if (n==1) return nums[0];
        if (n==0) return 0;
        for (int i=0;n>i;i++){
            int curr=max(ans,ans1+nums[i]) ;
            ans1=ans;
            ans=curr;
        }
        return ans;
    }
};