class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& edges, int src, int dst, int k) {
        // code here
        // adj list 
        vector<pair<int,int>>adj[n];
        for (auto &e:edges){
            adj[e[0]].push_back({e[1],e[2]});
        }
        vector<int>dist(n+1,1e9);
        dist[src]=0;
        
queue<pair<int,pair<int,int>>>qu;
        qu.push({0,{src,0}});//dist src step
        while(!qu.empty()){
            auto it=qu.front();
            qu.pop();
            int stops=it.first;
            int node =it.second.first;
            int cosst=it.second.second;
            for (auto x:adj[node]){
                int nei=x.first;
                int cost=x.second;
                if (k>=stops and dist[nei]>cost+cosst){
                    dist[nei]=cost+cosst;
                    qu.push({stops+1,{nei,dist[nei]}});
                }
            }
        }
        return dist[dst]==1e9 ? -1:dist[dst];
    }
};