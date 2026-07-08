class Solution {
  public:
  void bfs(vector<vector<int>>&mat, vector<vector<int>>&vis,queue<pair<int,int>>qu){
       int m=mat.size();
        int n=mat[0].size();
      int dr[4]={-1,0,1,0};
      int dc[4]={0,1,0,-1};
      while(!qu.empty()){
          auto [x,y]=qu.front();
          qu.pop();
          
          for (int i=0;4>i;i++){
              int nr=dr[i]+x;
              int nc=dc[i]+y;
              while(nr>=0 and nc>=0 and m>nr and n>nc and  !vis[nr][nc] and mat[nr][nc]>=mat[x][y]){
                  vis[nr][nc]=1;
                  qu.push({nr,nc});
              }
          }
      }
  }
    int countCoordinates(vector<vector<int>>& mat) {
        // code here
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>p(m,vector<int>(n,0));
        vector<vector<int>>q(m,vector<int>(n,0));
        queue<pair<int,int>>qp;
        queue<pair<int,int>>qq;
        for (int i = 0; i < m; i++) {
            qp.push({i, 0});
            p[i][0] = 1;
        }
        for (int j = 0; j < n; j++) {
            if (!p[0][j]) {
                qp.push({0, j});
                p[0][j] = 1;
            }
        }
        for (int i = 0; i < m; i++) {
            qq.push({i, n - 1});
            q[i][n - 1] = 1;
        }
        for (int j = 0; j < n; j++) {
            if (!q[m - 1][j]) {
                qq.push({m - 1, j});
                q[m - 1][j] = 1;
            }
        }
        int cnt=0;
        bfs(mat,p,qp);
        bfs(mat,q,qq);
        for (int i=0;m>i;i++){
            for (int j=0;n>j;j++){
                if (p[i][j] and q[i][j]) cnt++;
            }
        }
        return cnt;
    }
};