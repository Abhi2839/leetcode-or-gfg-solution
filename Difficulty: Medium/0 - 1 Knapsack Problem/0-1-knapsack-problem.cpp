class Solution {
  public:
  int soln(int w, vector<int> &val, vector<int> &wt,int n,vector<vector<int>>&dp){
      if (n==0 or w==0) return 0;
      if (dp[n][w]!=-1) return dp[n][w];
      int pick=0;
      if (wt[n-1]<=w){
          pick=val[n-1]+soln(w-wt[n-1],val,wt,n-1,dp);
      }
      int npick=soln(w,val,wt,n-1,dp);
      
      return dp[n][w]=max(pick,npick);
  }
    int knapsack(int w, vector<int> &val, vector<int> &wt) {
        // code here
        int n=val.size();
        vector<vector<int>>dp(n+1,vector<int>(w+1,-1));
        
        return soln(w,val,wt,val.size(),dp);
    }
};