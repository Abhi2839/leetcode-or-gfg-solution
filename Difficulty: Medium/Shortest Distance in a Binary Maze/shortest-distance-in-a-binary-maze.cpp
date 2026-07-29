class Solution {
	public:
	int shortestPath(vector<vector<int>> &mat, vector<int> &src, vector<int> &dest) {
		// code here
		int m = mat.size();
		int n = mat[0].size();
		if (mat[src[0]][src[1]] == 0 || mat[dest[0]][dest[1]] == 0) {
			return - 1;
		}
		
		if (src[0] == dest[0] && src[1] == dest[1]) {
			return 0;
		}
		
		vector<vector<int>> vis(m, vector<int>(n, 0));
		
		int dr[4] = {-1, 0, 1, 0};
		int dc[4] = {0, -1, 0, 1};
		queue<pair<int, pair<int, int>> > qu;
		qu.push ({0, {src[0], src[1]}});
		
		while (!qu.empty()) {
			auto x = qu.front();
			qu.pop();
			
			int dist = x.first;
			int y = x.second.first;
			int z = x.second.second;
			
			if (y == dest[0] and z == dest[1])
				return dist;
			
			for (int k = 0; 4>k; k++) {
				int nr = dr[k]+y;
				int nc = dc[k]+z;
				
				if (nr >= 0 and nc >= 0 and m>nr and n>nc and !vis[nr][nc] and mat[nr][nc] == 1) {
					vis[nr][nc] = 1;
					qu.push({dist + 1, {nr, nc}});
				}
			}
			
		}
		return - 1;
	}
};
