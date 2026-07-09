class Solution {
public:
int soln(vector<int>& days, vector<int>& costs,int idx,int n,int validDays,vector<vector<int>>&dp){
    if (idx==n) return 0;
    if (dp[idx][validDays]!=-1) return dp[idx][validDays];
    int ans=INT_MAX;
    if (validDays<days[idx]){
        ans=min(ans,costs[0]+soln(days,costs,idx+1,n,days[idx],dp));
        ans=min(ans,costs[1]+soln(days,costs,idx+1,n,days[idx]+6,dp));
        ans=min(ans,costs[2]+soln(days,costs,idx+1,n,days[idx]+29,dp));
    }
    else{
        return soln(days,costs,idx+1,n,validDays,dp);
    }
return dp[idx][validDays]=ans;
}
    int mincostTickets(vector<int>& days, vector<int>& costs) {
int n=days.size();
      vector<vector<int>>dp(n+1,vector<int>(395,-1));
      
return soln(days,costs,0,n,0,dp);

    }
};