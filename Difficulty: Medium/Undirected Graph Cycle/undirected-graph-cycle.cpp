class Solution {
  public:
  bool dfs(vector<vector<int>>&adj,vector<int>&visited,int node ,int parent){
      visited[node]=1;
      for (auto x:adj[node]){
          if (!visited[x]){
              if (dfs(adj,visited,x,node))
              return true;
          }
          else if (x!=parent) // adjacent vertex visted but not equal to parent but then cycle exit
          return true;
      }
      return false;
  }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);

for (auto &e : edges) {
    int u = e[0];
    int v = e[1];
    adj[u].push_back(v);
    adj[v].push_back(u);
}

        vector<int>visited(V,0);
        for (int i=0;V>i;i++){
            if (!visited[i]){
                if (dfs(adj,visited,i,-1))
                return true;
            }
        }
       return false;
            
    }
};