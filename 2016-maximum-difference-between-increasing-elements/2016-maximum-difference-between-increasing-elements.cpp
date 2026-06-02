class Solution {
public:
    int maximumDifference(vector<int>& nums) {
    int ans=INT_MIN;
    int n=nums.size();
     for (int i=0;n>i;i++){
        for (int j=i+1;n>j;j++){
            if (nums[i]<nums[j]) 
            ans=max(ans,nums[j]-nums[i]);
        }
     }
return ans==INT_MIN?-1:ans;
    }
};