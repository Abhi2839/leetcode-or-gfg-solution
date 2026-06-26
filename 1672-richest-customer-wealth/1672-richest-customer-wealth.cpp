class Solution {
public:
    int maximumWealth(vector<vector<int>>& arr) {
        int sum=INT_MIN;
        for (auto x:arr){
            int ans=0;
            for (auto y:x){
              ans+=y;
            }
            sum=max(sum,ans);
        }
        return sum;
    }
};