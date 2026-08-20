class Solution {
	public:
	int minThrows(int n, vector<int>& lad, vector<int>& sn) {
		// code here
		// n*6
		if (n == 1 or n == 2 )
			return 1;
		int cnt = 0;
		long long tgt = n*n;
		unordered_map<int, int>mp_lad, mp_sna;
		
		for (int i = 0; lad.size()/2>i; i++)
			mp_lad[lad[2*i]] = lad[2*i + 1];
		
		for (int i = 0; sn.size()/2>i; i++)
			mp_sna[sn[2*i]] = sn[2*i + 1];
		
		vector<int>vis(n*n + 1, 0);
		queue<pair<int, int>> qu; // curr number ,cnt
		qu.push({1, 0});
		vis[1] = 1;
		while (!qu.empty()) {
			auto [node, cost] = qu.front();
			qu.pop();
			if (node == tgt)
				return cost;
			
			for (int i = 1; 7>i; i++) {
				int curr_node = node + i;
				if (curr_node > tgt)
    continue;
				if (mp_lad.count(curr_node))
					curr_node = mp_lad[curr_node];
					
				else if (mp_sna.count(curr_node))
					curr_node = mp_sna[curr_node];
				
				if (!vis[curr_node]) {
					vis[curr_node] = 1;
					qu.push({curr_node, cost + 1});
				}
				
			}
			
		}
		return - 1;
	}
};
