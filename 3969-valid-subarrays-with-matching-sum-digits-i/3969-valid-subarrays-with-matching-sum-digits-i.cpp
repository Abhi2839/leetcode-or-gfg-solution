class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int y) {
        int cnt=0;
        int n=nums.size();
        for (int i=0;n>i;i++){
            long long sum =0;//to prevent overflow 
            for (int j=i;n>j;j++){
                sum+=nums[j];
                if (sum%10!=y) continue;
    
                string x=to_string(sum);
                reverse(x.begin(),x.end());
                if (x[x.length()-1]-'0'==y) cnt++;
            }
        }
        return cnt;
    }
};