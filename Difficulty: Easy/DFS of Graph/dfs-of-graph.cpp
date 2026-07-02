class Solution {
  public:
  void dfs(vector<vector<int>>&adj,vector<bool>&visited,int s,vector<int> &d){
      visited[s]=true;
      d.push_back(s);
      for (auto it:adj[s]){
          if (!visited[it])
          dfs(adj,visited,it,d);
      }
  }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<bool>visited(adj.size(),false);
        int s=0;
        vector<int>d;
        dfs(adj,visited,s,d);
        return d;
        
    }
};