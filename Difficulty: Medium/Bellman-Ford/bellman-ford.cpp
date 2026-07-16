class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        vector<int>dist(V,1e8);
        dist[src]=0;
        
        for (int i=0;V>i;i++){  //n-1
            for (auto &e:edges){
            if (dist[e[0]]!=1e8 and dist[e[0]]+e[2]<dist[e[1]])
            dist[e[1]]=e[2]+dist[e[0]];
        }
        }
        // relax nth edge to check negative edge
        for (auto &e:edges){
            if (dist[e[0]]!=1e8 and dist[e[0]]+e[2]<dist[e[1]])
           return {-1};
        }
       return dist;
        
    }
};
