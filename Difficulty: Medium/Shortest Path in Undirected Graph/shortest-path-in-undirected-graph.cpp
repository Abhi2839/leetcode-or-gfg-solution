class Solution {
  public:
    vector<int> shortestPath(int V, vector<vector<int>> &edges, int src) {
        // code here
        vector<int>adj[V];
        for (auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<int>dist(V,-1);
        dist[src]=0;
      queue<int>qu;
      qu.push(src);
      
        while(!qu.empty()){
            int node=qu.front();
            qu.pop();
             for (auto x:adj[node]){
                 if (dist[x]==-1){
                     dist[x]=dist[node]+1;
                     qu.push(x);
                 }
             }
        }
        return dist;
    }
};
